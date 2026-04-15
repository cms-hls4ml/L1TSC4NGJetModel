#include "NN/L1TSC4NGJetModel.h" //include of the top level of HLS model
#include "emulator.h" //include of emulator modeling
#include "NN/nnet_utils/nnet_common.h"
#include <any>
#include <array>
#include <codecvt>
#include <iostream>
#include <utility>
#include "ap_fixed.h"
#include "ap_int.h"

using namespace hls4ml_L1TSC4NGJetModel;

struct ModelInputs {
    input_t* basic_input;
    input32_t* constituent_fraction;
    input12_t* jet_features;
    input14_t* pt_mask;
};

class L1TSC4NGJetModel_emulator : public hls4mlEmulator::Model{
    private:
        input_t _input0[16*21];
        input32_t _input1[16];
        input12_t _input2[2];
        input14_t _input3[16];
        layer39_t _layer39_out[9]; // class out
        layer40_t _layer40_out[1]; // reg out
    public:

        virtual void prepare_input(std::any input) override {
            auto inputs = std::any_cast<ModelInputs>(input);

            // Input NN
            for (int i = 0; i < 16*21; ++i) {
                _input0[i] = inputs.basic_input[i];
            }

            // Constituent Fraction
            for (int i = 0; i < 16; ++i) {
                _input1[i] = inputs.constituent_fraction[i];
            }

            // Jet Features
            for (int i = 0; i < 2; ++i) {
                _input2[i] = inputs.jet_features[i];
            }

            // Pt Mask
            for (int i = 0; i < 16; ++i) {
                _input3[i] = inputs.pt_mask[i];
            }
        }

        virtual void predict()
        {
            L1TSC4NGJetModel(_input0, _input1, _input2, _input3, _layer39_out, _layer40_out);
        }

        virtual void read_result(std::any result)
        {
            std::pair<std::array<layer40_t,1>,std::array<layer39_t,9>> *result_p = std::any_cast<std::pair<std::array<layer40_t,1>,std::array<layer39_t,9>>*>(result);
            for (int i = 0; i < 1; ++i ){
                result_p->first[i] = _layer40_out[i];
            }
            for (int i = 0; i < 9; ++i ){
                result_p->second[i] = _layer39_out[i];
            }
        }

};

extern "C" hls4mlEmulator::Model* create_model()
{
    return new L1TSC4NGJetModel_emulator;
}

extern "C" void destroy_model(hls4mlEmulator::Model* m)
{
    delete m;
}
