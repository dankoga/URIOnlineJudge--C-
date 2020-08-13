#include <iostream>
#include <iomanip>


int main() {
    double travelTime, travelSpeedAvg;
    std::cin >> travelTime >> travelSpeedAvg;

    std::cout << std::fixed << std::setprecision(3)
              << (travelTime*travelSpeedAvg)/12.0 << std::endl;

    return 0;
}
