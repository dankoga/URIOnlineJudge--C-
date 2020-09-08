#include <iostream>


int main() {
    unsigned int casesQuantity;
    std::cin >> casesQuantity;
    for(unsigned int n = 0; n < casesQuantity; n++) {
        int numberMin, numberMax;
        std::cin >> numberMin >> numberMax;
        if(numberMin > numberMax) {
            auto temp = numberMin;
            numberMin = numberMax;
            numberMax = temp;
        }
        numberMin += (1 + numberMin%2);
        numberMax -= (1 + numberMax%2);

        auto terms = (numberMax - numberMin)/2;
        if(terms >= 0)
            std::cout << (terms+1)*(numberMin + terms) << std::endl;
        else
            std::cout << 0 << std::endl;
    }
    return 0;
}

/*
  numberMax = numberMin + 2*i;
  i = (numberMax - numberMin)/2;

  nSum = numberMin + (numberMin+2) + (numberMin+4) + ... + numberMax
  nSum = numberMin + (numberMin+2) + (numberMin+4) + ... + numberMin + 2*i
  nSum = (i+1)*numberMin + 2*(0 + 1 + 2 + ... + i)
  nSum = (i+1)*numberMin + i*(i+1)
  nSum = (i+1)*(numberMin + i)
*/
