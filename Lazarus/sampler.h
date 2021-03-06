/**************************************************************************//**
* @file sampler.h
* @brief Contains function prototypes and variable declarations for sampler.c
* @version 1
******************************************************************************/


extern int16_t ADC_OUT_0[ADC_SAMPLE_BUF_SIZE];
extern int16_t ADC_OUT_1[ADC_SAMPLE_BUF_SIZE];
extern uint32_t n;
extern uint32_t g_ui32DMAErrCount;
extern uint32_t g_ui32SysTickCount;

extern volatile uint32_t start, stop;

void UDMAERR_Handler(void);
void SysTick_Handler(void);
void ADC0SS0_Handler(void);

void init_ADC(void);
void init_peripherals(void);
//void UARTSend(int8_t *);			//TEST: SOUND
//void init_UART(void);					//TEST: SOUND