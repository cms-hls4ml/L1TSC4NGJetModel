//Numpy array shape [10, 1]
//Min -0.966796875000
//Max 2.537109375000
//Number of zeros 1

#ifndef W23_H_
#define W23_H_

namespace hls4ml_L1TSC4NGJetModel_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
weight23_t w23[10];
#else
weight23_t w23[10] = {1.152343750, -0.931640625, -0.710937500, -0.435546875, -0.966796875, -0.705078125, 0.970703125, 0.000000000, 2.537109375, 1.224609375};

#endif

#endif
}
