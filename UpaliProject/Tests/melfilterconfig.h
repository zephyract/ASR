/**************************************************************************//**
* @file melfilterconfig.h
* @brief Contains Mel Filterbank for use in mfcc.c
* @version 0.0.1
******************************************************************************
* # License
* <b>Copyright 2017 Silicon Labs, Inc. http://www.silabs.com</b>
*******************************************************************************
*
* This file is licensed under the Silabs License Agreement. See the file
* "Silabs_License_Agreement.txt" for details. Before using this software for
* any purpose, you must agree to the terms of that agreement.
*
******************************************************************************/

#ifndef INC_MELFILTERCONFIG_H_
#define INC_MELFILTERCONFIG_H_

#include "settings.h"

float32_t filterbank1[FFTSIZE] = {
0,
0,
0,
0,
0,
0,
0,
0,
0,
0.25,
0.5,
0.75,
1,
0.75,
0.5,
0.25,
0,
0.25,
0.5,
0.75,
1,
0.8,
0.6,
0.4,
0.2,
0,
0.2,
0.4,
0.6,
0.8,
1,
0.833333,
0.666667,
0.5,
0.333333,
0.166667,
0,
0.142857,
0.285714,
0.428571,
0.571429,
0.714286,
0.857143,
1,
0.857143,
0.714286,
0.571429,
0.428571,
0.285714,
0.142857,
0,
0.125,
0.25,
0.375,
0.5,
0.625,
0.75,
0.875,
1,
0.888889,
0.777778,
0.666667,
0.555556,
0.444444,
0.333333,
0.222222,
0.111111,
0,
0.1,
0.2,
0.3,
0.4,
0.5,
0.6,
0.7,
0.8,
0.9,
1,
0.909091,
0.818182,
0.727273,
0.636364,
0.545455,
0.454545,
0.363636,
0.272727,
0.181818,
0.090909,
0,
0.083333,
0.166667,
0.25,
0.333333,
0.416667,
0.5,
0.583333,
0.666667,
0.75,
0.833333,
0.916667,
1,
0.928571,
0.857143,
0.785714,
0.714286,
0.642857,
0.571429,
0.5,
0.428571,
0.357143,
0.285714,
0.214286,
0.142857,
0.071429,
0,
0.066667,
0.133333,
0.2,
0.266667,
0.333333,
0.4,
0.466667,
0.533333,
0.6,
0.666667,
0.733333,
0.8,
0.866667,
0.933333,
1,
0.941176,
0.882353,
0.823529,
0.764706,
0.705882,
0.647059,
0.588235,
0.529412,
0.470588,
0.411765,
0.352941,
0.294118,
0.235294,
0.176471,
0.117647,
0.058824,
0,
0.052632,
0.105263,
0.157895,
0.210526,
0.263158,
0.315789,
0.368421,
0.421053,
0.473684,
0.526316,
0.578947,
0.631579,
0.684211,
0.736842,
0.789474,
0.842105,
0.894737,
0.947368,
1,
0.952381,
0.904762,
0.857143,
0.809524,
0.761905,
0.714286,
0.666667,
0.619048,
0.571429,
0.52381,
0.47619,
0.428571,
0.380952,
0.333333,
0.285714,
0.238095,
0.190476,
0.142857,
0.095238,
0.047619,
0,
0.043478,
0.086957,
0.130435,
0.173913,
0.217391,
0.26087,
0.304348,
0.347826,
0.391304,
0.434783,
0.478261,
0.521739,
0.565217,
0.608696,
0.652174,
0.695652,
0.73913,
0.782609,
0.826087,
0.869565,
0.913043,
0.956522,
1,
0.96,
0.92,
0.88,
0.84,
0.8,
0.76,
0.72,
0.68,
0.64,
0.6,
0.56,
0.52,
0.48,
0.44,
0.4,
0.36,
0.32,
0.28,
0.24,
0.2,
0.16,
0.12,
0.08,
0.04,
0,
0.035714,
0.071429,
0.107143,
0.142857,
0.178571,
0.214286,
0.25,
0.285714,
0.321429,
0.357143,
0.392857,
0.428571,
0.464286,
0.5,
0.535714,
0.571429,
0.607143,
0.642857,
0.678571,
0.714286,
0.75,
0.785714,
0.821429,
0.857143,
0.892857,
0.928571,
0.964286,
1,
0.96875,
0.9375,
0.90625,
0.875,
0.84375,
0.8125,
0.78125,
0.75,
0.71875,
0.6875,
0.65625,
0.625,
0.59375,
0.5625,
0.53125,
0.5,
0.46875,
0.4375,
0.40625,
0.375,
0.34375,
0.3125,
0.28125,
0.25,
0.21875,
0.1875,
0.15625,
0.125,
0.09375,
0.0625,
0.03125,
0,
0.028571,
0.057143,
0.085714,
0.114286,
0.142857,
0.171429,
0.2,
0.228571,
0.257143,
0.285714,
0.314286,
0.342857,
0.371429,
0.4,
0.428571,
0.457143,
0.485714,
0.514286,
0.542857,
0.571429,
0.6,
0.628571,
0.657143,
0.685714,
0.714286,
0.742857,
0.771429,
0.8,
0.828571,
0.857143,
0.885714,
0.914286,
0.942857,
0.971429,
1,
0.974359,
0.948718,
0.923077,
0.897436,
0.871795,
0.846154,
0.820513,
0.794872,
0.769231,
0.74359,
0.717949,
0.692308,
0.666667,
0.641026,
0.615385,
0.589744,
0.564103,
0.538462,
0.512821,
0.487179,
0.461538,
0.435897,
0.410256,
0.384615,
0.358974,
0.333333,
0.307692,
0.282051,
0.25641,
0.230769,
0.205128,
0.179487,
0.153846,
0.128205,
0.102564,
0.076923,
0.051282,
0.025641,
0,
0.023256,
0.046512,
0.069767,
0.093023,
0.116279,
0.139535,
0.162791,
0.186047,
0.209302,
0.232558,
0.255814,
0.27907,
0.302326,
0.325581,
0.348837,
0.372093,
0.395349,
0.418605,
0.44186,
0.465116,
0.488372,
0.511628,
0.534884,
0.55814,
0.581395,
0.604651,
0.627907,
0.651163,
0.674419,
0.697674,
0.72093,
0.744186,
0.767442,
0.790698,
0.813953,
0.837209,
0.860465,
0.883721,
0.906977,
0.930233,
0.953488,
0.976744,
1,
0.978723,
0.957447,
0.93617,
0.914894,
0.893617,
0.87234,
0.851064,
0.829787,
0.808511,
0.787234,
0.765957,
0.744681,
0.723404,
0.702128,
0.680851,
0.659574,
0.638298,
0.617021,
0.595745,
0.574468,
0.553191,
0.531915,
0.510638,
0.489362,
0.468085,
0.446809,
0.425532,
0.404255,
0.382979,
0.361702,
0.340426,
0.319149,
0.297872,
0.276596,
0.255319,
0.234043,
0.212766,
0.191489,
0.170213,
0.148936,
0.12766,
0.106383,
0.085106,
0.06383,
0.042553,
0.021277,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0};

float32_t filterbank2[FFTSIZE] = {
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0.25,
0.5,
0.75,
1,
0.75,
0.5,
0.25,
0,
0.2,
0.4,
0.6,
0.8,
1,
0.8,
0.6,
0.4,
0.2,
0,
0.166667,
0.333333,
0.5,
0.666667,
0.833333,
1,
0.857143,
0.714286,
0.571429,
0.428571,
0.285714,
0.142857,
0,
0.142857,
0.285714,
0.428571,
0.571429,
0.714286,
0.857143,
1,
0.875,
0.75,
0.625,
0.5,
0.375,
0.25,
0.125,
0,
0.111111,
0.222222,
0.333333,
0.444444,
0.555556,
0.666667,
0.777778,
0.888889,
1,
0.9,
0.8,
0.7,
0.6,
0.5,
0.4,
0.3,
0.2,
0.1,
0,
0.090909,
0.181818,
0.272727,
0.363636,
0.454545,
0.545455,
0.636364,
0.727273,
0.818182,
0.909091,
1,
0.916667,
0.833333,
0.75,
0.666667,
0.583333,
0.5,
0.416667,
0.333333,
0.25,
0.166667,
0.083333,
0,
0.071429,
0.142857,
0.214286,
0.285714,
0.357143,
0.428571,
0.5,
0.571429,
0.642857,
0.714286,
0.785714,
0.857143,
0.928571,
1,
0.933333,
0.866667,
0.8,
0.733333,
0.666667,
0.6,
0.533333,
0.466667,
0.4,
0.333333,
0.266667,
0.2,
0.133333,
0.066667,
0,
0.058824,
0.117647,
0.176471,
0.235294,
0.294118,
0.352941,
0.411765,
0.470588,
0.529412,
0.588235,
0.647059,
0.705882,
0.764706,
0.823529,
0.882353,
0.941176,
1,
0.947368,
0.894737,
0.842105,
0.789474,
0.736842,
0.684211,
0.631579,
0.578947,
0.526316,
0.473684,
0.421053,
0.368421,
0.315789,
0.263158,
0.210526,
0.157895,
0.105263,
0.052632,
0,
0.047619,
0.095238,
0.142857,
0.190476,
0.238095,
0.285714,
0.333333,
0.380952,
0.428571,
0.47619,
0.52381,
0.571429,
0.619048,
0.666667,
0.714286,
0.761905,
0.809524,
0.857143,
0.904762,
0.952381,
1,
0.956522,
0.913043,
0.869565,
0.826087,
0.782609,
0.73913,
0.695652,
0.652174,
0.608696,
0.565217,
0.521739,
0.478261,
0.434783,
0.391304,
0.347826,
0.304348,
0.26087,
0.217391,
0.173913,
0.130435,
0.086957,
0.043478,
0,
0.04,
0.08,
0.12,
0.16,
0.2,
0.24,
0.28,
0.32,
0.36,
0.4,
0.44,
0.48,
0.52,
0.56,
0.6,
0.64,
0.68,
0.72,
0.76,
0.8,
0.84,
0.88,
0.92,
0.96,
1,
0.964286,
0.928571,
0.892857,
0.857143,
0.821429,
0.785714,
0.75,
0.714286,
0.678571,
0.642857,
0.607143,
0.571429,
0.535714,
0.5,
0.464286,
0.428571,
0.392857,
0.357143,
0.321429,
0.285714,
0.25,
0.214286,
0.178571,
0.142857,
0.107143,
0.071429,
0.035714,
0,
0.03125,
0.0625,
0.09375,
0.125,
0.15625,
0.1875,
0.21875,
0.25,
0.28125,
0.3125,
0.34375,
0.375,
0.40625,
0.4375,
0.46875,
0.5,
0.53125,
0.5625,
0.59375,
0.625,
0.65625,
0.6875,
0.71875,
0.75,
0.78125,
0.8125,
0.84375,
0.875,
0.90625,
0.9375,
0.96875,
1,
0.971429,
0.942857,
0.914286,
0.885714,
0.857143,
0.828571,
0.8,
0.771429,
0.742857,
0.714286,
0.685714,
0.657143,
0.628571,
0.6,
0.571429,
0.542857,
0.514286,
0.485714,
0.457143,
0.428571,
0.4,
0.371429,
0.342857,
0.314286,
0.285714,
0.257143,
0.228571,
0.2,
0.171429,
0.142857,
0.114286,
0.085714,
0.057143,
0.028571,
0,
0.025641,
0.051282,
0.076923,
0.102564,
0.128205,
0.153846,
0.179487,
0.205128,
0.230769,
0.25641,
0.282051,
0.307692,
0.333333,
0.358974,
0.384615,
0.410256,
0.435897,
0.461538,
0.487179,
0.512821,
0.538462,
0.564103,
0.589744,
0.615385,
0.641026,
0.666667,
0.692308,
0.717949,
0.74359,
0.769231,
0.794872,
0.820513,
0.846154,
0.871795,
0.897436,
0.923077,
0.948718,
0.974359,
1,
0.976744,
0.953488,
0.930233,
0.906977,
0.883721,
0.860465,
0.837209,
0.813953,
0.790698,
0.767442,
0.744186,
0.72093,
0.697674,
0.674419,
0.651163,
0.627907,
0.604651,
0.581395,
0.55814,
0.534884,
0.511628,
0.488372,
0.465116,
0.44186,
0.418605,
0.395349,
0.372093,
0.348837,
0.325581,
0.302326,
0.27907,
0.255814,
0.232558,
0.209302,
0.186047,
0.162791,
0.139535,
0.116279,
0.093023,
0.069767,
0.046512,
0.023256,
0,
0.021277,
0.042553,
0.06383,
0.085106,
0.106383,
0.12766,
0.148936,
0.170213,
0.191489,
0.212766,
0.234043,
0.255319,
0.276596,
0.297872,
0.319149,
0.340426,
0.361702,
0.382979,
0.404255,
0.425532,
0.446809,
0.468085,
0.489362,
0.510638,
0.531915,
0.553191,
0.574468,
0.595745,
0.617021,
0.638298,
0.659574,
0.680851,
0.702128,
0.723404,
0.744681,
0.765957,
0.787234,
0.808511,
0.829787,
0.851064,
0.87234,
0.893617,
0.914894,
0.93617,
0.957447,
0.978723,
1,
0.981132,
0.962264,
0.943396,
0.924528,
0.90566,
0.886792,
0.867925,
0.849057,
0.830189,
0.811321,
0.792453,
0.773585,
0.754717,
0.735849,
0.716981,
0.698113,
0.679245,
0.660377,
0.641509,
0.622642,
0.603774,
0.584906,
0.566038,
0.54717,
0.528302,
0.509434,
0.490566,
0.471698,
0.45283,
0.433962,
0.415094,
0.396226,
0.377358,
0.358491,
0.339623,
0.320755,
0.301887,
0.283019,
0.264151,
0.245283,
0.226415,
0.207547,
0.188679,
0.169811,
0.150943,
0.132075,
0.113208,
0.09434,
0.075472,
0.056604,
0.037736,
0.018868,
0};

const float cosines[12][14] = {
{1,	0.846724,	0.433884,	-0.111964,	-0.62349,	-0.943883,	-0.974928,	-0.707107,	-0.222521,	0.330279,	0.781831,	0.993712,	0.900969,	0.532032},
{1,	0.707107,	0,	-0.707107,	-1,	-0.707107,	0,	0.707107,	1,	0.707107,	0,	-0.707107,	-1,	-0.707107},
{1,	0.532032,	-0.433884,	-0.993712,	-0.62349,	0.330279,	0.974928,	0.707107,	-0.222521,	-0.943883,	-0.781831,	0.111964,	0.900969,	0.846724},
{1,	0.330279,	-0.781831,	-0.846724,	0.222521,	0.993712,	0.433884,	-0.707107,	-0.900969,	0.111964,	0.974928,	0.532032,	-0.62349,	-0.943883},
{1,	0.111964,	-0.974928,	-0.330279,	0.900969,	0.532032,	-0.781831,	-0.707107,	0.62349,	0.846724,	-0.433884,	-0.943883,	0.222521,	0.993712},
{1,	-0.111964,	-0.974928,	0.330279,	0.900969,	-0.532032,	-0.781831,	0.707107,	0.62349,	-0.846724,	-0.433884,	0.943883,	0.222521,	-0.993712},
{1,	-0.330279,	-0.781831,	0.846724,	0.222521,	-0.993712,	0.433884,	0.707107,	-0.900969,	-0.111964,	0.974928,	-0.532032,	-0.62349,	0.943883},
{1,	-0.532032,	-0.433884,	0.993712,	-0.62349,	-0.330279,	0.974928,	-0.707107,	-0.222521,	0.943883,	-0.781831,	-0.111964,	0.900969,	-0.846724},
{1,	-0.707107,	0,	0.707107,	-1,	0.707107,	0,	-0.707107,	1,	-0.707107,	0,	0.707107,	-1,	0.707107},
{1,	-0.846724,	0.433884,	0.111964,	-0.62349,	0.943883,	-0.974928,	0.707107,	-0.222521,	-0.330279,	0.781831,	-0.993712,	0.900969,	-0.532032},
{1,	-0.943883,	0.781831,	-0.532032,	0.222521,	0.111964,	-0.433884,	0.707107,	-0.900969,	0.993712,	-0.974928,	0.846724,	-0.62349,	0.330279},
{1,	-0.993712,	0.974928,	-0.943883,	0.900969,	-0.846724,	0.781831,	-0.707107,	0.62349,	-0.532032,	0.433884,	-0.330279,	0.222521,	-0.111964}
};

#endif /* INC_MELFILTERCONFIG_H_ */
