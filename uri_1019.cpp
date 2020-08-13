#include <iostream>


int main() {
    unsigned long timeSeconds;
    std::cin >> timeSeconds;

    auto timeHours = timeSeconds/3600;
    timeSeconds -= timeHours*3600;

    auto timeMinutes = timeSeconds/60;
    timeSeconds -= timeMinutes*60;

    std::cout << timeHours   << ':'
              << timeMinutes << ':'
              << timeSeconds << std::endl;

    return 0;
}
