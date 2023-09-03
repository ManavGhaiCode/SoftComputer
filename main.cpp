#include <iostream>

#include "./BaseGates.h"
#include "Gates.h"

int main() {
    Gates::XORGate xor0;

    xor0.input[0] = 0;
    xor0.input[1] = 0;

    xor0.run();

    std::cout << xor0.output << std::endl;

    return 0;
}