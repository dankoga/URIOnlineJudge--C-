#include <iostream>
#include <iomanip>


int main() {
    const double PI = 3.14159;

    double radius;
    std::cin >> radius;

    std::cout << "VOLUME = "
              << std::fixed << std::setprecision(3)
              << (4.0*PI*radius*radius*radius)/3.0 << std::endl;

    return 0;
}
