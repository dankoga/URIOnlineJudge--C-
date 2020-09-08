#include <iostream>


int main() {
    int numberA, numberB;
    std::cin >> numberA >> numberB;
    if(numberB < numberA) {
        auto temp = numberA;
        numberA = numberB;
        numberB = temp;
    }
    numberA += 1 + static_cast<int>(numberA & 1);
    numberB -= 1 + static_cast<int>(numberB & 1);

    std::cout << (numberB + numberA)*(numberB - numberA + 2)/4 << std::endl;

    return 0;
}

/*
 Using the formulas:
 a_n = a_1 + (n+1)*d
 S = n*(a_1 + a_n)/2
*/
