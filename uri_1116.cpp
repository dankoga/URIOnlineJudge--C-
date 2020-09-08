#include <iostream>
#include <iomanip>


int main() {
    size_t cases;
    std::cin >> cases;
    std::cout << std::fixed << std::setprecision(1);
    for(size_t c = 0; c < cases; ++c) {
        double dividend, divisor;
        std::cin >> dividend >> divisor;
        if(divisor == 0)
            std::cout << "divisao impossivel" << std::endl;
        else
            std::cout << dividend/divisor << std::endl;
    }
    return 0;
}
