//Numpy array shape [10]
//Min -0.921875000000
//Max 0.546875000000
//Number of zeros 0

#ifndef B26_H_
#define B26_H_

namespace hls4ml_L1TSC4NGJetModel_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias26_t b26[10];
#else
bias26_t b26[10] = {-0.921875, -0.046875, -0.156250, 0.046875, -0.046875, -0.078125, -0.171875, 0.546875, -0.234375, -0.062500};

#endif

#endif
}
