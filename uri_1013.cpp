#include <iostream>
#include <cmath>

inline int larger(int a, int b) {
    return (a + b + abs(a - b))/2;
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << larger(larger(a, b), c) << " eh maior" << std::endl;

    return 0;
}
