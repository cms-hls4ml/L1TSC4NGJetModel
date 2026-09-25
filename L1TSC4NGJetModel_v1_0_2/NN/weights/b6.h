//Numpy array shape [10]
//Min -0.734375000000
//Max 0.546875000000
//Number of zeros 0

#ifndef B6_H_
#define B6_H_

namespace hls4ml_L1TSC4NGJetModel_v1_0_2 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias6_t b6[10];
#else
bias6_t b6[10] = {-0.734375, 0.296875, 0.546875, -0.562500, -0.046875, 0.468750, 0.078125, 0.484375, -0.093750, 0.234375};

#endif

#endif
}
