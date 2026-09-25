#include <iostream>

#include "L1TSC4NGJetModel_v2_0_0.h"
#include "parameters.h"


namespace hls4ml_L1TSC4NGJetModel_v2_0_0 {
void L1TSC4NGJetModel_v2_0_0(
    input_t basic_input[16*21], input32_t constituent_fraction[16], input12_t jet_features[2], input14_t pt_mask[16],
    layer39_t layer39_out[9], layer40_t layer40_out[1]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=basic_input complete dim=0
    #pragma HLS ARRAY_RESHAPE variable=constituent_fraction complete dim=0
    #pragma HLS ARRAY_RESHAPE variable=jet_features complete dim=0
    #pragma HLS ARRAY_RESHAPE variable=pt_mask complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer39_out complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer40_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=basic_input,constituent_fraction,jet_features,pt_mask,layer39_out,layer40_out 
    #pragma HLS PIPELINE

    // hls-fpga-machine-learning insert load weights
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        nnet::load_weights_from_txt<norm_basic_input_scale_t, 21>(s2, "s2.txt");
        nnet::load_weights_from_txt<norm_basic_input_bias_t, 21>(b2, "b2.txt");
        nnet::load_weights_from_txt<weight3_t, 210>(w3, "w3.txt");
        nnet::load_weights_from_txt<bias3_t, 10>(b3, "b3.txt");
        nnet::load_weights_from_txt<weight6_t, 100>(w6, "w6.txt");
        nnet::load_weights_from_txt<bias6_t, 10>(b6, "b6.txt");
        nnet::load_weights_from_txt<weight9_t, 10>(w9, "w9.txt");
        nnet::load_weights_from_txt<bias9_t, 1>(b9, "b9.txt");
        nnet::load_weights_from_txt<norm_jet_features_scale_t, 2>(s16, "s16.txt");
        nnet::load_weights_from_txt<norm_jet_features_bias_t, 2>(b16, "b16.txt");
        nnet::load_weights_from_txt<weight21_t, 288>(w21, "w21.txt");
        nnet::load_weights_from_txt<bias21_t, 16>(b21, "b21.txt");
        nnet::load_weights_from_txt<weight23_t, 384>(w23, "w23.txt");
        nnet::load_weights_from_txt<bias23_t, 32>(b23, "b23.txt");
        nnet::load_weights_from_txt<weight27_t, 256>(w27, "w27.txt");
        nnet::load_weights_from_txt<bias27_t, 16>(b27, "b27.txt");
        nnet::load_weights_from_txt<weight29_t, 512>(w29, "w29.txt");
        nnet::load_weights_from_txt<bias29_t, 16>(b29, "b29.txt");
        nnet::load_weights_from_txt<weight35_t, 144>(w35, "w35.txt");
        nnet::load_weights_from_txt<bias35_t, 9>(b35, "b35.txt");
        nnet::load_weights_from_txt<weight37_t, 16>(w37, "w37.txt");
        nnet::load_weights_from_txt<bias37_t, 1>(b37, "b37.txt");
        loaded_weights = true;    }
#endif
    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    layer2_t layer2_out[16*21];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0

    Conv1D_1_result_t layer3_out[16*10];
    #pragma HLS ARRAY_PARTITION variable=layer3_out complete dim=0

    layer5_t layer5_out[16*10];
    #pragma HLS ARRAY_PARTITION variable=layer5_out complete dim=0

    Conv1D_2_result_t layer6_out[16*10];
    #pragma HLS ARRAY_PARTITION variable=layer6_out complete dim=0

    layer8_t layer8_out[16*10];
    #pragma HLS ARRAY_PARTITION variable=layer8_out complete dim=0

    Conv1D_pt_weights_result_t layer9_out[16*1];
    #pragma HLS ARRAY_PARTITION variable=layer9_out complete dim=0

    auto& layer11_out = layer9_out;
    layer13_t layer13_out[16];
    #pragma HLS ARRAY_PARTITION variable=layer13_out complete dim=0

    layer15_t layer15_out[16*10];
    #pragma HLS ARRAY_PARTITION variable=layer15_out complete dim=0

    layer16_t layer16_out[2];
    #pragma HLS ARRAY_PARTITION variable=layer16_out complete dim=0

    apply_pt_mask_weights_result_t layer17_out[16];
    #pragma HLS ARRAY_PARTITION variable=layer17_out complete dim=0

    layer18_t layer18_out[10];
    #pragma HLS ARRAY_PARTITION variable=layer18_out complete dim=0

    concat_jet_features_pt_weights_result_t layer19_out[18];
    #pragma HLS ARRAY_PARTITION variable=layer19_out complete dim=0

    concat_jet_features_result_t layer20_out[12];
    #pragma HLS ARRAY_PARTITION variable=layer20_out complete dim=0

    Dense_pt_weights_output_0_result_t layer21_out[16];
    #pragma HLS ARRAY_PARTITION variable=layer21_out complete dim=0

    Dense_1_jetID_result_t layer23_out[32];
    #pragma HLS ARRAY_PARTITION variable=layer23_out complete dim=0

    layer25_t layer25_out[16];
    #pragma HLS ARRAY_PARTITION variable=layer25_out complete dim=0

    layer26_t layer26_out[32];
    #pragma HLS ARRAY_PARTITION variable=layer26_out complete dim=0

    Dense_pt_weights_output_result_t layer27_out[16];
    #pragma HLS ARRAY_PARTITION variable=layer27_out complete dim=0

    Dense_2_jetID_result_t layer29_out[16];
    #pragma HLS ARRAY_PARTITION variable=layer29_out complete dim=0

    layer31_t layer31_out[16];
    #pragma HLS ARRAY_PARTITION variable=layer31_out complete dim=0

    layer33_t layer33_out[16];
    #pragma HLS ARRAY_PARTITION variable=layer33_out complete dim=0

    apply_pt_weights_result_t layer34_out[16];
    #pragma HLS ARRAY_PARTITION variable=layer34_out complete dim=0

    Dense_3_jetID_result_t layer35_out[9];
    #pragma HLS ARRAY_PARTITION variable=layer35_out complete dim=0

    pT_output_dense_result_t layer37_out[1];
    #pragma HLS ARRAY_PARTITION variable=layer37_out complete dim=0

    nnet::normalize<input_t, layer2_t, config2>(basic_input, layer2_out, s2, b2); // norm_basic_input

    nnet::pointwise_conv_1d_cl<layer2_t, Conv1D_1_result_t, config41>(layer2_out, layer3_out, w3, b3); // Conv1D_1

    nnet::relu<Conv1D_1_result_t, layer5_t, relu_config5>(layer3_out, layer5_out); // relu_1

    nnet::pointwise_conv_1d_cl<layer5_t, Conv1D_2_result_t, config42>(layer5_out, layer6_out, w6, b6); // Conv1D_2

    nnet::relu<Conv1D_2_result_t, layer8_t, relu_config8>(layer6_out, layer8_out); // relu_2

    nnet::pointwise_conv_1d_cl<layer8_t, Conv1D_pt_weights_result_t, config43>(layer8_out, layer9_out, w9, b9); // Conv1D_pt_weights

    nnet::relu<Conv1D_pt_weights_result_t, layer13_t, relu_config13>(layer11_out, layer13_out); // Conv1D_pt_weights_relu

    nnet::linear<layer8_t, layer15_t, linear_config15>(layer8_out, layer15_out); // act_pool

    nnet::normalize<input12_t, layer16_t, config16>(jet_features, layer16_out, s16, b16); // norm_jet_features

    nnet::multiply<layer13_t, input14_t, apply_pt_mask_weights_result_t, config17>(layer13_out, pt_mask, layer17_out); // apply_pt_mask_weights

    nnet::global_pooling1d_cl<layer15_t, layer18_t, config18>(layer15_out, layer18_out); // avg_pooling

    nnet::concatenate1d<apply_pt_mask_weights_result_t, layer16_t, concat_jet_features_pt_weights_result_t, config19>(layer17_out, layer16_out, layer19_out); // concat_jet_features_pt_weights

    nnet::concatenate1d<layer18_t, layer16_t, concat_jet_features_result_t, config20>(layer18_out, layer16_out, layer20_out); // concat_jet_features

    nnet::dense<concat_jet_features_pt_weights_result_t, Dense_pt_weights_output_0_result_t, config21>(layer19_out, layer21_out, w21, b21); // Dense_pt_weights_output_0

    nnet::dense<concat_jet_features_result_t, Dense_1_jetID_result_t, config23>(layer20_out, layer23_out, w23, b23); // Dense_1_jetID

    nnet::relu<Dense_pt_weights_output_0_result_t, layer25_t, relu_config25>(layer21_out, layer25_out); // pt_weights_output_0

    nnet::relu<Dense_1_jetID_result_t, layer26_t, relu_config26>(layer23_out, layer26_out); // relu_1_jetID

    nnet::dense<layer25_t, Dense_pt_weights_output_result_t, config27>(layer25_out, layer27_out, w27, b27); // Dense_pt_weights_output

    nnet::dense<layer26_t, Dense_2_jetID_result_t, config29>(layer26_out, layer29_out, w29, b29); // Dense_2_jetID

    nnet::relu<Dense_pt_weights_output_result_t, layer31_t, relu_config31>(layer27_out, layer31_out); // pt_weights_output

    nnet::relu<Dense_2_jetID_result_t, layer33_t, relu_config33>(layer29_out, layer33_out); // relu_2_jetID

    nnet::multiply<layer31_t, input32_t, apply_pt_weights_result_t, config34>(layer31_out, constituent_fraction, layer34_out); // apply_pt_weights

    nnet::dense<layer33_t, Dense_3_jetID_result_t, config35>(layer33_out, layer35_out, w35, b35); // Dense_3_jetID

    nnet::dense<apply_pt_weights_result_t, pT_output_dense_result_t, config37>(layer34_out, layer37_out, w37, b37); // pT_output_dense

    nnet::softmax<Dense_3_jetID_result_t, layer39_t, softmax_config39>(layer35_out, layer39_out); // jet_id_output

    nnet::relu<pT_output_dense_result_t, layer40_t, relu_config40>(layer37_out, layer40_out); // pT_output

}

}
