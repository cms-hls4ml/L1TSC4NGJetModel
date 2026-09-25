#ifndef NNET_INSTR_GEN_H_
#define NNET_INSTR_GEN_H_

#include "nnet_conv1d_latency.h"
#include "nnet_helpers.h"

#include "hls_stream.h"
#include "nnet_common.h"
#include "nnet_function_stubs.h"
#include "nnet_mult.h"

namespace nnet {

template <class data_T, class res_T, typename CONFIG_T> class PointwiseConv1D {
  public:
    static void pointwise_conv(data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
                               res_T res[CONFIG_T::out_width * CONFIG_T::n_filt],
                               typename CONFIG_T::weight_t weights[CONFIG_T::n_chan * CONFIG_T::n_filt],
                               typename CONFIG_T::bias_t biases[CONFIG_T::n_filt]) {
        // To be implemented in subclasses
    }
};

// hls4ml insert code
template<class data_T, typename CONFIG_T>
class fill_buffer_41 : public nnet::FillConv1DBuffer<data_T, CONFIG_T> {
    public:
    static void fill_buffer(
        data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
        data_T buffer[CONFIG_T::n_pixels][CONFIG_T::filt_width * CONFIG_T::n_chan],
        const unsigned partition
    ) {
        if (partition ==   0) {
            buffer[0][0] =    data[0]; buffer[0][1] =    data[1]; buffer[0][2] =    data[2]; buffer[0][3] =    data[3]; buffer[0][4] =    data[4]; buffer[0][5] =    data[5]; buffer[0][6] =    data[6]; buffer[0][7] =    data[7]; buffer[0][8] =    data[8]; buffer[0][9] =    data[9]; buffer[0][10] =   data[10]; buffer[0][11] =   data[11]; buffer[0][12] =   data[12]; buffer[0][13] =   data[13]; buffer[0][14] =   data[14]; buffer[0][15] =   data[15]; buffer[0][16] =   data[16]; buffer[0][17] =   data[17]; buffer[0][18] =   data[18]; buffer[0][19] =   data[19]; buffer[0][20] =   data[20];
            buffer[1][0] =   data[21]; buffer[1][1] =   data[22]; buffer[1][2] =   data[23]; buffer[1][3] =   data[24]; buffer[1][4] =   data[25]; buffer[1][5] =   data[26]; buffer[1][6] =   data[27]; buffer[1][7] =   data[28]; buffer[1][8] =   data[29]; buffer[1][9] =   data[30]; buffer[1][10] =   data[31]; buffer[1][11] =   data[32]; buffer[1][12] =   data[33]; buffer[1][13] =   data[34]; buffer[1][14] =   data[35]; buffer[1][15] =   data[36]; buffer[1][16] =   data[37]; buffer[1][17] =   data[38]; buffer[1][18] =   data[39]; buffer[1][19] =   data[40]; buffer[1][20] =   data[41];
            buffer[2][0] =   data[42]; buffer[2][1] =   data[43]; buffer[2][2] =   data[44]; buffer[2][3] =   data[45]; buffer[2][4] =   data[46]; buffer[2][5] =   data[47]; buffer[2][6] =   data[48]; buffer[2][7] =   data[49]; buffer[2][8] =   data[50]; buffer[2][9] =   data[51]; buffer[2][10] =   data[52]; buffer[2][11] =   data[53]; buffer[2][12] =   data[54]; buffer[2][13] =   data[55]; buffer[2][14] =   data[56]; buffer[2][15] =   data[57]; buffer[2][16] =   data[58]; buffer[2][17] =   data[59]; buffer[2][18] =   data[60]; buffer[2][19] =   data[61]; buffer[2][20] =   data[62];
            buffer[3][0] =   data[63]; buffer[3][1] =   data[64]; buffer[3][2] =   data[65]; buffer[3][3] =   data[66]; buffer[3][4] =   data[67]; buffer[3][5] =   data[68]; buffer[3][6] =   data[69]; buffer[3][7] =   data[70]; buffer[3][8] =   data[71]; buffer[3][9] =   data[72]; buffer[3][10] =   data[73]; buffer[3][11] =   data[74]; buffer[3][12] =   data[75]; buffer[3][13] =   data[76]; buffer[3][14] =   data[77]; buffer[3][15] =   data[78]; buffer[3][16] =   data[79]; buffer[3][17] =   data[80]; buffer[3][18] =   data[81]; buffer[3][19] =   data[82]; buffer[3][20] =   data[83];
            buffer[4][0] =   data[84]; buffer[4][1] =   data[85]; buffer[4][2] =   data[86]; buffer[4][3] =   data[87]; buffer[4][4] =   data[88]; buffer[4][5] =   data[89]; buffer[4][6] =   data[90]; buffer[4][7] =   data[91]; buffer[4][8] =   data[92]; buffer[4][9] =   data[93]; buffer[4][10] =   data[94]; buffer[4][11] =   data[95]; buffer[4][12] =   data[96]; buffer[4][13] =   data[97]; buffer[4][14] =   data[98]; buffer[4][15] =   data[99]; buffer[4][16] =  data[100]; buffer[4][17] =  data[101]; buffer[4][18] =  data[102]; buffer[4][19] =  data[103]; buffer[4][20] =  data[104];
            buffer[5][0] =  data[105]; buffer[5][1] =  data[106]; buffer[5][2] =  data[107]; buffer[5][3] =  data[108]; buffer[5][4] =  data[109]; buffer[5][5] =  data[110]; buffer[5][6] =  data[111]; buffer[5][7] =  data[112]; buffer[5][8] =  data[113]; buffer[5][9] =  data[114]; buffer[5][10] =  data[115]; buffer[5][11] =  data[116]; buffer[5][12] =  data[117]; buffer[5][13] =  data[118]; buffer[5][14] =  data[119]; buffer[5][15] =  data[120]; buffer[5][16] =  data[121]; buffer[5][17] =  data[122]; buffer[5][18] =  data[123]; buffer[5][19] =  data[124]; buffer[5][20] =  data[125];
            buffer[6][0] =  data[126]; buffer[6][1] =  data[127]; buffer[6][2] =  data[128]; buffer[6][3] =  data[129]; buffer[6][4] =  data[130]; buffer[6][5] =  data[131]; buffer[6][6] =  data[132]; buffer[6][7] =  data[133]; buffer[6][8] =  data[134]; buffer[6][9] =  data[135]; buffer[6][10] =  data[136]; buffer[6][11] =  data[137]; buffer[6][12] =  data[138]; buffer[6][13] =  data[139]; buffer[6][14] =  data[140]; buffer[6][15] =  data[141]; buffer[6][16] =  data[142]; buffer[6][17] =  data[143]; buffer[6][18] =  data[144]; buffer[6][19] =  data[145]; buffer[6][20] =  data[146];
            buffer[7][0] =  data[147]; buffer[7][1] =  data[148]; buffer[7][2] =  data[149]; buffer[7][3] =  data[150]; buffer[7][4] =  data[151]; buffer[7][5] =  data[152]; buffer[7][6] =  data[153]; buffer[7][7] =  data[154]; buffer[7][8] =  data[155]; buffer[7][9] =  data[156]; buffer[7][10] =  data[157]; buffer[7][11] =  data[158]; buffer[7][12] =  data[159]; buffer[7][13] =  data[160]; buffer[7][14] =  data[161]; buffer[7][15] =  data[162]; buffer[7][16] =  data[163]; buffer[7][17] =  data[164]; buffer[7][18] =  data[165]; buffer[7][19] =  data[166]; buffer[7][20] =  data[167];
            buffer[8][0] =  data[168]; buffer[8][1] =  data[169]; buffer[8][2] =  data[170]; buffer[8][3] =  data[171]; buffer[8][4] =  data[172]; buffer[8][5] =  data[173]; buffer[8][6] =  data[174]; buffer[8][7] =  data[175]; buffer[8][8] =  data[176]; buffer[8][9] =  data[177]; buffer[8][10] =  data[178]; buffer[8][11] =  data[179]; buffer[8][12] =  data[180]; buffer[8][13] =  data[181]; buffer[8][14] =  data[182]; buffer[8][15] =  data[183]; buffer[8][16] =  data[184]; buffer[8][17] =  data[185]; buffer[8][18] =  data[186]; buffer[8][19] =  data[187]; buffer[8][20] =  data[188];
            buffer[9][0] =  data[189]; buffer[9][1] =  data[190]; buffer[9][2] =  data[191]; buffer[9][3] =  data[192]; buffer[9][4] =  data[193]; buffer[9][5] =  data[194]; buffer[9][6] =  data[195]; buffer[9][7] =  data[196]; buffer[9][8] =  data[197]; buffer[9][9] =  data[198]; buffer[9][10] =  data[199]; buffer[9][11] =  data[200]; buffer[9][12] =  data[201]; buffer[9][13] =  data[202]; buffer[9][14] =  data[203]; buffer[9][15] =  data[204]; buffer[9][16] =  data[205]; buffer[9][17] =  data[206]; buffer[9][18] =  data[207]; buffer[9][19] =  data[208]; buffer[9][20] =  data[209];
            buffer[10][0] =  data[210]; buffer[10][1] =  data[211]; buffer[10][2] =  data[212]; buffer[10][3] =  data[213]; buffer[10][4] =  data[214]; buffer[10][5] =  data[215]; buffer[10][6] =  data[216]; buffer[10][7] =  data[217]; buffer[10][8] =  data[218]; buffer[10][9] =  data[219]; buffer[10][10] =  data[220]; buffer[10][11] =  data[221]; buffer[10][12] =  data[222]; buffer[10][13] =  data[223]; buffer[10][14] =  data[224]; buffer[10][15] =  data[225]; buffer[10][16] =  data[226]; buffer[10][17] =  data[227]; buffer[10][18] =  data[228]; buffer[10][19] =  data[229]; buffer[10][20] =  data[230];
            buffer[11][0] =  data[231]; buffer[11][1] =  data[232]; buffer[11][2] =  data[233]; buffer[11][3] =  data[234]; buffer[11][4] =  data[235]; buffer[11][5] =  data[236]; buffer[11][6] =  data[237]; buffer[11][7] =  data[238]; buffer[11][8] =  data[239]; buffer[11][9] =  data[240]; buffer[11][10] =  data[241]; buffer[11][11] =  data[242]; buffer[11][12] =  data[243]; buffer[11][13] =  data[244]; buffer[11][14] =  data[245]; buffer[11][15] =  data[246]; buffer[11][16] =  data[247]; buffer[11][17] =  data[248]; buffer[11][18] =  data[249]; buffer[11][19] =  data[250]; buffer[11][20] =  data[251];
            buffer[12][0] =  data[252]; buffer[12][1] =  data[253]; buffer[12][2] =  data[254]; buffer[12][3] =  data[255]; buffer[12][4] =  data[256]; buffer[12][5] =  data[257]; buffer[12][6] =  data[258]; buffer[12][7] =  data[259]; buffer[12][8] =  data[260]; buffer[12][9] =  data[261]; buffer[12][10] =  data[262]; buffer[12][11] =  data[263]; buffer[12][12] =  data[264]; buffer[12][13] =  data[265]; buffer[12][14] =  data[266]; buffer[12][15] =  data[267]; buffer[12][16] =  data[268]; buffer[12][17] =  data[269]; buffer[12][18] =  data[270]; buffer[12][19] =  data[271]; buffer[12][20] =  data[272];
            buffer[13][0] =  data[273]; buffer[13][1] =  data[274]; buffer[13][2] =  data[275]; buffer[13][3] =  data[276]; buffer[13][4] =  data[277]; buffer[13][5] =  data[278]; buffer[13][6] =  data[279]; buffer[13][7] =  data[280]; buffer[13][8] =  data[281]; buffer[13][9] =  data[282]; buffer[13][10] =  data[283]; buffer[13][11] =  data[284]; buffer[13][12] =  data[285]; buffer[13][13] =  data[286]; buffer[13][14] =  data[287]; buffer[13][15] =  data[288]; buffer[13][16] =  data[289]; buffer[13][17] =  data[290]; buffer[13][18] =  data[291]; buffer[13][19] =  data[292]; buffer[13][20] =  data[293];
            buffer[14][0] =  data[294]; buffer[14][1] =  data[295]; buffer[14][2] =  data[296]; buffer[14][3] =  data[297]; buffer[14][4] =  data[298]; buffer[14][5] =  data[299]; buffer[14][6] =  data[300]; buffer[14][7] =  data[301]; buffer[14][8] =  data[302]; buffer[14][9] =  data[303]; buffer[14][10] =  data[304]; buffer[14][11] =  data[305]; buffer[14][12] =  data[306]; buffer[14][13] =  data[307]; buffer[14][14] =  data[308]; buffer[14][15] =  data[309]; buffer[14][16] =  data[310]; buffer[14][17] =  data[311]; buffer[14][18] =  data[312]; buffer[14][19] =  data[313]; buffer[14][20] =  data[314];
            buffer[15][0] =  data[315]; buffer[15][1] =  data[316]; buffer[15][2] =  data[317]; buffer[15][3] =  data[318]; buffer[15][4] =  data[319]; buffer[15][5] =  data[320]; buffer[15][6] =  data[321]; buffer[15][7] =  data[322]; buffer[15][8] =  data[323]; buffer[15][9] =  data[324]; buffer[15][10] =  data[325]; buffer[15][11] =  data[326]; buffer[15][12] =  data[327]; buffer[15][13] =  data[328]; buffer[15][14] =  data[329]; buffer[15][15] =  data[330]; buffer[15][16] =  data[331]; buffer[15][17] =  data[332]; buffer[15][18] =  data[333]; buffer[15][19] =  data[334]; buffer[15][20] =  data[335];

        }
    }
};
template<class data_T, typename CONFIG_T>
class fill_buffer_42 : public nnet::FillConv1DBuffer<data_T, CONFIG_T> {
    public:
    static void fill_buffer(
        data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
        data_T buffer[CONFIG_T::n_pixels][CONFIG_T::filt_width * CONFIG_T::n_chan],
        const unsigned partition
    ) {
        if (partition ==   0) {
            buffer[0][0] =    data[0]; buffer[0][1] =    data[1]; buffer[0][2] =    data[2]; buffer[0][3] =    data[3]; buffer[0][4] =    data[4]; buffer[0][5] =    data[5]; buffer[0][6] =    data[6]; buffer[0][7] =    data[7]; buffer[0][8] =    data[8]; buffer[0][9] =    data[9];
            buffer[1][0] =   data[10]; buffer[1][1] =   data[11]; buffer[1][2] =   data[12]; buffer[1][3] =   data[13]; buffer[1][4] =   data[14]; buffer[1][5] =   data[15]; buffer[1][6] =   data[16]; buffer[1][7] =   data[17]; buffer[1][8] =   data[18]; buffer[1][9] =   data[19];
            buffer[2][0] =   data[20]; buffer[2][1] =   data[21]; buffer[2][2] =   data[22]; buffer[2][3] =   data[23]; buffer[2][4] =   data[24]; buffer[2][5] =   data[25]; buffer[2][6] =   data[26]; buffer[2][7] =   data[27]; buffer[2][8] =   data[28]; buffer[2][9] =   data[29];
            buffer[3][0] =   data[30]; buffer[3][1] =   data[31]; buffer[3][2] =   data[32]; buffer[3][3] =   data[33]; buffer[3][4] =   data[34]; buffer[3][5] =   data[35]; buffer[3][6] =   data[36]; buffer[3][7] =   data[37]; buffer[3][8] =   data[38]; buffer[3][9] =   data[39];
            buffer[4][0] =   data[40]; buffer[4][1] =   data[41]; buffer[4][2] =   data[42]; buffer[4][3] =   data[43]; buffer[4][4] =   data[44]; buffer[4][5] =   data[45]; buffer[4][6] =   data[46]; buffer[4][7] =   data[47]; buffer[4][8] =   data[48]; buffer[4][9] =   data[49];
            buffer[5][0] =   data[50]; buffer[5][1] =   data[51]; buffer[5][2] =   data[52]; buffer[5][3] =   data[53]; buffer[5][4] =   data[54]; buffer[5][5] =   data[55]; buffer[5][6] =   data[56]; buffer[5][7] =   data[57]; buffer[5][8] =   data[58]; buffer[5][9] =   data[59];
            buffer[6][0] =   data[60]; buffer[6][1] =   data[61]; buffer[6][2] =   data[62]; buffer[6][3] =   data[63]; buffer[6][4] =   data[64]; buffer[6][5] =   data[65]; buffer[6][6] =   data[66]; buffer[6][7] =   data[67]; buffer[6][8] =   data[68]; buffer[6][9] =   data[69];
            buffer[7][0] =   data[70]; buffer[7][1] =   data[71]; buffer[7][2] =   data[72]; buffer[7][3] =   data[73]; buffer[7][4] =   data[74]; buffer[7][5] =   data[75]; buffer[7][6] =   data[76]; buffer[7][7] =   data[77]; buffer[7][8] =   data[78]; buffer[7][9] =   data[79];
            buffer[8][0] =   data[80]; buffer[8][1] =   data[81]; buffer[8][2] =   data[82]; buffer[8][3] =   data[83]; buffer[8][4] =   data[84]; buffer[8][5] =   data[85]; buffer[8][6] =   data[86]; buffer[8][7] =   data[87]; buffer[8][8] =   data[88]; buffer[8][9] =   data[89];
            buffer[9][0] =   data[90]; buffer[9][1] =   data[91]; buffer[9][2] =   data[92]; buffer[9][3] =   data[93]; buffer[9][4] =   data[94]; buffer[9][5] =   data[95]; buffer[9][6] =   data[96]; buffer[9][7] =   data[97]; buffer[9][8] =   data[98]; buffer[9][9] =   data[99];
            buffer[10][0] =  data[100]; buffer[10][1] =  data[101]; buffer[10][2] =  data[102]; buffer[10][3] =  data[103]; buffer[10][4] =  data[104]; buffer[10][5] =  data[105]; buffer[10][6] =  data[106]; buffer[10][7] =  data[107]; buffer[10][8] =  data[108]; buffer[10][9] =  data[109];
            buffer[11][0] =  data[110]; buffer[11][1] =  data[111]; buffer[11][2] =  data[112]; buffer[11][3] =  data[113]; buffer[11][4] =  data[114]; buffer[11][5] =  data[115]; buffer[11][6] =  data[116]; buffer[11][7] =  data[117]; buffer[11][8] =  data[118]; buffer[11][9] =  data[119];
            buffer[12][0] =  data[120]; buffer[12][1] =  data[121]; buffer[12][2] =  data[122]; buffer[12][3] =  data[123]; buffer[12][4] =  data[124]; buffer[12][5] =  data[125]; buffer[12][6] =  data[126]; buffer[12][7] =  data[127]; buffer[12][8] =  data[128]; buffer[12][9] =  data[129];
            buffer[13][0] =  data[130]; buffer[13][1] =  data[131]; buffer[13][2] =  data[132]; buffer[13][3] =  data[133]; buffer[13][4] =  data[134]; buffer[13][5] =  data[135]; buffer[13][6] =  data[136]; buffer[13][7] =  data[137]; buffer[13][8] =  data[138]; buffer[13][9] =  data[139];
            buffer[14][0] =  data[140]; buffer[14][1] =  data[141]; buffer[14][2] =  data[142]; buffer[14][3] =  data[143]; buffer[14][4] =  data[144]; buffer[14][5] =  data[145]; buffer[14][6] =  data[146]; buffer[14][7] =  data[147]; buffer[14][8] =  data[148]; buffer[14][9] =  data[149];
            buffer[15][0] =  data[150]; buffer[15][1] =  data[151]; buffer[15][2] =  data[152]; buffer[15][3] =  data[153]; buffer[15][4] =  data[154]; buffer[15][5] =  data[155]; buffer[15][6] =  data[156]; buffer[15][7] =  data[157]; buffer[15][8] =  data[158]; buffer[15][9] =  data[159];

        }
    }
};
template<class data_T, typename CONFIG_T>
class fill_buffer_43 : public nnet::FillConv1DBuffer<data_T, CONFIG_T> {
    public:
    static void fill_buffer(
        data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
        data_T buffer[CONFIG_T::n_pixels][CONFIG_T::filt_width * CONFIG_T::n_chan],
        const unsigned partition
    ) {
        if (partition ==   0) {
            buffer[0][0] =    data[0]; buffer[0][1] =    data[1]; buffer[0][2] =    data[2]; buffer[0][3] =    data[3]; buffer[0][4] =    data[4]; buffer[0][5] =    data[5]; buffer[0][6] =    data[6]; buffer[0][7] =    data[7]; buffer[0][8] =    data[8]; buffer[0][9] =    data[9];
            buffer[1][0] =   data[10]; buffer[1][1] =   data[11]; buffer[1][2] =   data[12]; buffer[1][3] =   data[13]; buffer[1][4] =   data[14]; buffer[1][5] =   data[15]; buffer[1][6] =   data[16]; buffer[1][7] =   data[17]; buffer[1][8] =   data[18]; buffer[1][9] =   data[19];
            buffer[2][0] =   data[20]; buffer[2][1] =   data[21]; buffer[2][2] =   data[22]; buffer[2][3] =   data[23]; buffer[2][4] =   data[24]; buffer[2][5] =   data[25]; buffer[2][6] =   data[26]; buffer[2][7] =   data[27]; buffer[2][8] =   data[28]; buffer[2][9] =   data[29];
            buffer[3][0] =   data[30]; buffer[3][1] =   data[31]; buffer[3][2] =   data[32]; buffer[3][3] =   data[33]; buffer[3][4] =   data[34]; buffer[3][5] =   data[35]; buffer[3][6] =   data[36]; buffer[3][7] =   data[37]; buffer[3][8] =   data[38]; buffer[3][9] =   data[39];
            buffer[4][0] =   data[40]; buffer[4][1] =   data[41]; buffer[4][2] =   data[42]; buffer[4][3] =   data[43]; buffer[4][4] =   data[44]; buffer[4][5] =   data[45]; buffer[4][6] =   data[46]; buffer[4][7] =   data[47]; buffer[4][8] =   data[48]; buffer[4][9] =   data[49];
            buffer[5][0] =   data[50]; buffer[5][1] =   data[51]; buffer[5][2] =   data[52]; buffer[5][3] =   data[53]; buffer[5][4] =   data[54]; buffer[5][5] =   data[55]; buffer[5][6] =   data[56]; buffer[5][7] =   data[57]; buffer[5][8] =   data[58]; buffer[5][9] =   data[59];
            buffer[6][0] =   data[60]; buffer[6][1] =   data[61]; buffer[6][2] =   data[62]; buffer[6][3] =   data[63]; buffer[6][4] =   data[64]; buffer[6][5] =   data[65]; buffer[6][6] =   data[66]; buffer[6][7] =   data[67]; buffer[6][8] =   data[68]; buffer[6][9] =   data[69];
            buffer[7][0] =   data[70]; buffer[7][1] =   data[71]; buffer[7][2] =   data[72]; buffer[7][3] =   data[73]; buffer[7][4] =   data[74]; buffer[7][5] =   data[75]; buffer[7][6] =   data[76]; buffer[7][7] =   data[77]; buffer[7][8] =   data[78]; buffer[7][9] =   data[79];
            buffer[8][0] =   data[80]; buffer[8][1] =   data[81]; buffer[8][2] =   data[82]; buffer[8][3] =   data[83]; buffer[8][4] =   data[84]; buffer[8][5] =   data[85]; buffer[8][6] =   data[86]; buffer[8][7] =   data[87]; buffer[8][8] =   data[88]; buffer[8][9] =   data[89];
            buffer[9][0] =   data[90]; buffer[9][1] =   data[91]; buffer[9][2] =   data[92]; buffer[9][3] =   data[93]; buffer[9][4] =   data[94]; buffer[9][5] =   data[95]; buffer[9][6] =   data[96]; buffer[9][7] =   data[97]; buffer[9][8] =   data[98]; buffer[9][9] =   data[99];
            buffer[10][0] =  data[100]; buffer[10][1] =  data[101]; buffer[10][2] =  data[102]; buffer[10][3] =  data[103]; buffer[10][4] =  data[104]; buffer[10][5] =  data[105]; buffer[10][6] =  data[106]; buffer[10][7] =  data[107]; buffer[10][8] =  data[108]; buffer[10][9] =  data[109];
            buffer[11][0] =  data[110]; buffer[11][1] =  data[111]; buffer[11][2] =  data[112]; buffer[11][3] =  data[113]; buffer[11][4] =  data[114]; buffer[11][5] =  data[115]; buffer[11][6] =  data[116]; buffer[11][7] =  data[117]; buffer[11][8] =  data[118]; buffer[11][9] =  data[119];
            buffer[12][0] =  data[120]; buffer[12][1] =  data[121]; buffer[12][2] =  data[122]; buffer[12][3] =  data[123]; buffer[12][4] =  data[124]; buffer[12][5] =  data[125]; buffer[12][6] =  data[126]; buffer[12][7] =  data[127]; buffer[12][8] =  data[128]; buffer[12][9] =  data[129];
            buffer[13][0] =  data[130]; buffer[13][1] =  data[131]; buffer[13][2] =  data[132]; buffer[13][3] =  data[133]; buffer[13][4] =  data[134]; buffer[13][5] =  data[135]; buffer[13][6] =  data[136]; buffer[13][7] =  data[137]; buffer[13][8] =  data[138]; buffer[13][9] =  data[139];
            buffer[14][0] =  data[140]; buffer[14][1] =  data[141]; buffer[14][2] =  data[142]; buffer[14][3] =  data[143]; buffer[14][4] =  data[144]; buffer[14][5] =  data[145]; buffer[14][6] =  data[146]; buffer[14][7] =  data[147]; buffer[14][8] =  data[148]; buffer[14][9] =  data[149];
            buffer[15][0] =  data[150]; buffer[15][1] =  data[151]; buffer[15][2] =  data[152]; buffer[15][3] =  data[153]; buffer[15][4] =  data[154]; buffer[15][5] =  data[155]; buffer[15][6] =  data[156]; buffer[15][7] =  data[157]; buffer[15][8] =  data[158]; buffer[15][9] =  data[159];

        }
    }
};

} // namespace nnet

#endif
