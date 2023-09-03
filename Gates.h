#include "BaseGates.h"

namespace Gates {
    class nandGate : public Gates::Gate {
        private:
            Gates::notGate not0;
            Gates::andGate and0;

        public:
            void run() override {
                and0.input[0] = input[0];
                and0.input[1] = input[1];
                and0.run();

                not0.input = and0.output;
                not0.run();

                output = not0.output;
            }
    };
}