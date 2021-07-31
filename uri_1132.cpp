#include <iostream>


int main() {
    int numberA, numberB;
    std::cin >> numberA >> numberB;
    if(numberA > numberB) {
        auto buffer = numberA;
        numberA = numberB;
        numberB = buffer;
    }

    auto sumA2B = ((numberA + numberB)*(numberB - numberA + 1))/2;

    numberA = numberA + (13 - numberA%13)%13;
    numberB = numberB - numberB%13;

    std::cout << sumA2B - ((numberA + numberB)*((numberB - numberA)/13 + 1))/2 << std::endl;
    return 0;


}
