#include <iostream>
#include <iomanip>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;

    std::cout << std::fixed << std::setprecision(3)
              << "TRIANGULO: " << 0.5 * a * c        << std::endl
              << "CIRCULO: "   << 3.14159 * c * c    << std::endl
              << "TRAPEZIO: "  << 0.5 * c * (a + b)  << std::endl
              << "QUADRADO: "  << b * b              << std::endl
              << "RETANGULO: " << a * b              << std::endl;

    return 0;
}
