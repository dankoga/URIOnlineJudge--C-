#include <iostream>
#include <iomanip>


int main() {
    size_t numberOfLines;
    std::cin >> numberOfLines;
    std::cout << std::fixed << std::setprecision(1);
    for(size_t l = 0; l < numberOfLines; ++l) {
        double numberA, numberB, numberC;
        std::cin >> numberA >> numberB >> numberC;
        std::cout << 0.2*numberA + 0.3*numberB + 0.5*numberC << std::endl;
    }

    return 0;
}
