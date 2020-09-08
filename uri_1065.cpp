#include <iostream>


int main() {
    unsigned int valuesEven = 0;
    for(unsigned int n = 0; n < 5; n++) {
        int value;
        std::cin >> value;
        valuesEven += static_cast<unsigned int>(!(value & 1));
    }
    std::cout << valuesEven << " valores pares" << std::endl;
    return 0;
}
