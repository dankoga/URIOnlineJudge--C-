#include <iostream>
#include <iomanip>

int main() {
    double distanceTraveled, fuelConsumed;
    std::cin >> distanceTraveled >> fuelConsumed;

    std::cout << std::fixed << std::setprecision(3)
              << distanceTraveled/fuelConsumed << " km/l" << std::endl;

    return 0;
}
