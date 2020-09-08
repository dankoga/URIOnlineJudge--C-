#include <iostream>
#include <iomanip>


int main() {
    double averageScore = 0.0;
    unsigned int validScores = 0;
    while (validScores < 2) {
        double score;
        std::cin >> score;
        if(score > 10.0 || score < 0.0)
            std::cout << "nota invalida" << std::endl;
        else {
            averageScore += score;
            validScores++;
        }
    }
    std::cout << std::fixed << std::setprecision(2)
              << "media = " << averageScore/2.0 << std::endl;

    return 0;
}
