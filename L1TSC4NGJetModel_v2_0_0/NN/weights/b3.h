//Numpy array shape [10]
//Min 0.078125000000
//Max 0.703125000000
//Number of zeros 0

#ifndef B3_H_
#define B3_H_

namespace hls4ml_L1TSC4NGJetModel_v2_0_0 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias3_t b3[10];
#else
bias3_t b3[10] = {0.203125, 0.703125, 0.312500, 0.265625, 0.546875, 0.171875, 0.421875, 0.078125, 0.156250, 0.234375};

#endif

#endif
}
