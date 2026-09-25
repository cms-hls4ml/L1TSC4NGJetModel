#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_fixed.h"
#include "ap_int.h"

#include "nnet_utils/nnet_code_gen.h"
#include "nnet_utils/nnet_helpers.h"
// hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_batchnorm.h"
#include "nnet_utils/nnet_batchnorm_stream.h"
#include "nnet_utils/nnet_conv1d.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_compressed.h"
#include "nnet_utils/nnet_dense_stream.h"
#include "nnet_utils/nnet_merge.h"
#include "nnet_utils/nnet_merge_stream.h"
#include "nnet_utils/nnet_pooling.h"
#include "nnet_utils/nnet_pooling_stream.h"
#include "nnet_utils/nnet_sepconv1d_stream.h"

// hls-fpga-machine-learning insert weights
#include "weights/s2.h"
#include "weights/b2.h"
#include "weights/w3.h"
#include "weights/b3.h"
#include "weights/w6.h"
#include "weights/b6.h"
#include "weights/w9.h"
#include "weights/b9.h"
#include "weights/s16.h"
#include "weights/b16.h"
#include "weights/w21.h"
#include "weights/b21.h"
#include "weights/w23.h"
#include "weights/b23.h"
#include "weights/w27.h"
#include "weights/b27.h"
#include "weights/w29.h"
#include "weights/b29.h"
#include "weights/w35.h"
#include "weights/b35.h"
#include "weights/w37.h"
#include "weights/b37.h"


namespace hls4ml_L1TSC4NGJetModel_v2_0_0 {
// hls-fpga-machine-learning insert layer-config
// norm_basic_input
struct config2 : nnet::batchnorm_config {
    static const unsigned n_in = 16*21;
    static const unsigned n_filt = 21;
    static const unsigned n_scale_bias = (n_filt == -1) ? n_in : n_filt;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in, reuse_factor);
    static const bool store_weights_in_bram = false;
    typedef norm_basic_input_bias_t bias_t;
    typedef norm_basic_input_scale_t scale_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// Conv1D_1
struct config41_mult : nnet::dense_config {
    static const unsigned n_in = 336;
    static const unsigned n_out = 160;
    static const unsigned reuse_factor = 1;
    static const unsigned strategy = nnet::latency;
    static const unsigned n_zeros = 22;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    typedef model_default_t accum_t;
    typedef bias3_t bias_t;
    typedef weight3_t weight_t;
    template<class data_T, class res_T, class CONFIG_T>
    using kernel = nnet::DenseLatency<data_T, res_T, CONFIG_T>;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config41 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 16;
    static const unsigned n_chan = 21;
    static const unsigned filt_width = 1;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 10;
    static const unsigned stride_width = 1;
    static const unsigned dilation = 1;
    static const unsigned out_width = 16;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 22;
    static const unsigned multiplier_limit =
        DIV_ROUNDUP(kernel_size * n_chan * n_filt, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::latency;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_width = 16;
    static const ap_uint<filt_width> pixels[min_width];
    static const unsigned n_partitions = 1;
    static const unsigned n_pixels = out_width / n_partitions;
    template<class data_T, class CONFIG_T>
    using fill_buffer = nnet::fill_buffer_41<data_T, CONFIG_T>;
    typedef model_default_t accum_t;
    typedef bias3_t bias_t;
    typedef weight3_t weight_t;
    typedef config41_mult mult_config;
    template<unsigned K, unsigned S, unsigned W>
    using scale_index = nnet::scale_index_regular<K, S, W>;
    template<class data_T, class res_T, class CONFIG_T>
    using conv_kernel = nnet::BatchedDenseForConv1D<data_T, res_T, CONFIG_T>;
};
const ap_uint<config41::filt_width> config41::pixels[] = {0};

// relu_1
struct relu_config5 : nnet::activ_config {
    static const unsigned n_in = 160;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef relu_1_table_t table_t;
};

// Conv1D_2
struct config42_mult : nnet::dense_config {
    static const unsigned n_in = 160;
    static const unsigned n_out = 160;
    static const unsigned reuse_factor = 1;
    static const unsigned strategy = nnet::latency;
    static const unsigned n_zeros = 10;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    typedef model_default_t accum_t;
    typedef bias6_t bias_t;
    typedef weight6_t weight_t;
    template<class data_T, class res_T, class CONFIG_T>
    using kernel = nnet::DenseLatency<data_T, res_T, CONFIG_T>;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config42 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 16;
    static const unsigned n_chan = 10;
    static const unsigned filt_width = 1;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 10;
    static const unsigned stride_width = 1;
    static const unsigned dilation = 1;
    static const unsigned out_width = 16;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 10;
    static const unsigned multiplier_limit =
        DIV_ROUNDUP(kernel_size * n_chan * n_filt, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::latency;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_width = 16;
    static const ap_uint<filt_width> pixels[min_width];
    static const unsigned n_partitions = 1;
    static const unsigned n_pixels = out_width / n_partitions;
    template<class data_T, class CONFIG_T>
    using fill_buffer = nnet::fill_buffer_42<data_T, CONFIG_T>;
    typedef model_default_t accum_t;
    typedef bias6_t bias_t;
    typedef weight6_t weight_t;
    typedef config42_mult mult_config;
    template<unsigned K, unsigned S, unsigned W>
    using scale_index = nnet::scale_index_regular<K, S, W>;
    template<class data_T, class res_T, class CONFIG_T>
    using conv_kernel = nnet::BatchedDenseForConv1D<data_T, res_T, CONFIG_T>;
};
const ap_uint<config42::filt_width> config42::pixels[] = {0};

// relu_2
struct relu_config8 : nnet::activ_config {
    static const unsigned n_in = 160;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef relu_2_table_t table_t;
};

// Conv1D_pt_weights
struct config43_mult : nnet::dense_config {
    static const unsigned n_in = 160;
    static const unsigned n_out = 16;
    static const unsigned reuse_factor = 1;
    static const unsigned strategy = nnet::latency;
    static const unsigned n_zeros = 1;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    typedef model_default_t accum_t;
    typedef bias9_t bias_t;
    typedef weight9_t weight_t;
    template<class data_T, class res_T, class CONFIG_T>
    using kernel = nnet::DenseLatency<data_T, res_T, CONFIG_T>;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config43 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 16;
    static const unsigned n_chan = 10;
    static const unsigned filt_width = 1;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 1;
    static const unsigned stride_width = 1;
    static const unsigned dilation = 1;
    static const unsigned out_width = 16;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 1;
    static const unsigned multiplier_limit =
        DIV_ROUNDUP(kernel_size * n_chan * n_filt, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::latency;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned min_width = 16;
    static const ap_uint<filt_width> pixels[min_width];
    static const unsigned n_partitions = 1;
    static const unsigned n_pixels = out_width / n_partitions;
    template<class data_T, class CONFIG_T>
    using fill_buffer = nnet::fill_buffer_43<data_T, CONFIG_T>;
    typedef model_default_t accum_t;
    typedef bias9_t bias_t;
    typedef weight9_t weight_t;
    typedef config43_mult mult_config;
    template<unsigned K, unsigned S, unsigned W>
    using scale_index = nnet::scale_index_regular<K, S, W>;
    template<class data_T, class res_T, class CONFIG_T>
    using conv_kernel = nnet::BatchedDenseForConv1D<data_T, res_T, CONFIG_T>;
};
const ap_uint<config43::filt_width> config43::pixels[] = {0};

// Conv1D_pt_weights_relu
struct relu_config13 : nnet::activ_config {
    static const unsigned n_in = 16;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef Conv1D_pt_weights_relu_table_t table_t;
};

// act_pool
struct linear_config15 : nnet::activ_config {
    static const unsigned n_in = 160;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef act_pool_table_t table_t;
};

// norm_jet_features
struct config16 : nnet::batchnorm_config {
    static const unsigned n_in = 2;
    static const unsigned n_filt = -1;
    static const unsigned n_scale_bias = (n_filt == -1) ? n_in : n_filt;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in, reuse_factor);
    static const bool store_weights_in_bram = false;
    typedef norm_jet_features_bias_t bias_t;
    typedef norm_jet_features_scale_t scale_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// apply_pt_mask_weights
struct config17 : nnet::merge_config {
    static const unsigned n_elem = 16;
    static const unsigned n_elem1 = 16;
    static const unsigned n_elem2 = 16;
    static const unsigned reuse_factor = 1;
};

// avg_pooling
struct config18 : nnet::pooling1d_config {
    static const unsigned n_in = 16;
    static const unsigned n_filt = 10;
    static const nnet::Pool_Op pool_op = nnet::Average;
    static const unsigned reuse_factor = 1;
    typedef model_default_t accum_t;
};

// concat_jet_features_pt_weights
struct config19 : nnet::concat_config {
    static const unsigned n_elem1_0 = 16;
    static const unsigned n_elem1_1 = 0;
    static const unsigned n_elem1_2 = 0;
    static const unsigned n_elem2_0 = 2;
    static const unsigned n_elem2_1 = 0;
    static const unsigned n_elem2_2 = 0;

    static const int axis = -1;
};

// concat_jet_features
struct config20 : nnet::concat_config {
    static const unsigned n_elem1_0 = 10;
    static const unsigned n_elem1_1 = 0;
    static const unsigned n_elem1_2 = 0;
    static const unsigned n_elem2_0 = 2;
    static const unsigned n_elem2_1 = 0;
    static const unsigned n_elem2_2 = 0;

    static const int axis = -1;
};

// Dense_pt_weights_output_0
struct config21 : nnet::dense_config {
    static const unsigned n_in = 18;
    static const unsigned n_out = 16;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 33;
    static const unsigned n_nonzeros = 255;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias21_t bias_t;
    typedef weight21_t weight_t;
    typedef layer21_index index_t;
    template<class data_T, class res_T, class CONFIG_T>
    using kernel = nnet::DenseLatency<data_T, res_T, CONFIG_T>;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// Dense_1_jetID
struct config23 : nnet::dense_config {
    static const unsigned n_in = 12;
    static const unsigned n_out = 32;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 45;
    static const unsigned n_nonzeros = 339;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias23_t bias_t;
    typedef weight23_t weight_t;
    typedef layer23_index index_t;
    template<class data_T, class res_T, class CONFIG_T>
    using kernel = nnet::DenseLatency<data_T, res_T, CONFIG_T>;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// pt_weights_output_0
struct relu_config25 : nnet::activ_config {
    static const unsigned n_in = 16;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef pt_weights_output_0_table_t table_t;
};

// relu_1_jetID
struct relu_config26 : nnet::activ_config {
    static const unsigned n_in = 32;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef relu_1_jetID_table_t table_t;
};

// Dense_pt_weights_output
struct config27 : nnet::dense_config {
    static const unsigned n_in = 16;
    static const unsigned n_out = 16;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 26;
    static const unsigned n_nonzeros = 230;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias27_t bias_t;
    typedef weight27_t weight_t;
    typedef layer27_index index_t;
    template<class data_T, class res_T, class CONFIG_T>
    using kernel = nnet::DenseLatency<data_T, res_T, CONFIG_T>;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// Dense_2_jetID
struct config29 : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 16;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 55;
    static const unsigned n_nonzeros = 457;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias29_t bias_t;
    typedef weight29_t weight_t;
    typedef layer29_index index_t;
    template<class data_T, class res_T, class CONFIG_T>
    using kernel = nnet::DenseLatency<data_T, res_T, CONFIG_T>;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// pt_weights_output
struct relu_config31 : nnet::activ_config {
    static const unsigned n_in = 16;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef pt_weights_output_table_t table_t;
};

// relu_2_jetID
struct relu_config33 : nnet::activ_config {
    static const unsigned n_in = 16;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef relu_2_jetID_table_t table_t;
};

// apply_pt_weights
struct config34 : nnet::merge_config {
    static const unsigned n_elem = 16;
    static const unsigned n_elem1 = 16;
    static const unsigned n_elem2 = 16;
    static const unsigned reuse_factor = 1;
};

// Dense_3_jetID
struct config35 : nnet::dense_config {
    static const unsigned n_in = 16;
    static const unsigned n_out = 9;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 15;
    static const unsigned n_nonzeros = 129;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias35_t bias_t;
    typedef weight35_t weight_t;
    typedef layer35_index index_t;
    template<class data_T, class res_T, class CONFIG_T>
    using kernel = nnet::DenseLatency<data_T, res_T, CONFIG_T>;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// pT_output_dense
struct config37 : nnet::dense_config {
    static const unsigned n_in = 16;
    static const unsigned n_out = 1;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 16;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias37_t bias_t;
    typedef weight37_t weight_t;
    typedef layer37_index index_t;
    template<class data_T, class res_T, class CONFIG_T>
    using kernel = nnet::DenseLatency<data_T, res_T, CONFIG_T>;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// jet_id_output
struct softmax_config39 : nnet::activ_config {
    static const unsigned n_in = 9;
    static const unsigned n_slice = 9;
    static const unsigned n_outer = 1;
    static const unsigned n_inner = 1;
    static const unsigned parallelization_factor = -1;
    static const unsigned exp_table_size = 1024;
    static const unsigned inv_table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const unsigned axis = -1;
    static const nnet::softmax_implementation implementation = nnet::softmax_implementation::stable;
    static constexpr float exp_scale = 1.0;
    typedef jet_id_output_exp_table_t exp_table_t;
    typedef jet_id_output_inv_table_t inv_table_t;
    typedef model_default_t accum_t;
    typedef jet_id_output_inv_inp_t inv_inp_t;
    typedef ap_ufixed<22, 7> inp_norm_t;
};

// pT_output
struct relu_config40 : nnet::activ_config {
    static const unsigned n_in = 1;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef pT_output_table_t table_t;
};



}

#endif
