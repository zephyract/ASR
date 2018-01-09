/**************************************************************************//**
* @file sampler.c
* @brief Initializes Automatic Speech Recognition
* @version 0.0.1
******************************************************************************/

#include <stdbool.h>
#include <stdint.h>

#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "inc/hw_adc.h"
#include "inc/hw_types.h"
#include "inc/hw_udma.h"
#include "inc/hw_emac.h"
#include "driverlib/debug.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"
#include "driverlib/adc.h"
#include "driverlib/udma.h"
#include "driverlib/emac.h"
#include "driverlib/timer.h"
#include "driverlib/rom.h"

#include "settings.h"
#include "sampler.h"

#pragma DATA_ALIGN(ucControlTable, 1024)
uint8_t ucControlTable[1024];
uint32_t n = 0;
uint32_t g_ui32DMAErrCount = 0;
uint32_t g_ui32SysTickCount = 0;
int16_t ADC_OUT_0[ADC_SAMPLE_BUF_SIZE];
int16_t ADC_OUT_1[ADC_SAMPLE_BUF_SIZE];
uint8_t ucControlTable[1024];
volatile uint32_t start, stop;

void UDMAERR_Handler()
{
    uint32_t ui32Status;
    ui32Status = ROM_uDMAErrorStatusGet();
    if(ui32Status)
    {
        ROM_uDMAErrorStatusClear();
        g_ui32DMAErrCount++;
    }
}
void SysTick_Handler()
{
    //
    // Update our system tick counter.
    //
    g_ui32SysTickCount++;
}

void ADC0SS0_Handler()
{
		volatile uint32_t ui32Mode;
    stop = g_ui32SysTickCount;
    ADCIntClear(ADC0_BASE, 0);
    n++;
		
    ui32Mode = ROM_uDMAChannelModeGet(UDMA_CHANNEL_ADC0 | UDMA_PRI_SELECT);
    if(ui32Mode == UDMA_MODE_STOP)
    {
				uDMAChannelTransferSet(UDMA_CHANNEL_ADC0 | UDMA_PRI_SELECT, UDMA_MODE_PINGPONG, (void *)(ADC0_BASE + ADC_O_SSFIFO0), &ADC_OUT_0, ADC_SAMPLE_BUF_SIZE);


        uDMAChannelEnable(UDMA_CHANNEL_ADC0);
    }

		ui32Mode = ROM_uDMAChannelModeGet(UDMA_CHANNEL_ADC0 | UDMA_ALT_SELECT);
    if(ui32Mode == UDMA_MODE_STOP)
    {
				uDMAChannelTransferSet(UDMA_CHANNEL_ADC0 | UDMA_ALT_SELECT, UDMA_MODE_PINGPONG, (void *)(ADC0_BASE + ADC_O_SSFIFO0), &ADC_OUT_1, ADC_SAMPLE_BUF_SIZE);


        uDMAChannelEnable(UDMA_CHANNEL_ADC0);
    }
    start = stop;


}

/* @brief Enables peripherals
 * Detailed description
 */
 void init_peripherals()
 {
	 ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER0);


    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);    // Enable the clock to ADC module
    SysCtlDelay(10); // Time for the peripheral enable to set

    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_UDMA);    // Enable the clock to uDMA 
    SysCtlDelay(10);

    
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);   // Enables the clock to PORT E
    SysCtlDelay(30);

	  ROM_SysTickPeriodSet(SysCtlClockGet() / 1000000 - 1); // Sets the period of the SysTic counter to 1us 
    ROM_SysTickIntEnable();
    ROM_SysTickEnable();

    ROM_TimerConfigure(TIMER0_BASE, TIMER_CFG_PERIODIC);
    ROM_TimerLoadSet(TIMER0_BASE, TIMER_A, 4999);   // Timer Load Value is set here. 16kHz
    ROM_TimerControlTrigger(TIMER0_BASE, TIMER_A, true);

		
    GPIOPinTypeADC(GPIO_PORTE_BASE, GPIO_PIN_2); // Configures PE2 for use as ADC input

    SysCtlDelay(80);

    ROM_IntMasterEnable();

    init_ADC();

    ROM_TimerEnable(TIMER0_BASE, TIMER_A);
		
		start = g_ui32SysTickCount;
 }
/* @brief Enables ADC and uDMA
 * It's setting an interrupt to happen every 256 samples.
 */
void init_ADC()
{

    ADCClockConfigSet(ADC0_BASE, ADC_CLOCK_SRC_PIOSC | ADC_CLOCK_RATE_HALF, 1);

    SysCtlDelay(10); // Time for the clock configuration to set

    IntDisable(INT_ADC0SS0);
    ADCIntDisable(ADC0_BASE, 0);
    ROM_ADCSequenceDisable(ADC0_BASE,0);
    // With sequence disabled, it is now safe to load the new configuration parameters

    ROM_ADCSequenceConfigure(ADC0_BASE, 0, ADC_TRIGGER_TIMER, 0);	

    ROM_ADCSequenceStepConfigure(ADC0_BASE,0,0,ADC_CTL_CH1| ADC_CTL_END | ADC_CTL_IE);

    ROM_ADCSequenceEnable(ADC0_BASE,0); //Once configuration is set, re-enable the sequencer
    ROM_ADCIntClear(ADC0_BASE,0);

    uDMAEnable(); // Enables uDMA
    uDMAControlBaseSet(ucControlTable);

    ADCSequenceDMAEnable(ADC0_BASE,0);
    // Allows DMA requests to be generated based on the FIFO level of the sample sequencer (SS0)

    uDMAChannelAttributeDisable(UDMA_CHANNEL_ADC0, UDMA_ATTR_ALTSELECT | UDMA_ATTR_HIGH_PRIORITY | UDMA_ATTR_REQMASK);

    uDMAChannelAttributeEnable(UDMA_CHANNEL_ADC0, UDMA_ATTR_USEBURST);
    // Only allow burst transfers

    uDMAChannelControlSet(UDMA_CHANNEL_ADC0 | UDMA_PRI_SELECT, UDMA_SIZE_16 | UDMA_SRC_INC_NONE | UDMA_DST_INC_16 | UDMA_ARB_1);
    uDMAChannelControlSet(UDMA_CHANNEL_ADC0 | UDMA_ALT_SELECT, UDMA_SIZE_16 | UDMA_SRC_INC_NONE | UDMA_DST_INC_16 | UDMA_ARB_1);


    uDMAChannelTransferSet(UDMA_CHANNEL_ADC0 | UDMA_PRI_SELECT, UDMA_MODE_PINGPONG, (void *)(ADC0_BASE + ADC_O_SSFIFO0), &ADC_OUT_0, ADC_SAMPLE_BUF_SIZE);
    uDMAChannelTransferSet(UDMA_CHANNEL_ADC0 | UDMA_ALT_SELECT, UDMA_MODE_PINGPONG, (void *)(ADC0_BASE + ADC_O_SSFIFO0), &ADC_OUT_1, ADC_SAMPLE_BUF_SIZE);



    ADCIntEnable(ADC0_BASE,0);
    IntEnable(INT_ADC0SS0);
    uDMAChannelEnable(UDMA_CHANNEL_ADC0); // Enables DMA channel so it can perform transfers

}





