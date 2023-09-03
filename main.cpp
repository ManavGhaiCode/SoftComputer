#include <iostream>

#include "./BaseGates.h"

class nandGate : public Gates::Gate {
    private:
        Gates::notGate not0;
        Gates::notGate not1;
        Gates::andGate and0;

    public:
        void run() override {
            not0.input = input[0];
            not1.input = input[1];

            not0.run();
            not1.run();

            and0.input[0] = not0.output;
            and0.input[0] = not1.output;

            and0.run();

            output = and0.output;
        }
};

int main() {
    nandGate nand;

    nand.input[0] = 0;
    nand.input[1] = 1;

    nand.run();

    return 0;
}