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
        input_t _input[N_INPUT_1_1*N_INPUT_2_1];
        layer24_t _layer24_out[N_LAYER_23]; // reg out
        layer22_t _layer22_out[N_LAYER_19]; // class out
    public:


        virtual void prepare_input(std::any input) override {
            auto inputs = std::any_cast<ModelInputs>(input);
            // Basic inputs 16*20  for baseline inputs
            for (int i = 0; i < N_INPUT_1_1; ++i) { // Iterate through candidates
                for (int j = 0; j < N_INPUT_2_1; ++j) { // Iterate through features
                    _input[i*N_INPUT_2_1 + j] = input_t(inputs.candidate_inputs[i*inputs.total_candidate_inputs + j] );
                }
            }
        }

        virtual void predict()
        {
            L1TSC4NGJetModel_v2_0_0(_input, _layer22_out, _layer24_out);
            
        }

        virtual void read_result(std::any result)
        { 
            auto *results_p = std::any_cast<ModelOutputs*>(result);
            // Basic output 1 regression output
            for (int i = 0; i < N_LAYER_23; ++i ){
                results_p->jet_regression_output[i] = inputtype(_layer24_out[i]);  
            }
            // Basic output 8 class outputs
            for (int i = 0; i < N_LAYER_19; ++i ){
                results_p->jet_class_output[i] = inputtype(_layer22_out[i]);
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
