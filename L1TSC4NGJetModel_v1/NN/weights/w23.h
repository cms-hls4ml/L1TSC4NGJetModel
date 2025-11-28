//Numpy array shape [10, 1]
//Min -0.814453125000
//Max 2.277343750000
//Number of zeros 1

#ifndef W23_H_
#define W23_H_

namespace hls4ml_L1TSC4NGJetModel_v1 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
weight23_t w23[10];
#else
weight23_t w23[10] = {-0.697265625, 0.000000000, -0.062500000, -0.814453125, 0.800781250, 0.595703125, 2.277343750, 0.957031250, -0.617187500, 0.291015625};

#endif

#endif
}
