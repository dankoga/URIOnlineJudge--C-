#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double A, B, C;
    std::cin >> A >> B >> C;

    if(A == 0) { // Linear equation
        std::cout << "Impossivel calcular" << std::endl;
        return 0;
    }

    auto delta2 = B*B - 4.0*A*C;
    if(delta2 < 0) { // Imaginary roots
        std::cout << "Impossivel calcular" << std::endl;
        return 0;
    }

    auto delta = sqrt(delta2);
    auto Aprime = -0.5/A;
    std::cout << std::fixed << std::setprecision(5)
              << "R1 = " << Aprime*(B - delta) << std::endl
              << "R2 = " << Aprime*(B + delta) << std::endl;

    return 0;
}
