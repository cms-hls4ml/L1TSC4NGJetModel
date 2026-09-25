#include <iostream>

#include "L1TSC4NGJetModel_v1_0_1.h"
#include "parameters.h"


namespace hls4ml_L1TSC4NGJetModel_v1_0_1 {
void L1TSC4NGJetModel_v1_0_1(
    input_t basic_input[16*20],
    layer22_t layer22_out[8], layer24_t layer24_out[1]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=basic_input complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer22_out complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer24_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=basic_input,layer22_out,layer24_out 
    #pragma HLS PIPELINE

    // hls-fpga-machine-learning insert load weights
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        nnet::load_weights_from_txt<norm_input_scale_t, 20>(s2, "s2.txt");
        nnet::load_weights_from_txt<norm_input_bias_t, 20>(b2, "b2.txt");
        nnet::load_weights_from_txt<weight3_t, 200>(w3, "w3.txt");
        nnet::load_weights_from_txt<bias3_t, 10>(b3, "b3.txt");
        nnet::load_weights_from_txt<weight6_t, 100>(w6, "w6.txt");
        nnet::load_weights_from_txt<bias6_t, 10>(b6, "b6.txt");
        nnet::load_weights_from_txt<weight11_t, 320>(w11, "w11.txt");
        nnet::load_weights_from_txt<bias11_t, 32>(b11, "b11.txt");
        nnet::load_weights_from_txt<weight14_t, 512>(w14, "w14.txt");
        nnet::load_weights_from_txt<bias14_t, 16>(b14, "b14.txt");
        nnet::load_weights_from_txt<weight17_t, 100>(w17, "w17.txt");
        nnet::load_weights_from_txt<bias17_t, 10>(b17, "b17.txt");
        nnet::load_weights_from_txt<weight19_t, 128>(w19, "w19.txt");
        nnet::load_weights_from_txt<bias19_t, 8>(b19, "b19.txt");
        nnet::load_weights_from_txt<weight23_t, 10>(w23, "w23.txt");
        nnet::load_weights_from_txt<bias23_t, 1>(b23, "b23.txt");
        loaded_weights = true;    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    layer2_t layer2_out[16*20];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0

    Conv1D_1_result_t layer3_out[16*10];
    #pragma HLS ARRAY_PARTITION variable=layer3_out complete dim=0

    layer5_t layer5_out[16*10];
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0

    Conv1D_2_result_t layer6_out[16*10];
    #pragma HLS ARRAY_PARTITION variable=layer6_out complete dim=0

    layer8_t layer8_out[16*10];
    #pragma HLS ARRAY_PARTITION variable=layer8_out complete dim=0

    layer9_t layer9_out[16*10];
    #pragma HLS ARRAY_PARTITION variable=layer9_out complete dim=0

    layer10_t layer10_out[10];
    #pragma HLS ARRAY_PARTITION variable=layer10_out complete dim=0

    Dense_1_jetID_result_t layer11_out[32];
    #pragma HLS ARRAY_PARTITION variable=layer11_out complete dim=0

    layer13_t layer13_out[32];
    #pragma HLS ARRAY_PARTITION variable=layer13_out complete dim=0

    Dense_2_jetID_result_t layer14_out[16];
    #pragma HLS ARRAY_PARTITION variable=layer14_out complete dim=0

    layer16_t layer16_out[16];
    #pragma HLS ARRAY_PARTITION variable=layer16_out complete dim=0

    Dense_1_pT_result_t layer17_out[10];
    #pragma HLS ARRAY_PARTITION variable=layer17_out complete dim=0

    Dense_3_jetID_result_t layer19_out[8];
    #pragma HLS ARRAY_PARTITION variable=layer19_out complete dim=0

    layer21_t layer21_out[10];
    #pragma HLS ARRAY_PARTITION variable=layer21_out complete dim=0

    layer23_t layer23_out[1];
    #pragma HLS ARRAY_PARTITION variable=layer23_out complete dim=0

    nnet::normalize<input_t, layer2_t, config2>(basic_input, layer2_out, s2, b2); // norm_input

    nnet::pointwise_conv_1d_cl<layer2_t, Conv1D_1_result_t, config25>(layer2_out, layer3_out, w3, b3); // Conv1D_1

    nnet::relu<Conv1D_1_result_t, layer5_t, relu_config5>(layer3_out, layer5_out); // relu_1

    nnet::pointwise_conv_1d_cl<layer5_t, Conv1D_2_result_t, config26>(layer5_out, layer6_out, w6, b6); // Conv1D_2

    nnet::relu<Conv1D_2_result_t, layer8_t, relu_config8>(layer6_out, layer8_out); // relu_2

    nnet::linear<layer8_t, layer9_t, linear_config9>(layer8_out, layer9_out); // act_pool

    nnet::global_pooling1d_cl<layer9_t, layer10_t, config10>(layer9_out, layer10_out); // pool

    nnet::dense<layer10_t, Dense_1_jetID_result_t, config11>(layer10_out, layer11_out, w11, b11); // Dense_1_jetID

    nnet::relu<Dense_1_jetID_result_t, layer13_t, relu_config13>(layer11_out, layer13_out); // relu_1_jetID

    nnet::dense<layer13_t, Dense_2_jetID_result_t, config14>(layer13_out, layer14_out, w14, b14); // Dense_2_jetID

    nnet::relu<Dense_2_jetID_result_t, layer16_t, relu_config16>(layer14_out, layer16_out); // relu_2_jetID

    nnet::dense<layer10_t, Dense_1_pT_result_t, config17>(layer10_out, layer17_out, w17, b17); // Dense_1_pT

    nnet::dense<layer16_t, Dense_3_jetID_result_t, config19>(layer16_out, layer19_out, w19, b19); // Dense_3_jetID

    nnet::relu<Dense_1_pT_result_t, layer21_t, relu_config21>(layer17_out, layer21_out); // relu_1_pT

    nnet::softmax<Dense_3_jetID_result_t, layer22_t, softmax_config22>(layer19_out, layer22_out); // jet_id_output

    nnet::dense<layer21_t, layer23_t, config23>(layer21_out, layer23_out, w23, b23); // pT_output

    nnet::linear<layer23_t, layer24_t, linear_config24>(layer23_out, layer24_out); // pT_output_linear

}

}
