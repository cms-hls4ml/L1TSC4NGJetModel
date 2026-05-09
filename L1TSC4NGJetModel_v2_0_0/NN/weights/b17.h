//Numpy array shape [10]
//Min -0.781250000000
//Max 0.343750000000
//Number of zeros 0

#ifndef B17_H_
#define B17_H_

namespace hls4ml_L1TSC4NGJetModel_v2_0_0 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias17_t b17[10];
#else
bias17_t b17[10] = {0.312500, -0.203125, -0.234375, 0.125000, 0.343750, -0.031250, -0.781250, -0.078125, 0.265625, 0.187500};

#endif

#endif
}
