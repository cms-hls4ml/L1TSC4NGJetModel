//Numpy array shape [2]
//Min -2.996258497238
//Max 0.049026582390
//Number of zeros 0

#ifndef B16_H_
#define B16_H_

namespace hls4ml_L1TSC4NGJetModel_v2_0_0 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
norm_jet_features_bias_t b16[2];
#else
norm_jet_features_bias_t b16[2] = {0.0490265823900700, -2.9962584972381592};

#endif

#endif
}
