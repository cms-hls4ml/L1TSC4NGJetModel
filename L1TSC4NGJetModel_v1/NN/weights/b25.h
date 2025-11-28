//Numpy array shape [10]
//Min -0.234375000000
//Max 0.734375000000
//Number of zeros 0

#ifndef B25_H_
#define B25_H_

namespace hls4ml_L1TSC4NGJetModel_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias25_t b25[10];
#else
bias25_t b25[10] = {0.265625, 0.187500, 0.734375, 0.593750, 0.718750, -0.234375, 0.171875, -0.062500, 0.328125, -0.031250};

#endif

#endif
}
