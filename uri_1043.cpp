#include <iostream>
#include <iomanip>
#include <array>


using triple = std::array<double, 3>;


int main() {
    triple sides;
    double perimeter = 0;
    double sideLongest = 0;
    for(size_t s = 0; s < 3; s++) {
        std::cin >> sides[s];
        perimeter += sides[s];
        if(sides[s] > sideLongest)
            sideLongest = sides[s];
    }

    std::cout << std::fixed << std::setprecision(1);
    if(perimeter > 2.0*sideLongest)
        std::cout << "Perimetro = " << perimeter << std::endl;
    else
        std::cout << "Area = " << 0.5*(sides[0] + sides[1])*sides[2] << std::endl;

    return 0;
}
