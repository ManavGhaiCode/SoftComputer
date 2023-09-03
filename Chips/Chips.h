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
            void run() {
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
}