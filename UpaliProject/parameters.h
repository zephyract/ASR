

/*float32_t start_prob[4] = {5.3981264e-162,
2.7380917e-117,
1.0625171e-151,
1.0000000e+00
}; */

float32_t start_prob[4] = {0.0, 0.0, 0.0, 1.0};
const float32_t trans_mat[4][4] = {
{9.1047514e-01,7.2516250e-02,1.3143006e-02,3.8656031e-03},
{5.4662189e-10,9.4880654e-01,1.6650981e-55,5.1193462e-02},
{7.5679133e-02,7.0683772e-48,9.2158211e-01,2.7387560e-03},
{2.4361924e-02,3.6291861e-02,1.1953533e-01,8.1981088e-01}

};

float32_t transitions[16] = {9.1047514e-01,7.2516250e-02,1.3143006e-02,3.8656031e-03,5.4662189e-10,9.4880654e-01,1.6650981e-55,5.1193462e-02,7.5679133e-02,
														 7.0683772e-48,9.2158211e-01,2.7387560e-03,2.4361924e-02,3.6291861e-02,1.1953533e-01,8.1981088e-01};


float32_t means[4][12] = {
{8.7727805e+00,2.4610166e+00,-1.0865084e+00,-1.8454543e+00,5.6032785e-03,-3.2475189e-01,1.1786956e+00,1.8844667e+00,4.0997343e-01,8.9659267e-01,-1.9073340e-01,-4.5217381e-01},
{-4.2957621e-01,-5.5334100e-01,-6.4779771e-01,-6.8675035e-01,-6.6780701e-01,-1.4474107e-01,2.4056555e-02,-6.0847757e-02,-3.5853832e-01,-7.2502696e-01,-6.2884619e-01,-2.1534101e-01},
{8.5170167e+00,-2.4177564e+00,-5.3425430e+00,-7.0354873e+00,1.9081421e+00,1.0789364e+00,-1.6870413e+00,2.5142610e+00,-1.1101679e+00,-1.0726975e+00,-4.4739091e-01,-3.4490059e-01},
{8.8996854e+00,-1.9403048e+00,9.7817368e-01,-8.8344386e-01,2.0336364e+00,2.0136531e-01,1.0798207e+00,9.6844089e-01,-2.9077823e-01,-1.6295282e-01,5.6477573e-02,1.2046689e-01}
};

float32_t covars_norm[4] = {2.2700205059392223e-06,  0.00075372597926699617, 3.9923576318769942e-08, 6.3328938137158547e-08};

float32_t denominators[4][12] = {
{5.8891922e-03,8.0128744e-02,5.1289094e-02,2.5602806e-01,2.8365474e-01,3.7156921e-01,4.7605962e-01,4.9545976e-01,9.4083253e-01,3.4920813e-01,9.1239525e-01,2.0120565e+00},
{4.5263060e-01,9.2802770e-01,1.5764054e+00,1.7003953e+00,1.7856774e+00,2.1075988e+00,2.1633983e+00,2.0153979e+00,1.9245255e+00,2.2897094e+00,3.2215331e+00,4.3055963e+00},
{1.1325000e-02,6.6688919e-03,5.8251254e-03,1.6244073e-02,1.0839057e-01,4.5051348e-02,3.3657621e-02,1.2119612e-01,2.2775758e-01,4.2904832e-01,6.0654561e-01,1.0535827e+00},
{1.3668251e-03,2.4158591e-02,3.2394406e-02,3.1354709e-02,5.4486629e-02,1.2394970e-01,3.1791058e-01,6.2719200e-02,1.7834141e-01,3.1661790e-01,6.4619128e-01,3.4152203e-01}
};

float32_t mfcc[57][12] = {
{-0.7259765347,	-0.5834767889,	-0.2799366711,	0.5143884921,	-0.30757478,	-0.3950350471,	-0.8744316566,	0.2169024186,	-0.5737819763,	0.0242689747,	-0.5888620011,	-1.169558694},
{-0.392139742,	-0.6324603021,	-0.4386000181,	-0.2325948002,	-1.1586109549,	0.6260415683,	0.9266146797,	0.7860501192,	-0.0179499985,	0.2012271319,	-0.2323847597,	-0.5674272361},
{-1.6025817706,	-1.0496351796,	-0.9955289687,	0.0384231731,	-0.705030211,	0.3116243967,	1.7974174418,	1.7234078032,	0.4565602656,	-0.5031917708,	-1.0768580119,	-0.3696354117},
{-1.3362851499,	-0.4987403053,	-0.4443843942,	0.9480834574,	-0.6143431645,	-0.8627954696,	-0.2438620363,	0.1308547598,	0.1348081199,	-0.2914247226,	-0.9296818748,	-0.0909576442},
{-1.1499910351,	-1.2462660606,	-1.8474728309,	-1.0171370459,	-0.8857711723,	-0.195691837,	-0.8692740632,	-1.3628665142,	-0.5394402483,	-0.5378997262,	-0.8204880322,	0.3203464461},
{-1.3947447381,	-0.5291435107,	-1.4098204118,	-1.1093212652,	-0.6519431071,	0.0558172304,	-0.8069181819,	-0.1748538209,	0.5352932683,	0.4469882799,	-0.764745694,	-0.3790378048},
{10.3262725421,	-4.3663731468,	-0.0921773867,	-2.6011927712,	5.4170922575,	-0.2133981594,	0.1940173529,	1.174379806,	-0.5900857485,	-0.6501989861,	0.4825405864,	-0.4802285115},
{12.4188995848,	-5.3322881459,	-0.4220578169,	-0.6303444503,	4.0852176487,	-1.0722861162,	1.5531532696,	0.4176247622,	-0.0150594897,	-0.9235765053,	-0.1339768001,	0.0097981388},
{12.8274817571,	-3.9974191364,	1.2061384457,	2.7878597143,	1.2444758565,	-1.5045775543,	2.0668402761,	-0.4798197805,	-0.8910397279,	-1.2823740134,	0.9196167905,	0.030223479},
{17.198463896,	0.1781394884,	0.0667875825,	0.5976279112,	2.9149500043,	1.6417254132,	2.2799260141,	2.9117490363,	-0.5569666737,	0.5019731305,	1.2511433604,	-1.0830547887},
{10.9637809004,	-0.968214044,	1.6338362733,	-1.1456898956,	3.5480768145,	0.1639884443,	1.1257148551,	4.3900648396,	-1.5165896753,	0.8330336893,	0.8612363748,	0.0862339839},
{12.0391668539,	-1.3895449978,	2.3255875015,	-3.2357922194,	3.5266399135,	-1.1341341707,	1.3981680658,	2.5078332334,	-2.1051295762,	0.8993088241,	-0.2978325888,	-1.5365875183},
{12.8617563447,	0.0310013535,	-2.5539654511,	-7.3385916733,	4.536709772,	0.6651668289,	-1.6620368886,	4.0067089712,	-3.766483213,	0.8760012928,	-1.7843337612,	-2.4095392638},
{10.6449452573,	-1.4631571359,	-2.9280596857,	-8.5078697358,	2.6039821747,	-2.0180690515,	-1.2128581539,	2.7424037057,	-0.9356019759,	-0.3975776134,	-1.1438405282,	-1.5777542407},
{9.1404883755,	-2.8175127636,	-3.1023466613,	-8.0646187769,	2.1033982549,	-1.4273728606,	-1.5586133527,	3.0071675617,	0.1202933659,	0.3872809212,	0.4941947494,	0.2558744976},
{11.0181394598,	-0.4625986336,	-6.0233657838,	-10.9647203988,	0.8891653552,	1.8599533535,	-5.2005622976,	4.9254720582,	-2.5588465477,	1.0268771554,	0.990467992,	0.851602402},
{9.9508998069,	-1.1742500188,	-6.7740488528,	-10.797018962,	0.8351483693,	4.2752626947,	-6.0803634975,	5.2138848347,	-3.4364731769,	-0.084889175,	0.9150248902,	0.4536549317},
{7.1871042808,	-1.9306496354,	-4.2621533578,	-6.0040015563,	0.9288380281,	4.2867952292,	-5.7006080364,	3.1211637911,	-2.1114160742,	-0.6799722257,	0.3764499118,	0.3584367748},
{7.9042261468,	-3.0842163655,	-3.9436740984,	-8.6518886392,	1.8136336869,	1.7609065577,	-3.7629234284,	2.692215672,	-1.0975263293,	-2.9522257349,	1.0537328545,	0.1171288151},
{4.48892815,	-3.5851214426,	-5.7203719673,	-6.7392535796,	1.0223048746,	3.8606630421,	-4.1591522756,	4.5527644401,	-0.9498334442,	-0.2458622241,	1.0339727691,	1.0187133922},
{6.4669586521,	-1.7565794357,	-5.0697517041,	-9.7106489287,	2.2613643446,	1.5661492655,	-2.6541546163,	4.0828869595,	-1.460009492,	-1.2196260396,	0.4653847632,	-0.8840054683},
{6.331697985,	-0.1113149247,	-8.7541747264,	-8.6014907038,	2.1155984307,	1.7805396241,	-2.7224688235,	3.2301052845,	-2.5893371918,	-0.440513674,	-0.3296150515,	-0.9081534128},
{8.5593910834,	0.4350590639,	-6.9255175935,	-9.5373101097,	3.7608741935,	-0.1874674446,	-1.2149308682,	2.9125829722,	-2.2261982314,	-0.490938471,	-0.6821364922,	-1.9562224076},
{7.160979126,	0.8362079677,	-4.6541786817,	-8.1864798381,	1.8019507752,	-1.4610410707,	-0.6655335765,	2.5617909542,	-2.1347019913,	-1.4264570523,	-1.3806944591,	-1.6516303704},
{7.9018056717,	-0.1684178696,	-2.5394254953,	-5.0498120842,	2.4197260045,	-1.8636107387,	0.7050557148,	0.7591619922,	-1.1727578929,	-1.5935387087,	-0.6530700389,	-2.0817913941},
{3.4931483617,	0.2075331425,	-0.9312155425,	-3.2263361574,	1.6067314602,	-0.0356412339,	0.6898139615,	0.823915356,	0.2626344202,	-2.3934817505,	-0.3625703053,	-1.9818925567},
{7.6698998634,	3.3740374504,	-1.9651695935,	-2.8529874694,	-0.4908475233,	1.192924382,	0.610257545,	2.1495471652,	1.0217476965,	-0.117263818,	0.0360632587,	-0.1100231593},
{7.307377284,	3.6299226002,	-0.5391989826,	-0.9346714109,	-0.4390867932,	0.5592627218,	1.7756398114,	2.1709302168,	1.3960824654,	0.9117669733,	0.9397042591,	0.4614128381},
{11.4096618193,	5.3771872646,	-3.7774109013,	-1.2475164336,	0.1486456753,	-1.6812154258,	2.7139277183,	3.6414214121,	1.0506051152,	0.3428970707,	-0.0824031334,	-0.5681061785},
{11.2347294546,	3.3578872168,	-3.3726778486,	-2.1739353398,	1.0103860532,	-0.8453816394,	1.8683100073,	2.6897143629,	0.3312884576,	1.5101133441,	0.6932502638,	-1.022152185},
{11.4196173439,	4.9402511445,	-2.650038144,	-2.6113443446,	0.0134357414,	-1.5380799681,	0.9827651824,	3.3855187064,	-0.0210272191,	1.4112140748,	0.033149569,	-1.794407467},
{12.1442414738,	5.2241754989,	-2.3001161954,	-2.5163793617,	-0.9559163639,	-2.9398061734,	1.3599505267,	2.5533816191,	-0.3169373756,	1.7218529453,	0.5714774984,	-0.2873381583},
{13.2788774717,	5.4799543969,	-2.5881388287,	-2.7870885001,	-1.3604655695,	-2.5814339922,	1.6284489935,	2.9387503879,	-0.9209481604,	0.8977242682,	0.02228551,	-0.9967197785},
{10.0106456976,	2.5935303467,	-1.5930312688,	-1.2646081049,	0.2955929585,	-1.6579484937,	0.9169080214,	2.9874219674,	0.1684858233,	2.393386535,	0.986418323,	0.0031059654},
{11.8601347637,	3.2550268689,	-2.221130028,	-1.6832287161,	0.0655743167,	-2.089804734,	1.996694617,	3.5364660968,	0.0570150771,	2.0319596755,	0.3100352284,	-0.7747822099},
{10.2572897157,	3.2040435275,	-0.9322690303,	-2.1506417231,	-1.1084828284,	-1.5346639634,	1.1666769335,	3.1648105074,	-0.2173997497,	1.647926001,	0.1982931035,	-0.6198326983},
{8.5264844522,	3.1436265814,	-0.4411215938,	-2.3890643701,	-2.7251872978,	-1.3555760075,	1.1548950916,	2.9467138467,	0.3889529819,	0.5842480278,	-0.0972851003,	-0.2031038883},
{5.3056543896,	2.6454749199,	-0.2986974711,	-1.5846473202,	-0.8335420319,	0.3558372923,	0.4042103807,	2.3848018386,	0.2352533383,	-0.7108208167,	-0.3217335964,	-0.5039123355},
{1.7066061817,	0.9368948117,	-0.7931828555,	-3.1103825617,	-3.2713389476,	-1.1919725674,	-0.6014808243,	1.1048888442,	0.2765479257,	-0.2844599534,	-0.5238094025,	0.6627987238},
{1.9193825801,	1.0273871653,	-0.8091037191,	-0.9205818861,	-1.6688026256,	-1.6262150495,	-0.1227697554,	1.3164763685,	1.4755984702,	0.7091910339,	-0.2733967171,	0.7132200398},
{0.2568865941,	-0.2254364383,	-0.4739517855,	0.2601200448,	-0.5370259336,	-1.0853283197,	-0.4066224769,	0.1123041103,	0.5041998096,	0.3120008379,	-0.3708919407,	-0.1911629375},
{-1.5815240303,	-1.6866534642,	-0.9259824333,	-0.5641965451,	-1.2167716772,	-0.614847116,	-0.0241755192,	-1.1218445713,	-0.9870515094,	-0.9185435045,	-0.5305238792,	-0.2991636924},
{-0.493105841,	-1.3333533535,	-0.1216885735,	-0.0492651416,	-1.0692302915,	-0.454670057,	0.5922220401,	0.033567406,	-0.2380889277,	-0.139733522,	0.378655947,	0.0705817286},
{-0.8815452101,	-0.8333829883,	0.1626964861,	-0.5050777699,	-0.3154491589,	-0.044491765,	0.479154444,	0.7840729175,	-0.2399062095,	-0.8516885299,	-0.1806143085,	0.8030572021},
{-1.2797020389,	-0.8542444027,	-0.6948380808,	-1.6202423001,	-2.0598833393,	1.1590404966,	1.0271842101,	1.7135876494,	0.7392960413,	-0.7598509879,	-0.4654514163,	0.4901281212},
{-0.9863747991,	-0.365487054,	-0.8439082434,	-1.1103271312,	-2.2570335744,	1.4009139482,	0.7752885831,	1.5224509842,	1.0001821636,	-1.0364543425,	-0.9448115846,	0.1111694452},
{-1.0305211405,	-0.2828300425,	-0.1962691462,	-0.3514426146,	-0.9589307237,	0.1096955865,	0.9158882234,	1.6291258253,	0.1869416229,	-0.8475592763,	-1.0422871458,	-0.0569254663},
{-0.4998234003,	-0.3972109014,	-1.0670596401,	-0.6312626697,	-1.6601991919,	-0.5946672113,	0.6817768595,	1.1712210548,	0.1614687302,	-0.3370666098,	0.1004613391,	0.3437015479},
{-1.4169016064,	-1.1506077129,	-1.7091980985,	-0.8422637135,	-1.6688434967,	0.1719854977,	-0.209420201,	0.4065222224,	0.5464934391,	-0.33521822,	-0.8033825689,	0.6375774671},
{-1.0728379992,	-2.1122670259,	-0.8361532649,	0.002048215,	-0.705731893,	-0.4311839553,	-0.0956336855,	0.6867417096,	-0.711756919,	-1.4906987933,	-1.0232324759,	0.3032873995},
{-0.9324328046,	-1.3172150116,	-0.209513185,	-0.2202933014,	-1.4069015644,	-1.2148829806,	-0.6295819405,	-0.6521701548,	0.024748323,	-0.3499925836,	-0.8590316082,	-0.6936107042},
{-0.9254116342,	0.5416571707,	1.6455668894,	0.2752986523,	-1.4349071175,	0.6093126069,	-0.0226264248,	0.1902811092,	-0.5742136968,	-0.6154679247,	-1.1914649225,	-1.1962760489},
{-1.1004673131,	-0.6965103258,	0.4150569149,	-0.3925223127,	-0.2708805968,	1.9089007571,	0.8082342216,	0.0923496751,	-0.7593056623,	-1.000703601,	-0.983570037,	-0.6862475883},
{-1.1260219244,	-0.1615025404,	-1.2146712802,	-0.4531449902,	-0.0581686038,	0.456113024,	1.3654616372,	-0.5605772218,	-0.2571211379,	-0.4741337661,	-0.4737295962,	0.1296275196},
{-0.1112710079,	0.9983452181,	-0.2234646184,	0.1266324742,	-0.2689151963,	-0.2212180253,	-0.3528906228,	-0.1976633242,	-0.6941167575,	-0.5841137991,	-0.2591990451,	0.3224581702},
{-0.3684220157,	0.2621972269,	-1.2176043608,	-1.1326972264,	-0.3863445047,	0.1585630976,	0.5057456576,	0.1641005917,	-0.9240349412,	-0.447060913,	-0.8980000132,	0.0750742767},
{-0.3339560867,	-0.3897697304,	-1.4347158357,	-0.364782556,	0.4918151635,	-0.3744858463,	0.8844363071,	0.7670932897,	-0.4462865568,	-0.083876733,	-0.7962812775,	0.2167165149}
};