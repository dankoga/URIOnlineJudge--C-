#include <iostream>
#include <iomanip >


int main() {
    double income;
    std::cin >> income;
    std::cout << std::fixed << std::setprecision(2);

    if(income <= 2000.0) {
        std::cout << "Isento" << std::endl;
        return 0;
    }

    auto &incomePartial = income;

    incomePartial -= 2000;
    double taxes;
    if(incomePartial <= 1000.00) {
        taxes = incomePartial*0.08;
        std::cout << "R$ " << taxes << std::endl;
        return 0;
    }

    income -= 1000.00;
    taxes = 80.00;
    if(income <= 1500.00) {
        taxes += income*0.18;
        std::cout << "R$ " << taxes << std::endl;
        return 0;
    }

    income -= 1500.00;
    taxes = 350.00;
    taxes += income*0.28;
    std::cout << "R$ " << taxes << std::endl;


    return 0;
}
