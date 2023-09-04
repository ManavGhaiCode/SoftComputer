#include <iostream>

#include "./Chips/Chips.h"

int main() {
    Chips::Adder16Bit adder0;

    adder0.input[0] = 0;
    adder0.input[1] = 0;
    adder0.input[2] = 1;
    adder0.input[3] = 0;
    adder0.input[4] = 0;
    adder0.input[5] = 1;
    adder0.input[6] = 0;
    adder0.input[7] = 0;
    adder0.input[8] = 1;
    adder0.input[9] = 1;
    adder0.input[10] = 1;
    adder0.input[11] = 0;
    adder0.input[12] = 0;
    adder0.input[13] = 0;
    adder0.input[14] = 1;
    adder0.input[15] = 0;

    adder0.input[16] = 0;
    adder0.input[17] = 1;
    adder0.input[18] = 0;
    adder0.input[19] = 1;
    adder0.input[20] = 1;
    adder0.input[21] = 1;
    adder0.input[22] = 1;
    adder0.input[23] = 0;
    adder0.input[24] = 1;
    adder0.input[25] = 0;
    adder0.input[26] = 0;
    adder0.input[27] = 1;
    adder0.input[28] = 1;
    adder0.input[29] = 0;
    adder0.input[30] = 1;
    adder0.input[31] = 0;


    adder0.run();

    std::cout << adder0.output[15] << std::endl;
    std::cout << adder0.output[14] << std::endl;
    std::cout << adder0.output[13] << std::endl;
    std::cout << adder0.output[12] << std::endl;
    std::cout << adder0.output[11] << std::endl;
    std::cout << adder0.output[10] << std::endl;
    std::cout << adder0.output[9] << std::endl;
    std::cout << adder0.output[8] << std::endl;
    std::cout << adder0.output[7] << std::endl;
    std::cout << adder0.output[6] << std::endl;
    std::cout << adder0.output[5] << std::endl;
    std::cout << adder0.output[4] << std::endl;
    std::cout << adder0.output[3] << std::endl;
    std::cout << adder0.output[2] << std::endl;
    std::cout << adder0.output[1] << std::endl;
    std::cout << adder0.output[0] << std::endl;

    std::cout << std::endl << adder0.output[16] << std::endl;

    return 0;
}