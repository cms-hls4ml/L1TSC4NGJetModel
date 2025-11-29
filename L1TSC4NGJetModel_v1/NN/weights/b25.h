//Numpy array shape [10]
//Min -0.078125000000
//Max 1.000000000000
//Number of zeros 1

#ifndef B25_H_
#define B25_H_

namespace hls4ml_L1TSC4NGJetModel_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias25_t b25[10];
#else
bias25_t b25[10] = {-0.031250, 0.468750, -0.078125, 0.328125, 0.390625, 0.187500, 0.656250, 0.156250, 0.000000, 1.000000};

#endif

#endif
}
