//Numpy array shape [10]
//Min -0.109375000000
//Max 0.531250000000
//Number of zeros 1

#ifndef B3_H_
#define B3_H_

namespace hls4ml_L1TSC4NGJetModel_v1_0_2 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias3_t b3[10];
#else
bias3_t b3[10] = {0.203125, 0.531250, -0.109375, 0.109375, 0.171875, 0.078125, 0.312500, 0.000000, 0.125000, -0.015625};

#endif

#endif
}
