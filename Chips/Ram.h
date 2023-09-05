#include "../Gates/BaseGates.h"
#include "../Gates/Gates.h"

namespace Chips {
    class SRLatch : public Gates::Gate {
        private:
            Gates::orGate or0;
            Gates::notGate not0;
            Gates::andGate and0;

        public:
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

    class DLatch : public Gates::Gate {
        private:
            Gates::andGate and0;
            Gates::andGate and1;
            Gates::notGate not0;


            SRLatch srl0;

        public:
            void run() override {
                not0.input = input[0];
                not0.run();

                and0.input[0] = input[0];
                and0.input[1] = input[1];

                and1.input[0] = not0.output;
                and1.input[1] = input[1];

                and0.run();
                and1.run();

                srl0.input[0] = and0.output;
                srl0.input[1] = and1.output;
                srl0.run();

                output = srl0.output;
            }

    };
}