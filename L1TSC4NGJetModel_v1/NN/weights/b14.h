//Numpy array shape [16]
//Min -0.578125000000
//Max 0.781250000000
//Number of zeros 1

#ifndef B14_H_
#define B14_H_

namespace hls4ml_L1TSC4NGJetModel_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias14_t b14[16];
#else
bias14_t b14[16] = {0.015625, 0.187500, -0.218750, -0.093750, 0.046875, 0.625000, 0.265625, 0.546875, -0.109375, -0.046875, -0.578125, -0.359375, -0.109375, 0.781250, -0.015625, 0.000000};

#endif

#endif
}
