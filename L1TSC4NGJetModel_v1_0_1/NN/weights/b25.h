//Numpy array shape [10]
//Min -0.015625000000
//Max 0.640625000000
//Number of zeros 1

#ifndef B25_H_
#define B25_H_

namespace hls4ml_L1TSC4NGJetModel_v1_0_1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias25_t b25[10];
#else
bias25_t b25[10] = {0.000000, 0.640625, 0.125000, 0.468750, 0.281250, -0.015625, 0.390625, 0.062500, 0.062500, 0.281250};

#endif

#endif
}
