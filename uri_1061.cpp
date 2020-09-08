#include <iostream>
#include <string>


int main() {
    std::string discardedInput;
    unsigned long beginDay, beginHour, beginMinute, beginSecond;
    std::cin >> discardedInput >> beginDay
             >> beginHour >> discardedInput >> beginMinute >> discardedInput >> beginSecond;
    unsigned long endDay, endHour, endMinute, endSecond;
    std::cin >> discardedInput >> endDay
             >> endHour >> discardedInput >> endMinute >> discardedInput >> endSecond;

    auto durationSecond = (endSecond - beginSecond) +
                          (endMinute - beginMinute)*60 +
                          (endHour - beginHour)*3600 +
                          (endDay - beginDay)*86400;

    std::cout << durationSecond/86400 << " dia(s)"      << std::endl;
    durationSecond %= 86400;
    std::cout << durationSecond/3600  << " hora(s)"    << std::endl;
    durationSecond %= 3600;
    std::cout << durationSecond/60    << " minuto(s)"  << std::endl;
    durationSecond %= 60;
    std::cout << durationSecond       << " segundo(s)" << std::endl;

    return 0;
}
