#include "NN/L1TSC4NGJetModel_v2_1_0.h" //include of the top level of HLS model
#include "emulator.h" //include of emulator modeling
#include "NN/nnet_utils/nnet_common.h"
#include <any>
#include <array>
#include <utility>
#include "ap_fixed.h"
#include "ap_int.h"

using namespace hls4ml_L1TSC4NGJetModel_v2_1_0;

typedef ap_fixed<64, 32,AP_RND,AP_SAT,0> inputtype;

struct ModelInputs {
    inputtype* candidate_inputs;
    inputtype* jet_inputs;
    int total_candidate_inputs;
    int total_jet_inputs;
};

struct ModelOutputs {
    inputtype* jet_class_output;
    inputtype* jet_regression_output;
};

class L1TSC4NGJetModel_emulator_v2_1_0 : public hls4mlEmulator::Model{
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
            // Basic inputs 16*20  for baseline inputs
            for (int i = 0; i < 16; ++i) { // Iterate through candidates
                for (int j = 0; j < 21; ++j) { // Iterate through features
                    _input_basic[i*N_INPUT_2_1 + j] = input_t(inputs.candidate_inputs[i*inputs.total_candidate_inputs + j] );
                }
            }

            // Fraction inputs
            for (int i = 0; i < 16; ++i) { // Iterate through features
                _input_fractions[i] = input32_t(inputs.candidate_inputs[1 + inputs.total_candidate_inputs*i]);
            }

            // Mask inputs
            for (int i = 0; i < 16; ++i) { // Iterate through features
                _input_mask[i] = input12_t(inputs.candidate_inputs[16 + inputs.total_candidate_inputs*i]);
            }

            // Jet features
            for (int i = 0; i < 2; ++i) { // Iterate through jet features
                _input_jets[i] = input14_t(inputs.jet_inputs[i]);
            }

        virtual void predict()
        {
            L1TSC4NGJetModel_v2_1_0(_input_basic, _input_fractions, _input_mask, _input_jets, _layer39_out, _layer40_out);

        }

        virtual void read_result(std::any result)
        {
            auto *results_p = std::any_cast<ModelOutputs*>(result);
            // Basic output 1 regression output
            for (int i = 0; i < 1; ++i ){
                results_p->jet_regression_output[i] = inputtype(_layer40_out[i]);
            }
            // Basic output 8 class outputs
            for (int i = 0; i < 9; ++i ){
                results_p->jet_class_output[i] = inputtype(_layer39_out[i]);
            }
        }

};

extern "C" hls4mlEmulator::Model* create_model()
{
    return new L1TSC4NGJetModel_emulator_v2_1_0;
}

extern "C" void destroy_model(hls4mlEmulator::Model* m)
{
    delete m;
}
