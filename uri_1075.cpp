#include <iostream>


int main() {
    unsigned int divisor;
    std::cin >> divisor;
    unsigned int number = 2;
    while(number < 10000) {
        std::cout << number << std::endl;
        number += divisor;
    }

    return 0;
}
