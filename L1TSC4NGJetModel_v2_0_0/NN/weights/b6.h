//Numpy array shape [10]
//Min -0.906250000000
//Max 0.328125000000
//Number of zeros 0

#ifndef B6_H_
#define B6_H_

namespace hls4ml_L1TSC4NGJetModel_v2_0_0 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias6_t b6[10];
#else
bias6_t b6[10] = {-0.015625, -0.906250, 0.296875, -0.531250, -0.421875, -0.687500, -0.296875, -0.359375, 0.328125, -0.312500};

#endif

#endif
}
