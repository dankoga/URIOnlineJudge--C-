#include <iostream>


int main() {
    unsigned int numberOfValuesPositive = 0;
    float valuesSum = 0;
    for(unsigned int n = 0; n < 6; n++) {
        float value;
        std::cin >> value;
        auto isValuePositive = (value > 0);
        numberOfValuesPositive += static_cast<unsigned int>(isValuePositive);
        valuesSum += static_cast<float>(isValuePositive)*value;
    }
    std::cout << numberOfValuesPositive << " valores positivos" << std::endl
              << valuesSum/numberOfValuesPositive << std::endl;
    return 0;
}
