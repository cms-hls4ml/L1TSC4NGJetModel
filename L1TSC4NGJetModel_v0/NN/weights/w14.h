//Numpy array shape [32, 16]
//Min -3.562500000000
//Max 3.984375000000
//Number of zeros 51

#ifndef W14_H_
#define W14_H_

namespace hls4ml_L1TSC4NGJetModel_v0 {
#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
weight14_t w14[512];
#else
weight14_t w14[512] = {-0.250000, 0.109375, -0.093750, -0.046875, -0.078125, -0.250000, 0.062500, -0.062500, -0.046875, -0.218750, -0.078125, -0.031250, -0.109375, -0.046875, 0.140625, 0.203125, 0.515625, -0.312500, -0.234375, 0.125000, 0.203125, 0.625000, 0.109375, -0.109375, -0.250000, -0.078125, -1.031250, 0.125000, 0.000000, 1.671875, -0.109375, 0.156250, 0.281250, 0.000000, -0.250000, -0.125000, 0.234375, 0.125000, -0.062500, 0.093750, -0.265625, 0.187500, -0.078125, 0.078125, -0.171875, -0.250000, 0.125000, 0.187500, -0.640625, -0.046875, 0.421875, 0.250000, -0.328125, -0.968750, -0.187500, 0.203125, -0.359375, -0.203125, 1.234375, -0.078125, -0.140625, 1.796875, -0.140625, 0.000000, 1.500000, -0.156250, 1.062500, -0.062500, 0.296875, 0.890625, -0.765625, 0.078125, -0.187500, -0.312500, -1.062500, -0.187500, -0.234375, 0.171875, 0.000000, 0.000000, 0.000000, 0.125000, 0.000000, 0.078125, -0.562500, -0.109375, 0.484375, -0.140625, 0.203125, 0.046875, 0.796875, 0.156250, 0.109375, 1.781250, 0.000000, -0.671875, 0.000000, -0.125000, -0.328125, -0.140625, 0.000000, 0.000000, 0.187500, 0.203125, -0.093750, 0.078125, 2.171875, -0.234375, 0.109375, -1.000000, -0.031250, -0.359375, 0.203125, -0.046875, -0.578125, 0.000000, -0.140625, -0.984375, 0.171875, -0.187500, 0.000000, 0.062500, -0.390625, -0.171875, 0.281250, 0.265625, 0.375000, -0.500000, -0.031250, -0.015625, -2.937500, -0.218750, 0.312500, 0.375000, 0.281250, 0.187500, 0.093750, 0.140625, 0.218750, -0.156250, 0.062500, 0.187500, 0.000000, 0.000000, 0.000000, -0.171875, 1.109375, -0.156250, 0.000000, -0.218750, -1.140625, -0.359375, 0.187500, 0.000000, 1.562500, -0.218750, 0.281250, 0.531250, 0.000000, 0.640625, 0.218750, -0.281250, -0.046875, 0.046875, 0.250000, 0.156250, 0.187500, 0.078125, 0.000000, 0.171875, 0.203125, 0.203125, 0.125000, 0.000000, -0.281250, -0.093750, -0.187500, 0.203125, 0.546875, -0.203125, 0.000000, 0.265625, 0.000000, -0.140625, -0.250000, -0.312500, -0.421875, 0.109375, -0.093750, 0.250000, 0.703125, 0.593750, -1.750000, -0.093750, 1.203125, 0.187500, 0.984375, -0.671875, -0.468750, 0.250000, 0.109375, -0.265625, 1.125000, 0.046875, -0.156250, 0.421875, -0.687500, 0.000000, 0.703125, -0.343750, -0.859375, -0.171875, -0.593750, 0.437500, 0.000000, 0.078125, -0.156250, -0.078125, 0.031250, 0.203125, 0.281250, -1.390625, 0.265625, 0.000000, 2.312500, -0.187500, -1.625000, -0.218750, -1.218750, 0.046875, 0.000000, 0.000000, 0.218750, 0.250000, 0.281250, -0.218750, 0.000000, 0.000000, -0.734375, -0.312500, 0.562500, -0.343750, 0.000000, -0.031250, -0.031250, 0.234375, 0.687500, -0.343750, 0.093750, 0.265625, -0.625000, -0.187500, 0.125000, 0.000000, 0.093750, 0.781250, 0.390625, 0.250000, -2.281250, 0.140625, 0.859375, 0.265625, 0.000000, 0.031250, 0.234375, 0.031250, -0.781250, 0.171875, 0.125000, -0.484375, -0.953125, -1.359375, 0.296875, -0.062500, -0.343750, -0.171875, 0.812500, 1.593750, 0.328125, 0.078125, -0.187500, -0.312500, -1.593750, 0.250000, 0.250000, -1.281250, 0.500000, 0.265625, -0.468750, -0.046875, 0.375000, -0.140625, 0.296875, -0.562500, -0.515625, -0.156250, -0.187500, -0.203125, 2.062500, -0.140625, 0.359375, -0.859375, -0.562500, 0.390625, -0.515625, 0.171875, -0.890625, -0.046875, 0.687500, 0.000000, 0.875000, 0.109375, -0.203125, 0.140625, 0.921875, -0.171875, -0.046875, -0.906250, 1.750000, -2.687500, -0.281250, -0.312500, 0.000000, 0.000000, -0.359375, -0.515625, 0.765625, -0.171875, -0.296875, 0.000000, 0.312500, -0.156250, 0.203125, 0.000000, -0.453125, -0.375000, -0.265625, -0.031250, 0.156250, 0.031250, 0.140625, -0.265625, 0.000000, -0.250000, -0.296875, -0.281250, 0.171875, -0.140625, 0.265625, -0.187500, -0.171875, 0.031250, -0.359375, -0.328125, 0.671875, -0.171875, 0.281250, -0.359375, -0.984375, 0.156250, 0.078125, 0.078125, 0.609375, -0.156250, 0.281250, -0.468750, 0.421875, 0.078125, 0.000000, -0.109375, 0.234375, -0.093750, -0.296875, 0.187500, -0.093750, 0.000000, 0.187500, 0.156250, -0.125000, 0.062500, -0.093750, 0.203125, 0.140625, -0.203125, 0.953125, -0.218750, 0.328125, -0.281250, -0.734375, -0.328125, 0.656250, 0.140625, 0.062500, -0.312500, -0.625000, 0.125000, 0.187500, 0.640625, 0.750000, 0.484375, 0.000000, 0.093750, 0.640625, -0.109375, 0.593750, -0.828125, -0.562500, -0.031250, -0.234375, 0.093750, 0.953125, -0.156250, 0.234375, -0.750000, 0.000000, 1.218750, -0.828125, 0.031250, 0.640625, 0.109375, 0.328125, -0.171875, -0.312500, -0.125000, -0.312500, -0.265625, 0.343750, -0.125000, 0.343750, 0.687500, 0.265625, 0.296875, 0.125000, 0.203125, -0.031250, 0.250000, 0.125000, 0.046875, 0.125000, 0.250000, -0.093750, 0.109375, 0.000000, 0.000000, 0.125000, -0.218750, 0.140625, -0.062500, 0.000000, 0.218750, -0.281250, -0.234375, -0.031250, -0.796875, 0.437500, -0.296875, 0.296875, -0.140625, 3.984375, 0.156250, 0.000000, 0.000000, -0.984375, -0.265625, -0.234375, -0.234375, 1.890625, 0.265625, -0.109375, 0.453125, 0.250000, -0.312500, -0.093750, -0.265625, -1.437500, -0.234375, -0.234375, -3.562500, -0.328125, 1.140625, 0.921875, 0.093750, -0.234375, -0.109375, 0.703125, -0.765625, 0.000000, 0.140625, 0.109375, -0.265625, 0.234375, -0.093750, 0.375000, -0.515625, -0.375000, -0.328125, -0.296875, 0.000000, -0.859375, -0.250000, -0.375000, 0.484375, 0.703125, 0.078125, 0.031250, -0.281250, -0.125000, 0.000000, 0.296875, -0.734375, 1.031250, -0.046875};

#endif

#endif
}
