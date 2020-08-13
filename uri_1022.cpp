#include <iostream>
#include <cmath>


typedef struct fraction {
    int numerator;
    int denominator;
} fraction; // Defining a structure fraction as a typedef.

inline fraction fraction_sum(fraction fracA, fraction fracB) {
    fraction fracR;
    fracR.numerator = fracA.numerator*fracB.denominator + fracB.numerator*fracA.denominator;
    fracR.denominator = fracA.denominator*fracB.denominator;
    return fracR;
}

inline fraction fraction_sub(fraction fracA, fraction fracB) {
    fraction fracR;
    fracR.numerator = fracA.numerator*fracB.denominator - fracB.numerator*fracA.denominator;
    fracR.denominator = fracA.denominator*fracB.denominator;
    return fracR;
}

inline fraction fraction_prod(fraction fracA, fraction fracB) {
    fraction fracR;
    fracR.numerator = fracA.numerator*fracB.numerator;
    fracR.denominator = fracA.denominator*fracB.denominator;
    return fracR;
}

inline fraction fraction_div(fraction fracA, fraction fracB) {
    fraction fracR;
    fracR.numerator = fracA.numerator*fracB.denominator;
    fracR.denominator = fracA.denominator*fracB.numerator;
    return fracR;
}

void fraction_reduced(fraction &fracF) {
    // Using binary GCD.
    int a = abs(fracF.numerator);
    int b = abs(fracF.denominator);
    int nShift = 0;
    while (((a | b) & 1) == 0) {
        nShift++;
        a >>= 1;
        b >>= 1;
    }
    while ((a & 1) == 0)
        a >>= 1;
    do {
        while ((b & 1) == 0)
            b >>= 1;
        if (a > b) {
            int buffer = b;
            b = a;
            a = buffer;
        }
        b -= a;
    } while (b != 0);
    a <<= nShift;

    fracF.numerator /= a;
    fracF.denominator /= a;
}

int main() {
    size_t caseMax;
    std::cin >> caseMax;
    for(size_t c = 0; c < caseMax; c++) {
        fraction fracA, fracB;
        char cDash, cOperator;
        std::cin >> fracA.numerator >> cDash >> fracA.denominator
                 >> cOperator
                 >> fracB.numerator >> cDash >> fracB.denominator;

        fraction fracR;
        switch(cOperator) {
        case '+': fracR = fraction_sum(fracA, fracB); break;
        case '-': fracR = fraction_sub(fracA, fracB); break;
        case '*': fracR = fraction_prod(fracA, fracB); break;
        case '/': fracR = fraction_div(fracA, fracB);
        }
        if(fracR.denominator < 0) {
            fracR.numerator *= -1;
            fracR.denominator *= -1;
        }
        std::cout << fracR.numerator << "/" << fracR.denominator << " = ";

        fraction_reduced(fracR);
        std::cout << fracR.numerator<< "/" << fracR.denominator << std::endl;
    }

    return 0;
}
