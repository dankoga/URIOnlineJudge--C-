#include <iostream>
#include <iomanip>


int main() {
    double scoreA, scoreB, scoreC;
    std::cin >> scoreA >> scoreB >> scoreC;

    std::cout << "MEDIA = "
              << std::fixed << std::setprecision(1)
              << 0.2*scoreA + 0.3*scoreB + 0.5*scoreC << std::endl;

    return 0;
}
