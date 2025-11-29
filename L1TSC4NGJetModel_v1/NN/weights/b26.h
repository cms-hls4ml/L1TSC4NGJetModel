//Numpy array shape [10]
//Min -1.375000000000
//Max 1.218750000000
//Number of zeros 0

#ifndef B26_H_
#define B26_H_

namespace hls4ml_L1TSC4NGJetModel_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias26_t b26[10];
#else
bias26_t b26[10] = {0.765625, -0.484375, 1.218750, -0.703125, -0.781250, -0.484375, -1.375000, -0.843750, -0.453125, -0.375000};

#endif

#endif
}
