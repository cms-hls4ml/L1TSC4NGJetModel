#ifndef L1TSC4NGJETMODEL_v2_0_0_H_
#define L1TSC4NGJETMODEL_v2_0_0_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"

#include "defines.h"


// Prototype of top level function for C-synthesis
namespace hls4ml_L1TSC4NGJetModel_v2_0_0 {
void L1TSC4NGJetModel_v2_0_0(
    input_t basic_input[16*21], input32_t constituent_fraction[16], input12_t jet_features[2], input14_t pt_mask[16],
    layer39_t layer39_out[9], layer40_t layer40_out[1]
);

// hls-fpga-machine-learning insert emulator-defines


}

#endif
