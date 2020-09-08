#include <iostream>


int main() {
    unsigned int multiplier;
    std::cin >> multiplier;
    unsigned int product = 0;
    for(unsigned int n = 1; n <= 10; n++) {
        product += multiplier;
        std::cout << n << " x " << multiplier << " = "
                  << product << std::endl;
    }
    return 0;
}
