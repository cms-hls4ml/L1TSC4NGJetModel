//Numpy array shape [16]
//Min -0.218750000000
//Max 0.640625000000
//Number of zeros 1

#ifndef B14_H_
#define B14_H_

namespace hls4ml_L1TSC4NGJetModel_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias14_t b14[16];
#else
bias14_t b14[16] = {-0.078125, -0.078125, 0.125000, 0.640625, -0.218750, 0.156250, 0.187500, -0.125000, 0.015625, 0.281250, -0.140625, -0.062500, 0.265625, 0.000000, 0.328125, -0.093750};

#endif

#endif
}
