#include <iostream>


int main() {
    unsigned int numberMaximum;
    std::cin >> numberMaximum;
    for(unsigned int n = 1; n <= numberMaximum; n += 2)
        std::cout << n << std::endl;

    return 0;
}
