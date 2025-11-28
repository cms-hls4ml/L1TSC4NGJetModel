//Numpy array shape [8]
//Min -0.984375000000
//Max 1.968750000000
//Number of zeros 0

#ifndef B19_H_
#define B19_H_

namespace hls4ml_L1TSC4NGJetModel_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias19_t b19[8];
#else
bias19_t b19[8] = {1.968750, 0.234375, -0.718750, -0.984375, 0.703125, -0.875000, -0.921875, -0.218750};

#endif

#endif
}
