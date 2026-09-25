//Numpy array shape [16]
//Min -0.640625000000
//Max 0.500000000000
//Number of zeros 0

#ifndef B29_H_
#define B29_H_

namespace hls4ml_L1TSC4NGJetModel_v2_0_0 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias29_t b29[16];
#else
bias29_t b29[16] = {0.500000, -0.250000, 0.390625, 0.171875, 0.015625, -0.109375, -0.640625, 0.265625, -0.171875, -0.109375, 0.156250, 0.484375, 0.500000, -0.078125, -0.421875, 0.062500};

#endif

#endif
}
