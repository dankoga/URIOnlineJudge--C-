#include <iostream>
#include <iomanip>


using code = size_t;

int main() {
    // The problem suggests using control structures, but an array is much better!
    double tablePrices[] = {
        4.0, // Cachorro Quente
        4.5, // X-Salada
        5.0, // X-Bacon
        2.0, // Torrada Simples
        1.5  // Refrigerante
    };

    code productCode;
    float productQuantity; // Declaring dQuantity as a float to avoid typecasting
    std::cin >> productCode >> productQuantity;

    std::cout << std::fixed << std::setprecision(2)
              << "Total: R$ " << productQuantity*tablePrices[productCode - 1] << std::endl;

    return 0;
}

