#include <iostream>

#include "./BaseGates.h"
#include "Gates.h"

int main() {
    Gates::orGate or0;

    or0.input[0] = 0;
    or0.input[1] = 1;

    or0.run();

    std::cout << or0.output << std::endl;

    return 0;
}