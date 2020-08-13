#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>


typedef std::array<double, 2> vector2D_t;


int main() {
    vector2D_t vectorA, vectorB;
    std::cin >> vectorA[0] >> vectorA[1] >> vectorB[0] >> vectorB[1];

    vector2D_t vectorDelta;
    vectorDelta[0] = vectorA[0] - vectorB[0];
    vectorDelta[1] = vectorA[1] - vectorB[1];

    std::cout << std::fixed << std::setprecision(4)
              << sqrt(vectorDelta[0]*vectorDelta[0] + vectorDelta[1]*vectorDelta[1]) << std::endl;

    return 0;
}
