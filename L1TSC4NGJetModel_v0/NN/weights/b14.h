//Numpy array shape [16]
//Min -0.453125000000
//Max 0.890625000000
//Number of zeros 2

#ifndef B14_H_
#define B14_H_

namespace hls4ml_L1TSC4NGJetModel_v0 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias14_t b14[16];
#else
bias14_t b14[16] = {0.062500, -0.046875, -0.359375, 0.000000, -0.140625, 0.890625, -0.296875, -0.078125, -0.046875, -0.015625, -0.453125, -0.015625, 0.125000, 0.000000, -0.062500, -0.203125};

#endif

#endif
}
