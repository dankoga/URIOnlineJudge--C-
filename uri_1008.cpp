#include <iostream>
#include <iomanip>


int main() {
    unsigned int employeeNumber;
    double workedHours, hourlyWage;

    std::cin >> employeeNumber >> workedHours >> hourlyWage;

    std::cout << "NUMBER = " << employeeNumber << std::endl
              << std::fixed << std::setprecision(2)
              << "SALARY = U$" << workedHours*hourlyWage << std::endl;

    return 0;
}
