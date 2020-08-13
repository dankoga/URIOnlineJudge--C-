#include <iostream>
#include <iomanip>


int main() {
    const double PI = 3.14159;
    double radius;
    std::cin >> radius;
    std::cout << "A="
              << std::fixed << std::setprecision(4)
              << PI*radius*radius << std::endl;

    return 0;
}
