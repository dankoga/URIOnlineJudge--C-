#include <iostream>


int main() {
    unsigned long numberMax;
    std::cin >> numberMax;
    for(unsigned long n = 2; n <= numberMax; n += 2)
        std::cout << n << "^2 = "
                  << n*n << std::endl;

    return 0;
}
