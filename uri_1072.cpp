#include <iostream>


int main() {
    unsigned int numbersQuantity;
    std::cin >> numbersQuantity;
    unsigned int numbersOut = 0;
    for(unsigned int n = 0; n < numbersQuantity; ++n) {
        int number;
        std::cin >> number;
        numbersOut += static_cast<unsigned int>(number > 20 || number < 10);
    }
    std::cout << numbersQuantity - numbersOut << " in"  << std::endl
              << numbersOut                   << " out" << std::endl;

    return 0;
}
