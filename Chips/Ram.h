#include "../Gates/BaseGates.h"
#include "../Gates/Gates.h"

namespace Chips {
    class SRLatch : Gates::Gate {
        private:
            Gates::orGate or0;
            Gates::notGate not0;
            Gates::andGate and0;

        private:
            void run() override {
                or0.output = 0;
                and0.output = 0;
                not0.output = 0;

                or0.input[0] = input[0];
                or0.input[1] = and0.output;
                or0.run();

                not0.input = input[1];
                not0.run();

                and0.input[0] = or0.output;
                and0.input[1] = not0.output;
                and0.run();

                output = and0.output;
            }
    };
}