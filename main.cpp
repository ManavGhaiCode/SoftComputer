#include <iostream>

#include "./Chips/Chips.h"
#include "./Chips/Ram.h"

int main() {
    Chips::SRLatch srlatch;

    srlatch.input[0] = 1;
    srlatch.input[1] = 0;
    srlatch.run();

    std::cout << srlatch.output << std::endl;

    srlatch.input[0] = 1;
    srlatch.input[1] = 1;
    srlatch.run();

    std::cout << srlatch.output << std::endl;

    return 0;
}