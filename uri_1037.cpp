#include <iostream>


int main() {
    double A;
    std::cin >> A;
    if(A < 0 || A > 100) {
        std::cout << "Fora de intervalo" << std::endl;
        return 0;
    }

    if(A > 75) {
        std::cout << "Intervalo (75,100]" << std::endl;
        return 0;
    }
    if(A > 50) {
        std::cout << "Intervalo (50,75]" << std::endl;
        return 0;
    }
    if(A > 25) {
        std::cout << "Intervalo (25,50]" << std::endl;
        return 0;
    }
    std::cout << "Intervalo [0,25]" << std::endl;

    return 0;
}
