#include <iostream>


int main() {
    unsigned int timeBegin, timeBeginM, timeEndH, timeEndM;
    std::cin >> timeBegin >> timeBeginM
             >> timeEndH   >> timeEndM;

    auto timeIntervalM = (60*(timeEndH - timeBegin) + timeEndM - timeBeginM + 1440)%1440;
    if(timeIntervalM == 0) {
        std::cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << std::endl;
    }
    else {
        std::cout << "O JOGO DUROU " << timeIntervalM/60 << " HORA(S) E "
                  << timeIntervalM%60 << " MINUTO(S)" << std::endl;
    }

    return 0;
}
