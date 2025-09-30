#include "NN/L1TSC4NGJetModel_test.h" //include of the top level of HLS model
#include "emulator.h" //include of emulator modeling
#include "NN/nnet_utils/nnet_common.h"
#include <any>
#include <array>
#include <utility>
#include "ap_fixed.h"
#include "ap_int.h"

using namespace hls4ml_L1TSC4NGJetModel_test;

class L1TSC4NGJetModel_emulator_test : public hls4mlEmulator::Model{
    private:
        input_t _input[N_INPUT_1_1*N_INPUT_2_1];
        layer24_t _layer24_out[N_LAYER_20]; // reg out
        layer25_t _layer25_out[N_LAYER_22]; // class out
    public:


        virtual void prepare_input(std::any input)
        {
            input_t* input_p = std::any_cast<input_t*>(input);
            for(int i = 0; i < N_INPUT_1_1*N_INPUT_2_1; ++i){
                _input[i] = std::any_cast<input_t>(input_p[i]);
            }
        }



        virtual void predict()
        {
            L1TSC4NGJetModel_test(_input, _layer25_out, _layer24_out);
            
        }

        virtual void read_result(std::any result)
        { 
            std::pair<std::array<layer24_t,N_LAYER_20>,std::array<layer25_t,N_LAYER_22>> *result_p = std::any_cast<std::pair<std::array<layer24_t,N_LAYER_20>,std::array<layer25_t,N_LAYER_22>>*>(result);
            for (int i = 0; i < N_LAYER_20; ++i ){
                result_p->first[i] = _layer24_out[i];  
            }
            for (int i = 0; i < N_LAYER_22; ++i ){
                result_p->second[i] = _layer25_out[i];
            }
        }

};

extern "C" hls4mlEmulator::Model* create_model()
{
    return new L1TSC4NGJetModel_emulator_test;
}

extern "C" void destroy_model(hls4mlEmulator::Model* m)
{
    delete m;
}
