#include "parameters.h"



float32_t start_prob[4] = {0.0, 0.0, 0.0, 1.0}; //DONE	

float32_t transitions[16] = {9.0536904e-01,8.4504912e-02,1.0126053e-02,9.9523090e-19,3.4187305e-03,8.3140118e-01,1.3755993e-36,1.6518009e-01,
													   7.8638326e-02,2.2123635e-38,9.2136167e-01,3.2704298e-18,9.4174100e-03,9.7993368e-03,1.4981776e-01,8.3096549e-01}; //DONE  


float32_t means[4][12] = {
{8.8632560e+00,2.7259942e+00,-1.2700714e+00,-1.8424856e+00,-1.3674397e-02,-2.0065825e-01,1.0774552e+00,1.8972041e+00,5.5248787e-01,1.0012418e+00,-2.7386945e-01,-3.9322279e-01},
{7.9842714e-01,1.5377708e-01,-7.2800324e-01,-8.8597009e-01,-8.6765352e-01,-2.3893406e-01,5.5362751e-02,1.5127207e-01,-2.1596631e-01,-6.1118929e-01,-6.0869425e-01,-2.8247729e-01},
{8.5321602e+00,-1.7255874e+00,-5.8357476e+00,-7.0658490e+00,2.1012514e+00,1.1854757e+00,-1.8819707e+00,2.6608424e+00,-1.1137948e+00,-8.0453334e-01,-6.4948882e-01,-2.2026193e-01},
{1.0652093e+01,-1.5862923e+00,7.7449980e-01,-5.3973487e-01,2.4655312e+00,7.0021083e-01,1.1786165e+00,1.4463582e+00,-4.9250612e-01,1.5121154e-01,2.1238615e-02,2.1477956e-01}
};		//DONE

float32_t covars_norm[4] = {3.2684820770450933e-06,  0.000125655131859498, 4.8556358349830857e-08, 1.0106412969478749e-07};	//DONE

float32_t denominators[4][12] = {
{1.3755743e-02,7.5792804e-02,6.6762799e-02,2.7349166e-01,4.4629423e-01,3.1430064e-01,4.8940908e-01,4.1042057e-01,7.3906868e-01,5.7583754e-01,1.0896509e+00,1.6055020e+00},
{5.6342723e-02,3.9037511e-01,6.7185954e-01,4.4880759e-01,8.4235145e-01,1.6136776e+00,1.2325613e+00,1.4124368e+00,2.4394592e+00,2.4382252e+00,1.7720331e+00,5.2734191e+00},
{1.0332819e-02,5.6703525e-03,1.0764627e-02,1.4822634e-02,1.3421096e-01,5.7466333e-02,4.5870437e-02,1.5881119e-01,1.6396032e-01,3.8792353e-01,4.4826747e-01,1.2988246e+00},
{6.3650095e-03,1.3778041e-02,2.3533027e-02,3.1651511e-02,7.9824430e-02,1.5459689e-01,2.1732174e-01,7.6293707e-02,2.1180014e-01,4.4723108e-01,8.6352668e-01,3.3390571e-01}
};		//DONE

float32_t mfccs[36][12] = {
{9.4095458,	-5.899655,	2.1842207,	8.04269,	-0.5585125,	2.3814923,	-4.7999551,	0.1328468,	2.3078004,	1.4332718,	-0.0190472,	0.6597056},
{8.9350425,	-7.2348458,	4.5721551,	10.3955735,	0.8960733,	3.7734294,	-2.7350885,	0.0135944,	0.9087933,	-0.4208016,	-0.8859388,	0.6888268},
{9.3795856,	-11.8030099,	4.1305432,	7.6164539,	0.6026549,	1.4170578,	-1.790197,	-0.426793,	2.5258639,	-1.0972263,	0.462776,	1.8038883},
{10.1267139,	-9.4412238,	2.7839192,	6.6150956,	-2.3715699,	1.7500534,	-2.5353467,	0.2686067,	1.1439843,	-0.1282148,	-1.1022952,	3.0761885},
{13.3125623,	-7.8353634,	5.2844423,	6.879442,	1.0253203,	2.0443035,	-0.6923516,	-1.5925193,	1.4342486,	-1.1429995,	0.3979168,	3.073776},
{14.1111089,	-7.0332439,	1.4109366,	5.7111402,	-1.385022,	6.402056,	1.4320641,	2.1293422,	0.6685162,	0.3355457,	-0.1790939,	3.0185635},
{11.3520212,	-4.0243676,	-0.489232,	5.952679,	-1.4203946,	5.5026012,	3.462223,	1.7031863,	0.9322538,	0.3462853,	1.8056523,	2.1292565},
{9.7865125,	-1.2723476,	1.5212451,	2.144152,	2.4593363,	1.7439937,	3.5504475,	1.4942018,	-1.1239635,	1.4635701,	0.9909266,	0.5749209},
{12.8278561,	1.203626,	-0.2228513,	2.2519203,	3.6120329,	1.2203096,	3.0651195,	3.0702952,	-0.7304706,	3.5502465,	2.0019043,	0.7314358},
{10.177118,	-0.9235115,	3.4539251,	2.4537259,	3.7916984,	-0.1105965,	3.4436912,	1.5403496,	0.052065,	0.729035,	0.5026392,	-1.3991439},
{11.5777805,	1.6175185,	0.1392922,	1.0548304,	3.0530728,	-0.8634849,	3.419402,	3.5073027,	-1.1429841,	1.9689411,	0.8830833,	-1.2971646},
{9.1043015,	1.1032085,	-0.9573454,	1.3331981,	3.8227699,	-0.4888467,	3.1325829,	2.5311346,	-1.1070181,	1.2937685,	1.2580193,	0.3189094},
{13.1468245,	4.5838363,	-6.1526922,	2.7803221,	5.3975619,	1.1212749,	4.0032196,	3.7432038,	-1.9104541,	2.9706231,	0.0262071,	0.2484441},
{5.1454729,	5.4105798,	-2.5396338,	2.6090626,	3.0709391,	-0.8795409,	1.2470417,	2.1702003,	0.440897,	1.4926869,	0.9577323,	0.1640948},
{2.6761538,	1.7803009,	1.6126976,	1.2823032,	0.7357372,	1.592973,	1.3155806,	1.6552466,	1.6839351,	1.860672,	1.086509,	0.9530376},
{1.8090554,	1.603971,	1.2838637,	1.0569463,	0.8635076,	1.8285736,	0.9945786,	0.9544962,	1.9539983,	1.6354213,	1.1923778,	0.737138},
{0.0952793,	0.4726516,	0.6363237,	0.8124531,	1.1241818,	1.3250434,	1.5281129,	0.293289,	0.3391999,	0.2030885,	0.8465569,	0.8283743},
{-0.3679861,	-0.630976,	-0.3355767,	0.2172675,	0.8773008,	1.332646,	2.3324784,	-0.0043226,	0.0174154,	-0.3767185,	0.8708135,	0.9676676},
{1.4446976,	0.4057312,	-3.3660328,	2.9388428,	4.0798775,	-0.9061885,	-0.7704601,	1.9760808,	0.7424476,	1.4588728,	-0.0877822,	0.7476981},
{4.6789902,	1.2842306,	-2.3852949,	3.6201046,	4.6808856,	-0.3692107,	-0.7999751,	1.8072645,	0.3449268,	1.7898955,	-0.144005,	1.0448967},
{8.5619074,	0.0591561,	-1.0903716,	2.980625,	3.8130311,	-0.0116833,	2.6661078,	1.3679724,	-1.8280797,	-0.0037768,	-0.0795609,	0.7571972},
{10.7986353,	1.3483872,	-3.2135298,	1.0064691,	3.8255914,	3.8583065,	1.863637,	-0.5453097,	-1.6380531,	0.0847517,	-1.1223272,	0.4322337},
{7.7205888,	1.9219504,	-2.0354816,	-0.5718163,	4.570001,	1.9790577,	0.9704136,	-0.3450066,	-1.5850389,	-1.1350268,	-1.8059425,	0.1463678},
{8.5790221,	3.5671919,	-3.5706381,	-1.9549747,	5.775732,	2.5257866,	0.24022,	0.4994201,	-0.9154711,	-1.3235175,	-2.4314034,	-0.4783785},
{8.2975437,	3.3900694,	-3.8232676,	-0.8276395,	3.6895969,	1.8679253,	0.5270141,	0.4236962,	-0.5622597,	-1.8889552,	-2.0012534,	0.6448707},
{5.9051397,	0.013415,	-0.2019881,	-0.003231,	2.1644324,	0.2873454,	1.6708504,	-0.7210058,	-0.2754867,	-2.2601339,	-1.1311094,	-0.6070356},
{6.4672706,	1.549418,	-2.3027681,	-1.090016,	1.12976,	1.8375798,	1.2234829,	-0.5771696,	0.0309448,	-2.1936125,	-1.1702252,	-0.5353349},
{4.0490551,	-0.3829311,	0.7726959,	-1.2478297,	1.0500733,	-0.0527382,	1.2066395,	-0.9981271,	0.0370757,	-1.8385188,	-1.5854818,	-0.5166174},
{9.172379,	1.9086771,	-3.7746131,	-1.0200432,	-0.5138569,	1.5062838,	2.3152585,	0.2877042,	-0.2555154,	-1.8291245,	-1.2237758,	-0.0548893},
{1.9336431,	-0.3130189,	-1.1645461,	-0.2565337,	-0.7826918,	0.3418997,	1.0778038,	-0.7767322,	-1.1389172,	-1.2666462,	-0.8730498,	0.5587942},
{3.0892239,	0.522041,	0.1357614,	0.3334786,	0.4036453,	-0.1915266,	-0.1179769,	-1.0943287,	-1.91092,	-1.5264292,	-1.3817296,	-0.4488934},
{3.5351821,	1.939955,	0.0119171,	0.9957389,	0.6358231,	-0.7697878,	-1.0099533,	-1.7617513,	-1.3137762,	-0.8674711,	-0.3961582,	0.5083493},
{0.7349763,	-0.2315986,	-0.5915479,	0.2305856,	-1.0490399,	-1.233963,	-0.0730956,	-1.6351506,	-1.7394992,	-1.0805131,	-0.6056266,	-0.3076696},
{0.1483776,	-1.2900123,	-0.3085537,	-0.405679,	-1.8727425,	-1.1929221,	-0.703999,	-1.8092589,	-1.2665166,	-1.9479754,	-1.820137,	-0.9537144},
{-0.4209237,	0.5400524,	-0.6310499,	-0.8309522,	-0.1692987,	-0.6515831,	0.1629761,	-0.8900204,	-1.0192981,	-2.1610755,	-0.8457561,	-1.3592109},
{-0.234539,	1.36455,	0.3969953,	-0.26312,	0.4450764,	-0.2225434,	-0.680725,	-0.9717182,	-0.5898864,	-1.6461443,	-0.4935502,	-1.1808178}
};