#include <iostream>

#include "./Chips/Chips.h"

int main() {
    Chips::Adder adder0;

    adder0.input[0] = 1;
    adder0.input[1] = 1;
    adder0.input[2] = 1;

    adder0.run();

    std::cout << adder0.output[0] << std::endl;
    std::cout << adder0.output[1] << std::endl;

    return 0;
}