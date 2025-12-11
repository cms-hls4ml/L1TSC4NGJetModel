//Numpy array shape [10]
//Min -1.187500000000
//Max 0.625000000000
//Number of zeros 0

#ifndef B26_H_
#define B26_H_

namespace hls4ml_L1TSC4NGJetModel_v1_0_1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias26_t b26[10];
#else
bias26_t b26[10] = {0.625000, -0.781250, -0.578125, -1.187500, 0.140625, -0.031250, -0.015625, 0.140625, 0.078125, -0.406250};

#endif

#endif
}
