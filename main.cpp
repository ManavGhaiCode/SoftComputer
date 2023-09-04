#include <iostream>

#include "./Chips/Chips.h"

int main() {
    Chips::SALU aslu;

    aslu.input[0] = 0;
    aslu.input[1] = 0;
    aslu.input[2] = 1;
    aslu.input[3] = 0;
    aslu.input[4] = 0;
    aslu.input[5] = 1;
    aslu.input[6] = 0;
    aslu.input[7] = 0;
    aslu.input[8] = 1;
    aslu.input[9] = 1;
    aslu.input[10] = 1;
    aslu.input[11] = 0;
    aslu.input[12] = 0;
    aslu.input[13] = 1;
    aslu.input[14] = 1;
    aslu.input[15] = 0;

    aslu.input[16] = 0;
    aslu.input[17] = 1;
    aslu.input[18] = 0;
    aslu.input[19] = 1;
    aslu.input[20] = 1;
    aslu.input[21] = 1;
    aslu.input[22] = 1;
    aslu.input[23] = 0;
    aslu.input[24] = 1;
    aslu.input[25] = 0;
    aslu.input[26] = 0;
    aslu.input[27] = 1;
    aslu.input[28] = 1;
    aslu.input[29] = 1;
    aslu.input[30] = 0;
    aslu.input[31] = 0;

    aslu.input[32] = 1;

    aslu.run();

    std::cout << aslu.output[15] << std::endl;
    std::cout << aslu.output[14] << std::endl;
    std::cout << aslu.output[13] << std::endl;
    std::cout << aslu.output[12] << std::endl;
    std::cout << aslu.output[11] << std::endl;
    std::cout << aslu.output[10] << std::endl;
    std::cout << aslu.output[9] << std::endl;
    std::cout << aslu.output[8] << std::endl;
    std::cout << aslu.output[7] << std::endl;
    std::cout << aslu.output[6] << std::endl;
    std::cout << aslu.output[5] << std::endl;
    std::cout << aslu.output[4] << std::endl;
    std::cout << aslu.output[3] << std::endl;
    std::cout << aslu.output[2] << std::endl;
    std::cout << aslu.output[1] << std::endl;
    std::cout << aslu.output[0] << std::endl;

    std::cout << std::endl << aslu.output[16] << std::endl;

    return 0;
}