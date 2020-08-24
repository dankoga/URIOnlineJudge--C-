#include <iostream>

int main() {
    unsigned int timeBegin, timeEnd;
    std::cin >> timeBegin >> timeEnd;

    auto timeInterval = (timeEnd - timeBegin + 24)%24;
    if(timeInterval == 0) {
        std::cout << "O JOGO DUROU 24 HORA(S)" << std::endl;
    }
    else {
        std::cout << "O JOGO DUROU " << timeInterval << " HORA(S)" << std::endl;
    }

    return 0;
}
