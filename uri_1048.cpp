#include <iostream>
#include <iomanip>
#include <array>


int main() {
    std::array<double, 5> tableAdjustmentRate {
        0.15,
        0.12,
        0.10,
        0.07,
        0.04,
    };

    double salary;
    std::cin >> salary;

    size_t adjustmentIndex = static_cast<size_t>(salary)/400;
    double adjustment = salary*tableAdjustmentRate[adjustmentIndex];

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Novo salario: "   << salary + adjustment << std::endl
              << "Reajuste ganho: " << adjustment          << std::endl
              << std::setprecision(0)
              << "Em percentual: "  << tableAdjustmentRate[adjustmentIndex]*100  << " %" << std::endl;

    return 0;
}
