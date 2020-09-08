#include <iostream>


int main() {
    unsigned int positiveValues = 0;
    for(unsigned int n = 0; n < 6; n++) {
        float value;
        std::cin >> value;
        positiveValues += static_cast<unsigned int>(value > 0.0);
    }
    std::cout << positiveValues << " valores positivos" << std::endl;


    return 0;
}
