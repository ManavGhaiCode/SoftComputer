#include <iostream>

#include "./Chips/Chips.h"

int main() {
    Chips::Adder8Bit adder0;

    adder0.input[0] = 1;
    adder0.input[1] = 0;
    adder0.input[2] = 1;
    adder0.input[3] = 0;
    adder0.input[4] = 0;
    adder0.input[5] = 0;
    adder0.input[6] = 0;
    adder0.input[7] = 0;

    adder0.input[8] = 1;
    adder0.input[9] = 1;
    adder0.input[10] = 1;
    adder0.input[11] = 1;
    adder0.input[12] = 0;
    adder0.input[13] = 0;
    adder0.input[14] = 0;
    adder0.input[15] = 0;


    adder0.run();

    std::cout << adder0.output[7] << std::endl;
    std::cout << adder0.output[6] << std::endl;
    std::cout << adder0.output[5] << std::endl;
    std::cout << adder0.output[4] << std::endl;
    std::cout << adder0.output[3] << std::endl;
    std::cout << adder0.output[2] << std::endl;
    std::cout << adder0.output[1] << std::endl;
    std::cout << adder0.output[0] << std::endl;

    std::cout << std::endl << adder0.output[8] << std::endl;

    return 0;
}