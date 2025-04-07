//Numpy array shape [10]
//Min -0.078125000000
//Max 0.562500000000
//Number of zeros 1

#ifndef B25_H_
#define B25_H_

namespace hls4ml_L1TSC4NGJetModel_v0 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias25_t b25[10];
#else
bias25_t b25[10] = {0.156250, 0.296875, 0.265625, -0.078125, 0.171875, 0.000000, 0.171875, 0.015625, 0.562500, 0.031250};

#endif

#endif
}
