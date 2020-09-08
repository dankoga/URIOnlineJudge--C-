#include <iostream>


int main() {
    unsigned int valuesOdd = 0, valuesNegative = 0, valuesPositive = 0;;
    for(unsigned int n = 0; n < 5; ++n) {
        int value;
        std::cin >> value;
        valuesOdd += static_cast<unsigned int>(value & 1);
        valuesNegative += static_cast<unsigned int>(value < 0);
        valuesPositive += static_cast<unsigned int>(value > 0);
    }
    std::cout << 5 - valuesOdd  << " valor(es) par(es)"     << std::endl
              << valuesOdd      << " valor(es) impar(es)"   << std::endl
              << valuesPositive << " valor(es) positivo(s)" << std::endl
              << valuesNegative << " valor(es) negativo(s)" << std::endl;

    return 0;
}
