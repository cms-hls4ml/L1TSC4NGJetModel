//Numpy array shape [10]
//Min -0.781250000000
//Max 1.000000000000
//Number of zeros 2

#ifndef B17_H_
#define B17_H_

namespace hls4ml_L1TSC4NGJetModel_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias17_t b17[10];
#else
bias17_t b17[10] = {-0.781250, 0.000000, 0.000000, 0.203125, 0.609375, -0.125000, -0.031250, 0.703125, -0.265625, 1.000000};

#endif

#endif
}
