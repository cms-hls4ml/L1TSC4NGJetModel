#ifndef NNET_INSTR_GEN_H_
#define NNET_INSTR_GEN_H_

#include "nnet_helpers.h"

#include "hls_stream.h"
#include "nnet_common.h"
#include "nnet_function_stubs.h"
#include "nnet_mult.h"

namespace nnet {

// hls4ml insert code
template<class data_T, typename CONFIG_T>
class fill_buffer_25 : public FillConv1DBuffer<data_T, CONFIG_T> {
    public:
    static void fill_buffer(
        data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
        data_T buffer[CONFIG_T::n_pixels][CONFIG_T::filt_width * CONFIG_T::n_chan],
        const unsigned partition
    ) {
        if (partition ==   0) {
            buffer[0][0] =    data[0]; buffer[0][1] =    data[1]; buffer[0][2] =    data[2]; buffer[0][3] =    data[3]; buffer[0][4] =    data[4]; buffer[0][5] =    data[5]; buffer[0][6] =    data[6]; buffer[0][7] =    data[7]; buffer[0][8] =    data[8]; buffer[0][9] =    data[9]; buffer[0][10] =   data[10]; buffer[0][11] =   data[11]; buffer[0][12] =   data[12]; buffer[0][13] =   data[13]; buffer[0][14] =   data[14]; buffer[0][15] =   data[15]; buffer[0][16] =   data[16]; buffer[0][17] =   data[17]; buffer[0][18] =   data[18]; buffer[0][19] =   data[19];

        }
        if (partition ==   1) {
            buffer[0][0] =   data[20]; buffer[0][1] =   data[21]; buffer[0][2] =   data[22]; buffer[0][3] =   data[23]; buffer[0][4] =   data[24]; buffer[0][5] =   data[25]; buffer[0][6] =   data[26]; buffer[0][7] =   data[27]; buffer[0][8] =   data[28]; buffer[0][9] =   data[29]; buffer[0][10] =   data[30]; buffer[0][11] =   data[31]; buffer[0][12] =   data[32]; buffer[0][13] =   data[33]; buffer[0][14] =   data[34]; buffer[0][15] =   data[35]; buffer[0][16] =   data[36]; buffer[0][17] =   data[37]; buffer[0][18] =   data[38]; buffer[0][19] =   data[39];

        }
        if (partition ==   2) {
            buffer[0][0] =   data[40]; buffer[0][1] =   data[41]; buffer[0][2] =   data[42]; buffer[0][3] =   data[43]; buffer[0][4] =   data[44]; buffer[0][5] =   data[45]; buffer[0][6] =   data[46]; buffer[0][7] =   data[47]; buffer[0][8] =   data[48]; buffer[0][9] =   data[49]; buffer[0][10] =   data[50]; buffer[0][11] =   data[51]; buffer[0][12] =   data[52]; buffer[0][13] =   data[53]; buffer[0][14] =   data[54]; buffer[0][15] =   data[55]; buffer[0][16] =   data[56]; buffer[0][17] =   data[57]; buffer[0][18] =   data[58]; buffer[0][19] =   data[59];

        }
        if (partition ==   3) {
            buffer[0][0] =   data[60]; buffer[0][1] =   data[61]; buffer[0][2] =   data[62]; buffer[0][3] =   data[63]; buffer[0][4] =   data[64]; buffer[0][5] =   data[65]; buffer[0][6] =   data[66]; buffer[0][7] =   data[67]; buffer[0][8] =   data[68]; buffer[0][9] =   data[69]; buffer[0][10] =   data[70]; buffer[0][11] =   data[71]; buffer[0][12] =   data[72]; buffer[0][13] =   data[73]; buffer[0][14] =   data[74]; buffer[0][15] =   data[75]; buffer[0][16] =   data[76]; buffer[0][17] =   data[77]; buffer[0][18] =   data[78]; buffer[0][19] =   data[79];

        }
        if (partition ==   4) {
            buffer[0][0] =   data[80]; buffer[0][1] =   data[81]; buffer[0][2] =   data[82]; buffer[0][3] =   data[83]; buffer[0][4] =   data[84]; buffer[0][5] =   data[85]; buffer[0][6] =   data[86]; buffer[0][7] =   data[87]; buffer[0][8] =   data[88]; buffer[0][9] =   data[89]; buffer[0][10] =   data[90]; buffer[0][11] =   data[91]; buffer[0][12] =   data[92]; buffer[0][13] =   data[93]; buffer[0][14] =   data[94]; buffer[0][15] =   data[95]; buffer[0][16] =   data[96]; buffer[0][17] =   data[97]; buffer[0][18] =   data[98]; buffer[0][19] =   data[99];

        }
        if (partition ==   5) {
            buffer[0][0] =  data[100]; buffer[0][1] =  data[101]; buffer[0][2] =  data[102]; buffer[0][3] =  data[103]; buffer[0][4] =  data[104]; buffer[0][5] =  data[105]; buffer[0][6] =  data[106]; buffer[0][7] =  data[107]; buffer[0][8] =  data[108]; buffer[0][9] =  data[109]; buffer[0][10] =  data[110]; buffer[0][11] =  data[111]; buffer[0][12] =  data[112]; buffer[0][13] =  data[113]; buffer[0][14] =  data[114]; buffer[0][15] =  data[115]; buffer[0][16] =  data[116]; buffer[0][17] =  data[117]; buffer[0][18] =  data[118]; buffer[0][19] =  data[119];

        }
        if (partition ==   6) {
            buffer[0][0] =  data[120]; buffer[0][1] =  data[121]; buffer[0][2] =  data[122]; buffer[0][3] =  data[123]; buffer[0][4] =  data[124]; buffer[0][5] =  data[125]; buffer[0][6] =  data[126]; buffer[0][7] =  data[127]; buffer[0][8] =  data[128]; buffer[0][9] =  data[129]; buffer[0][10] =  data[130]; buffer[0][11] =  data[131]; buffer[0][12] =  data[132]; buffer[0][13] =  data[133]; buffer[0][14] =  data[134]; buffer[0][15] =  data[135]; buffer[0][16] =  data[136]; buffer[0][17] =  data[137]; buffer[0][18] =  data[138]; buffer[0][19] =  data[139];

        }
        if (partition ==   7) {
            buffer[0][0] =  data[140]; buffer[0][1] =  data[141]; buffer[0][2] =  data[142]; buffer[0][3] =  data[143]; buffer[0][4] =  data[144]; buffer[0][5] =  data[145]; buffer[0][6] =  data[146]; buffer[0][7] =  data[147]; buffer[0][8] =  data[148]; buffer[0][9] =  data[149]; buffer[0][10] =  data[150]; buffer[0][11] =  data[151]; buffer[0][12] =  data[152]; buffer[0][13] =  data[153]; buffer[0][14] =  data[154]; buffer[0][15] =  data[155]; buffer[0][16] =  data[156]; buffer[0][17] =  data[157]; buffer[0][18] =  data[158]; buffer[0][19] =  data[159];

        }
        if (partition ==   8) {
            buffer[0][0] =  data[160]; buffer[0][1] =  data[161]; buffer[0][2] =  data[162]; buffer[0][3] =  data[163]; buffer[0][4] =  data[164]; buffer[0][5] =  data[165]; buffer[0][6] =  data[166]; buffer[0][7] =  data[167]; buffer[0][8] =  data[168]; buffer[0][9] =  data[169]; buffer[0][10] =  data[170]; buffer[0][11] =  data[171]; buffer[0][12] =  data[172]; buffer[0][13] =  data[173]; buffer[0][14] =  data[174]; buffer[0][15] =  data[175]; buffer[0][16] =  data[176]; buffer[0][17] =  data[177]; buffer[0][18] =  data[178]; buffer[0][19] =  data[179];

        }
        if (partition ==   9) {
            buffer[0][0] =  data[180]; buffer[0][1] =  data[181]; buffer[0][2] =  data[182]; buffer[0][3] =  data[183]; buffer[0][4] =  data[184]; buffer[0][5] =  data[185]; buffer[0][6] =  data[186]; buffer[0][7] =  data[187]; buffer[0][8] =  data[188]; buffer[0][9] =  data[189]; buffer[0][10] =  data[190]; buffer[0][11] =  data[191]; buffer[0][12] =  data[192]; buffer[0][13] =  data[193]; buffer[0][14] =  data[194]; buffer[0][15] =  data[195]; buffer[0][16] =  data[196]; buffer[0][17] =  data[197]; buffer[0][18] =  data[198]; buffer[0][19] =  data[199];

        }
        if (partition ==  10) {
            buffer[0][0] =  data[200]; buffer[0][1] =  data[201]; buffer[0][2] =  data[202]; buffer[0][3] =  data[203]; buffer[0][4] =  data[204]; buffer[0][5] =  data[205]; buffer[0][6] =  data[206]; buffer[0][7] =  data[207]; buffer[0][8] =  data[208]; buffer[0][9] =  data[209]; buffer[0][10] =  data[210]; buffer[0][11] =  data[211]; buffer[0][12] =  data[212]; buffer[0][13] =  data[213]; buffer[0][14] =  data[214]; buffer[0][15] =  data[215]; buffer[0][16] =  data[216]; buffer[0][17] =  data[217]; buffer[0][18] =  data[218]; buffer[0][19] =  data[219];

        }
        if (partition ==  11) {
            buffer[0][0] =  data[220]; buffer[0][1] =  data[221]; buffer[0][2] =  data[222]; buffer[0][3] =  data[223]; buffer[0][4] =  data[224]; buffer[0][5] =  data[225]; buffer[0][6] =  data[226]; buffer[0][7] =  data[227]; buffer[0][8] =  data[228]; buffer[0][9] =  data[229]; buffer[0][10] =  data[230]; buffer[0][11] =  data[231]; buffer[0][12] =  data[232]; buffer[0][13] =  data[233]; buffer[0][14] =  data[234]; buffer[0][15] =  data[235]; buffer[0][16] =  data[236]; buffer[0][17] =  data[237]; buffer[0][18] =  data[238]; buffer[0][19] =  data[239];

        }
        if (partition ==  12) {
            buffer[0][0] =  data[240]; buffer[0][1] =  data[241]; buffer[0][2] =  data[242]; buffer[0][3] =  data[243]; buffer[0][4] =  data[244]; buffer[0][5] =  data[245]; buffer[0][6] =  data[246]; buffer[0][7] =  data[247]; buffer[0][8] =  data[248]; buffer[0][9] =  data[249]; buffer[0][10] =  data[250]; buffer[0][11] =  data[251]; buffer[0][12] =  data[252]; buffer[0][13] =  data[253]; buffer[0][14] =  data[254]; buffer[0][15] =  data[255]; buffer[0][16] =  data[256]; buffer[0][17] =  data[257]; buffer[0][18] =  data[258]; buffer[0][19] =  data[259];

        }
        if (partition ==  13) {
            buffer[0][0] =  data[260]; buffer[0][1] =  data[261]; buffer[0][2] =  data[262]; buffer[0][3] =  data[263]; buffer[0][4] =  data[264]; buffer[0][5] =  data[265]; buffer[0][6] =  data[266]; buffer[0][7] =  data[267]; buffer[0][8] =  data[268]; buffer[0][9] =  data[269]; buffer[0][10] =  data[270]; buffer[0][11] =  data[271]; buffer[0][12] =  data[272]; buffer[0][13] =  data[273]; buffer[0][14] =  data[274]; buffer[0][15] =  data[275]; buffer[0][16] =  data[276]; buffer[0][17] =  data[277]; buffer[0][18] =  data[278]; buffer[0][19] =  data[279];

        }
        if (partition ==  14) {
            buffer[0][0] =  data[280]; buffer[0][1] =  data[281]; buffer[0][2] =  data[282]; buffer[0][3] =  data[283]; buffer[0][4] =  data[284]; buffer[0][5] =  data[285]; buffer[0][6] =  data[286]; buffer[0][7] =  data[287]; buffer[0][8] =  data[288]; buffer[0][9] =  data[289]; buffer[0][10] =  data[290]; buffer[0][11] =  data[291]; buffer[0][12] =  data[292]; buffer[0][13] =  data[293]; buffer[0][14] =  data[294]; buffer[0][15] =  data[295]; buffer[0][16] =  data[296]; buffer[0][17] =  data[297]; buffer[0][18] =  data[298]; buffer[0][19] =  data[299];

        }
        if (partition ==  15) {
            buffer[0][0] =  data[300]; buffer[0][1] =  data[301]; buffer[0][2] =  data[302]; buffer[0][3] =  data[303]; buffer[0][4] =  data[304]; buffer[0][5] =  data[305]; buffer[0][6] =  data[306]; buffer[0][7] =  data[307]; buffer[0][8] =  data[308]; buffer[0][9] =  data[309]; buffer[0][10] =  data[310]; buffer[0][11] =  data[311]; buffer[0][12] =  data[312]; buffer[0][13] =  data[313]; buffer[0][14] =  data[314]; buffer[0][15] =  data[315]; buffer[0][16] =  data[316]; buffer[0][17] =  data[317]; buffer[0][18] =  data[318]; buffer[0][19] =  data[319];

        }
    }
};
template<class data_T, typename CONFIG_T>
class fill_buffer_26 : public FillConv1DBuffer<data_T, CONFIG_T> {
    public:
    static void fill_buffer(
        data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
        data_T buffer[CONFIG_T::n_pixels][CONFIG_T::filt_width * CONFIG_T::n_chan],
        const unsigned partition
    ) {
        if (partition ==   0) {
            buffer[0][0] =    data[0]; buffer[0][1] =    data[1]; buffer[0][2] =    data[2]; buffer[0][3] =    data[3]; buffer[0][4] =    data[4]; buffer[0][5] =    data[5]; buffer[0][6] =    data[6]; buffer[0][7] =    data[7]; buffer[0][8] =    data[8]; buffer[0][9] =    data[9];

        }
        if (partition ==   1) {
            buffer[0][0] =   data[10]; buffer[0][1] =   data[11]; buffer[0][2] =   data[12]; buffer[0][3] =   data[13]; buffer[0][4] =   data[14]; buffer[0][5] =   data[15]; buffer[0][6] =   data[16]; buffer[0][7] =   data[17]; buffer[0][8] =   data[18]; buffer[0][9] =   data[19];

        }
        if (partition ==   2) {
            buffer[0][0] =   data[20]; buffer[0][1] =   data[21]; buffer[0][2] =   data[22]; buffer[0][3] =   data[23]; buffer[0][4] =   data[24]; buffer[0][5] =   data[25]; buffer[0][6] =   data[26]; buffer[0][7] =   data[27]; buffer[0][8] =   data[28]; buffer[0][9] =   data[29];

        }
        if (partition ==   3) {
            buffer[0][0] =   data[30]; buffer[0][1] =   data[31]; buffer[0][2] =   data[32]; buffer[0][3] =   data[33]; buffer[0][4] =   data[34]; buffer[0][5] =   data[35]; buffer[0][6] =   data[36]; buffer[0][7] =   data[37]; buffer[0][8] =   data[38]; buffer[0][9] =   data[39];

        }
        if (partition ==   4) {
            buffer[0][0] =   data[40]; buffer[0][1] =   data[41]; buffer[0][2] =   data[42]; buffer[0][3] =   data[43]; buffer[0][4] =   data[44]; buffer[0][5] =   data[45]; buffer[0][6] =   data[46]; buffer[0][7] =   data[47]; buffer[0][8] =   data[48]; buffer[0][9] =   data[49];

        }
        if (partition ==   5) {
            buffer[0][0] =   data[50]; buffer[0][1] =   data[51]; buffer[0][2] =   data[52]; buffer[0][3] =   data[53]; buffer[0][4] =   data[54]; buffer[0][5] =   data[55]; buffer[0][6] =   data[56]; buffer[0][7] =   data[57]; buffer[0][8] =   data[58]; buffer[0][9] =   data[59];

        }
        if (partition ==   6) {
            buffer[0][0] =   data[60]; buffer[0][1] =   data[61]; buffer[0][2] =   data[62]; buffer[0][3] =   data[63]; buffer[0][4] =   data[64]; buffer[0][5] =   data[65]; buffer[0][6] =   data[66]; buffer[0][7] =   data[67]; buffer[0][8] =   data[68]; buffer[0][9] =   data[69];

        }
        if (partition ==   7) {
            buffer[0][0] =   data[70]; buffer[0][1] =   data[71]; buffer[0][2] =   data[72]; buffer[0][3] =   data[73]; buffer[0][4] =   data[74]; buffer[0][5] =   data[75]; buffer[0][6] =   data[76]; buffer[0][7] =   data[77]; buffer[0][8] =   data[78]; buffer[0][9] =   data[79];

        }
        if (partition ==   8) {
            buffer[0][0] =   data[80]; buffer[0][1] =   data[81]; buffer[0][2] =   data[82]; buffer[0][3] =   data[83]; buffer[0][4] =   data[84]; buffer[0][5] =   data[85]; buffer[0][6] =   data[86]; buffer[0][7] =   data[87]; buffer[0][8] =   data[88]; buffer[0][9] =   data[89];

        }
        if (partition ==   9) {
            buffer[0][0] =   data[90]; buffer[0][1] =   data[91]; buffer[0][2] =   data[92]; buffer[0][3] =   data[93]; buffer[0][4] =   data[94]; buffer[0][5] =   data[95]; buffer[0][6] =   data[96]; buffer[0][7] =   data[97]; buffer[0][8] =   data[98]; buffer[0][9] =   data[99];

        }
        if (partition ==  10) {
            buffer[0][0] =  data[100]; buffer[0][1] =  data[101]; buffer[0][2] =  data[102]; buffer[0][3] =  data[103]; buffer[0][4] =  data[104]; buffer[0][5] =  data[105]; buffer[0][6] =  data[106]; buffer[0][7] =  data[107]; buffer[0][8] =  data[108]; buffer[0][9] =  data[109];

        }
        if (partition ==  11) {
            buffer[0][0] =  data[110]; buffer[0][1] =  data[111]; buffer[0][2] =  data[112]; buffer[0][3] =  data[113]; buffer[0][4] =  data[114]; buffer[0][5] =  data[115]; buffer[0][6] =  data[116]; buffer[0][7] =  data[117]; buffer[0][8] =  data[118]; buffer[0][9] =  data[119];

        }
        if (partition ==  12) {
            buffer[0][0] =  data[120]; buffer[0][1] =  data[121]; buffer[0][2] =  data[122]; buffer[0][3] =  data[123]; buffer[0][4] =  data[124]; buffer[0][5] =  data[125]; buffer[0][6] =  data[126]; buffer[0][7] =  data[127]; buffer[0][8] =  data[128]; buffer[0][9] =  data[129];

        }
        if (partition ==  13) {
            buffer[0][0] =  data[130]; buffer[0][1] =  data[131]; buffer[0][2] =  data[132]; buffer[0][3] =  data[133]; buffer[0][4] =  data[134]; buffer[0][5] =  data[135]; buffer[0][6] =  data[136]; buffer[0][7] =  data[137]; buffer[0][8] =  data[138]; buffer[0][9] =  data[139];

        }
        if (partition ==  14) {
            buffer[0][0] =  data[140]; buffer[0][1] =  data[141]; buffer[0][2] =  data[142]; buffer[0][3] =  data[143]; buffer[0][4] =  data[144]; buffer[0][5] =  data[145]; buffer[0][6] =  data[146]; buffer[0][7] =  data[147]; buffer[0][8] =  data[148]; buffer[0][9] =  data[149];

        }
        if (partition ==  15) {
            buffer[0][0] =  data[150]; buffer[0][1] =  data[151]; buffer[0][2] =  data[152]; buffer[0][3] =  data[153]; buffer[0][4] =  data[154]; buffer[0][5] =  data[155]; buffer[0][6] =  data[156]; buffer[0][7] =  data[157]; buffer[0][8] =  data[158]; buffer[0][9] =  data[159];

        }
    }
};

} // namespace nnet

#endif
