#include "../Gates/BaseGates.h"
#include "../Gates/Gates.h"

namespace Chips {
    class Adder : public Gates::CustomGate<3, 2> {
        private:
            Gates::XORGate xor0;
            Gates::XORGate xor1;
            Gates::andGate and0;
            Gates::andGate and1;
            Gates::orGate or0;

        public:
            void run() override {
                xor0.input[0] = input[0];
                xor0.input[1] = input[1];
                xor0.run();

                xor1.input[0] = xor0.output;
                xor1.input[1] = input[2];
                xor1.run();

                and0.input[0] = input[0];
                and0.input[1] = input[1];

                and1.input[0] = xor0.output;
                and1.input[1] = input[2];

                and0.run();
                and1.run();

                or0.input[0] = and0.output;
                or0.input[1] = and1.output;

                or0.run();

                output[0] = xor1.output;
                output[1] = or0.output;
            }
    };

    class Adder8Bit : public Gates::CustomGate<16, 9> {
        private:
            Adder adder0;
            Adder adder1;
            Adder adder2;
            Adder adder3;
            Adder adder4;
            Adder adder5;
            Adder adder6;
            Adder adder7;
        
        public:
            void run() {
                adder0.input[0] = input[0];
                adder0.input[1] = input[8];
                adder0.input[2] = 0;

                adder0.run();

                adder1.input[0] = input[1];
                adder1.input[1] = input[9];
                adder1.input[2] = adder0.output[1];

                adder1.run();

                adder2.input[0] = input[2];
                adder2.input[1] = input[10];
                adder2.input[2] = adder1.output[1];

                adder2.run();

                adder3.input[0] = input[3];
                adder3.input[1] = input[11];
                adder3.input[2] = adder2.output[1];

                adder3.run();

                adder4.input[0] = input[4];
                adder4.input[1] = input[12];
                adder4.input[2] = adder3.output[1];

                adder4.run();

                adder5.input[0] = input[5];
                adder5.input[1] = input[13];
                adder5.input[2] = adder4.output[1];

                adder5.run();

                adder6.input[0] = input[6];
                adder6.input[1] = input[14];
                adder6.input[2] = adder5.output[1];

                adder6.run();

                adder7.input[0] = input[7];
                adder7.input[1] = input[15];
                adder7.input[2] = adder6.output[1];

                adder7.run();

                output[0] = adder0.output[0];
                output[1] = adder1.output[0];
                output[2] = adder2.output[0];
                output[3] = adder3.output[0];
                output[4] = adder4.output[0];
                output[5] = adder5.output[0];
                output[6] = adder6.output[0];
                output[7] = adder7.output[0];

                output[8] = adder7.output[1];
            }
    };
}