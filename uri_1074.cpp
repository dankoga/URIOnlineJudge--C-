#include <iostream>


int main() {
    size_t numbersQuantity;
    std::cin >> numbersQuantity;
    for(size_t n = 0; n < numbersQuantity; n++) {
        int number;
        std::cin >> number;

        if(number == 0) {
            std::cout << "NULL" << std::endl;
            continue;
        }
        if(number & 1)
            std::cout << "ODD ";
        else
            std::cout << "EVEN ";

        if(number < 0 )
            std::cout << "NEGATIVE" << std::endl;
        else
            std::cout << "POSITIVE" << std::endl;
    }

    return 0;
}
