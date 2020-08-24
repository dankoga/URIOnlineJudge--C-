#include <iostream>


int main() {
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;

    std::cout << "Valores ";
    // Reordered the constraints from the most to the least likely
    if(A&1 || (C < 0) || (D < 0)|| (B <= C) || (D <= A) || (C + D <= A + B))
        std::cout << "nao ";
    std::cout << "aceitos" << std::endl;

    return 0;
}
