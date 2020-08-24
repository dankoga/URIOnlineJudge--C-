#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    std::cout << (((A%B)*(B%A) == 0)? "Sao Multiplos": "Nao sao Multiplos") << std::endl;

    return 0;
}
