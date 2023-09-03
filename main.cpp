#include <iostream>

#include "./BaseGates.h"
#include "Gates.h"

int main() {
    Gates::nandGate nand;

    nand.input[0] = 0;
    nand.input[1] = 1;

    nand.run();

    std::cout << nand.output << std::endl;

    return 0;
}