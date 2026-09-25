//Numpy array shape [16]
//Min -1.656250000000
//Max 1.015625000000
//Number of zeros 0

#ifndef B21_H_
#define B21_H_

namespace hls4ml_L1TSC4NGJetModel_v2_0_0 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias21_t b21[16];
#else
bias21_t b21[16] = {-0.390625, 0.515625, -1.296875, -0.546875, -1.656250, -1.296875, 1.015625, -1.390625, -0.187500, 0.671875, 0.468750, 0.343750, 0.140625, -0.421875, -0.468750, -1.296875};

#endif

#endif
}
