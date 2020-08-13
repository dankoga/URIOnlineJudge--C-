#include <iostream>
#include <iomanip>


int main() {
    double scoreA, scoreB;
    std::cin >> scoreA >> scoreB;

    std::cout << "MEDIA = "
              << std::fixed << std::setprecision(5)
              << (3.5*scoreA + 7.5*scoreB)/11.0 << std::endl;

    return 0;
}
