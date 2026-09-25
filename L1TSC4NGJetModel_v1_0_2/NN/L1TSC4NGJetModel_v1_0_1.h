#ifndef L1TSC4NGJETMODEL_v1_0_1_H_
#define L1TSC4NGJETMODEL_v1_0_1_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"

#include "defines.h"


// Prototype of top level function for C-synthesis
namespace hls4ml_L1TSC4NGJetModel_v1_0_1 {
void L1TSC4NGJetModel_v1_0_1(
    input_t basic_input[16*20],
    layer22_t layer22_out[8], layer24_t layer24_out[1]
);

// hls-fpga-machine-learning insert emulator-defines


}

#endif
