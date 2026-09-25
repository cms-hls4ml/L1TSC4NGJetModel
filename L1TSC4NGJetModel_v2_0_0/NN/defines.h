#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <array>
#include <cstddef>
#include <cstdio>

namespace hls4ml_L1TSC4NGJetModel_v2_0_0 {




// hls-fpga-machine-learning insert numbers

// hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<32,16,AP_RND,AP_SAT,0> input_t;
typedef ap_fixed<32,16,AP_RND,AP_SAT,0> layer2_t;
typedef ap_fixed<32,16,AP_RND,AP_SAT,0> norm_basic_input_scale_t;
typedef ap_fixed<32,16,AP_RND,AP_SAT,0> norm_basic_input_bias_t;
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<47,25> Conv1D_1_result_t;
typedef ap_fixed<9,3> weight3_t;
typedef ap_fixed<9,3> bias3_t;
typedef ap_ufixed<9,0,AP_RND_CONV,AP_SAT,0> layer5_t;
typedef ap_fixed<18,8> relu_1_table_t;
typedef ap_fixed<23,8> Conv1D_2_result_t;
typedef ap_fixed<9,3> weight6_t;
typedef ap_fixed<9,3> bias6_t;
typedef ap_ufixed<9,0,AP_RND_CONV,AP_SAT,0> layer8_t;
typedef ap_fixed<18,8> relu_2_table_t;
typedef ap_fixed<23,8> Conv1D_pt_weights_result_t;
typedef ap_fixed<9,3> weight9_t;
typedef ap_fixed<9,3> bias9_t;
typedef ap_fixed<32,16,AP_RND,AP_SAT,0> input12_t;
typedef ap_ufixed<11,3,AP_RND_CONV,AP_SAT,0> layer13_t;
typedef ap_fixed<18,8> Conv1D_pt_weights_relu_table_t;
typedef ap_uint<1> input14_t;
typedef ap_fixed<18,9,AP_RND_CONV,AP_SAT,0> layer15_t;
typedef ap_fixed<18,8> act_pool_table_t;
typedef ap_fixed<32,16,AP_RND,AP_SAT,0> layer16_t;
typedef ap_fixed<32,16,AP_RND,AP_SAT,0> norm_jet_features_scale_t;
typedef ap_fixed<32,16,AP_RND,AP_SAT,0> norm_jet_features_bias_t;
typedef ap_ufixed<12,4> apply_pt_mask_weights_result_t;
typedef ap_fixed<16,6> layer18_t;
typedef ap_fixed<32,16,AP_RND,AP_SAT,0> concat_jet_features_pt_weights_result_t;
typedef ap_fixed<32,16,AP_RND,AP_SAT,0> concat_jet_features_result_t;
typedef ap_fixed<47,25> Dense_pt_weights_output_0_result_t;
typedef ap_fixed<9,3> weight21_t;
typedef ap_fixed<9,3> bias21_t;
typedef ap_uint<1> layer21_index;
typedef ap_fixed<46,24> Dense_1_jetID_result_t;
typedef ap_fixed<9,3> weight23_t;
typedef ap_fixed<9,3> bias23_t;
typedef ap_uint<1> layer23_index;
typedef ap_ufixed<11,2,AP_RND_CONV,AP_SAT,0> layer25_t;
typedef ap_fixed<18,8> pt_weights_output_0_table_t;
typedef ap_ufixed<9,0,AP_RND_CONV,AP_SAT,0> layer26_t;
typedef ap_fixed<18,8> relu_1_jetID_table_t;
typedef ap_fixed<25,10> Dense_pt_weights_output_result_t;
typedef ap_fixed<9,3> weight27_t;
typedef ap_fixed<9,3> bias27_t;
typedef ap_uint<1> layer27_index;
typedef ap_fixed<24,9> Dense_2_jetID_result_t;
typedef ap_fixed<9,3> weight29_t;
typedef ap_fixed<9,3> bias29_t;
typedef ap_uint<1> layer29_index;
typedef ap_ufixed<11,2,AP_RND_CONV,AP_SAT,0> layer31_t;
typedef ap_fixed<18,8> pt_weights_output_table_t;
typedef ap_ufixed<17,1,AP_RND,AP_SAT,0> input32_t;
typedef ap_ufixed<9,0,AP_RND_CONV,AP_SAT,0> layer33_t;
typedef ap_fixed<18,8> relu_2_jetID_table_t;
typedef ap_ufixed<28,3> apply_pt_weights_result_t;
typedef ap_fixed<23,8> Dense_3_jetID_result_t;
typedef ap_fixed<9,3> weight35_t;
typedef ap_fixed<9,3> bias35_t;
typedef ap_uint<1> layer35_index;
typedef ap_fixed<49,11> pT_output_dense_result_t;
typedef ap_fixed<16,3> weight37_t;
typedef ap_uint<1> bias37_t;
typedef ap_uint<1> layer37_index;
typedef ap_ufixed<24,12,AP_RND,AP_SAT,0> layer39_t;
typedef ap_fixed<18,8> jet_id_output_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> jet_id_output_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> jet_id_output_inv_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT,0> jet_id_output_inv_inp_t;
typedef ap_ufixed<16,2,AP_RND,AP_SAT,0> layer40_t;
typedef ap_fixed<18,8> pT_output_table_t;

// hls-fpga-machine-learning insert emulator-defines


#endif
}
