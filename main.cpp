#include <iostream>

#include "./Chips/Chips.h"
#include "./Chips/Ram.h"

int main() {
    Chips::DLatch dlatch;

    dlatch.input[0] = 1;
    dlatch.input[1] = 1;
    dlatch.run();

    std::cout << dlatch.output << std::endl;

    dlatch.input[0] = 0;
    dlatch.input[1] = 1;
    dlatch.run();

    std::cout << dlatch.output << std::endl;

    return 0;
}