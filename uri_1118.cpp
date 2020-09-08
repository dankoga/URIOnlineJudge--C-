#include <iostream>
#include <iomanip>


int main() {
    while(true) {
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

        int option = -1; //Forcing the first loop
        while(option < 1 || option > 2) {
            std::cout << "novo calculo (1-sim 2-nao)" << std::endl;
            std::cin >> option;
            if(option == 2)
                return 0;
        }
    }
}
