//Numpy array shape [8]
//Min -1.468750000000
//Max 1.937500000000
//Number of zeros 0

#ifndef B19_H_
#define B19_H_

namespace hls4ml_L1TSC4NGJetModel_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias19_t b19[8];
#else
bias19_t b19[8] = {1.531250, -0.796875, -0.140625, -0.671875, -1.468750, -0.140625, -0.812500, 1.937500};

#endif

#endif
}
