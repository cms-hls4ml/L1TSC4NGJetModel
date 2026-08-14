#include "NN/L1TSC4NGJetModel_v2_0_0.h" //include of the top level of HLS model
#include "emulator.h" //include of emulator modeling
#include "NN/nnet_utils/nnet_common.h"
#include <any>
#include <array>
#include <utility>
#include "ap_fixed.h"
#include "ap_int.h"

using namespace hls4ml_L1TSC4NGJetModel_v2_0_0;

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

class L1TSC4NGJetModel_emulator_v2_0_0 : public hls4mlEmulator::Model{
    private:
        input_t basic_input[16*21];
        input32_t constituent_fraction[16];
        input12_t jet_features[2];
        input14_t pt_mask[16];
        layer39_t class_out[9]; // class out
        layer40_t reg_out[1]; // reg out
    public:


        virtual void prepare_input(std::any input) override {
            auto inputs = std::any_cast<ModelInputs>(input);
            // Basic inputs 16*20  for baseline inputs
            for (int i = 0; i < 16; ++i) { // Iterate through candidates
                for (int j = 0; j < 21; ++j) { // Iterate through features
                    basic_input[i*21 + j] = input_t(inputs.candidate_inputs[i*inputs.total_candidate_inputs + j] );
                }
            }

            // Fraction inputs
            for (int i = 0; i < 16; ++i) { // Iterate through features
                constituent_fraction[i] = input32_t(inputs.candidate_inputs[1 + inputs.total_candidate_inputs*i]);
            }

            // Mask inputs
            for (int i = 0; i < 16; ++i) { // Iterate through features
                pt_mask[i] = input14_t(inputs.candidate_inputs[16 + inputs.total_candidate_inputs*i]);
            }

            // Jet features
            for (int i = 0; i < 2; ++i) { // Iterate through jet features
                jet_features[i] = input12_t(inputs.jet_inputs[i]);
            }
        }

        virtual void predict()
        {
            L1TSC4NGJetModel_v2_0_0(basic_input, constituent_fraction, jet_features, pt_mask, class_out, reg_out);

        }

        virtual void read_result(std::any result)
        {
            auto *results_p = std::any_cast<ModelOutputs*>(result);
            // Basic output 1 regression output
            for (int i = 0; i < 1; ++i ){
                results_p->jet_regression_output[i] = inputtype(reg_out[i]);
            }
            // Basic output 8 class outputs
            for (int i = 0; i < 9; ++i ){
                results_p->jet_class_output[i] = inputtype(class_out[i]);
            }
        }

};

extern "C" hls4mlEmulator::Model* create_model()
{
    return new L1TSC4NGJetModel_emulator_v2_0_0;
}

extern "C" void destroy_model(hls4mlEmulator::Model* m)
{
    delete m;
}
