#include <iostream>


int main() {
    unsigned int numberMinimum;
    std::cin >> numberMinimum;
    numberMinimum |= 1; // transforma o n�mero no pr�ximo �mpar.
    for(unsigned int n = 0; n <= 10; n += 2)
        std::cout << numberMinimum + n << std::endl;

    return 0;
}
