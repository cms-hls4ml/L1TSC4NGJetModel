//Numpy array shape [10]
//Min -1.328125000000
//Max 0.875000000000
//Number of zeros 1

#ifndef B17_H_
#define B17_H_

namespace hls4ml_L1TSC4NGJetModel_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias17_t b17[10];
#else
bias17_t b17[10] = {0.875000, 0.000000, -1.328125, 0.421875, -0.281250, -0.265625, 0.234375, -0.156250, 0.312500, -0.468750};

#endif

#endif
}
