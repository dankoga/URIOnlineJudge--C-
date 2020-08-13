#include <iostream>


int main() {
    unsigned long ageDays;
    std::cin >> ageDays;

    auto ageYears = ageDays/365;
    ageDays -= ageYears*365;

    auto ageMonths = ageDays/30;
    ageDays -= ageMonths*30;

    std::cout << ageYears  << " ano(s)"  << std::endl
              << ageMonths << " mes(es)" << std::endl
              << ageDays   << " dia(s)"  << std::endl;

    return 0;
}
