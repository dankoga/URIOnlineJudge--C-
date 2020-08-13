#include <iostream>
#include <iomanip>

int main() {
    unsigned int partNumber;
    double partQuantity, partValue;

    std::cin >> partNumber >> partQuantity >> partValue;
    double valueTotal = partQuantity * partValue;

    std::cin >> partNumber >> partQuantity >> partValue;
    valueTotal += partQuantity * partValue;

    std::cout << "VALOR A PAGAR: R$ "
              << std::fixed << std::setprecision(2)
              << valueTotal << std::endl;

    return 0;
}
