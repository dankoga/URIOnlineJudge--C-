#include <iostream>
#include <iomanip>


int main() {
    unsigned long highestValue = 0;
    size_t highestPosition;
    for(size_t n = 1; n <= 100; ++n) {
        unsigned long value;
        std::cin >> value;
        if(value > highestValue) {
            highestValue = value;
            highestPosition = n;
        }
    }
    std::cout << highestValue << std::endl
              << highestPosition << std::endl;
    return 0;
}
