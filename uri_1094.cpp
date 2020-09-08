#include <iostream>
#include <iomanip>


int main() {
    unsigned int samplesTotal;
    std::cin >> samplesTotal;
    unsigned int totalCoelhos = 0, totalRatos = 0, totalSapos = 0, totalAnimals = 0;
    for(unsigned int n = 0; n < samplesTotal; n++) {
        unsigned int quantity;
        char species;
        std::cin >> quantity >> species;
        totalAnimals += quantity;
        switch(species) {
        case 'C': {
            totalCoelhos += quantity;
            break;
        }
        case 'R': {
            totalRatos   += quantity;
            break;
        }
        case 'S':
            totalSapos   += quantity;
        }
    }
    std::cout << "Total: "            << totalAnimals << " cobaias\n"
              << "Total de coelhos: " << totalCoelhos << "\n"
              << "Total de ratos: "   << totalRatos   << "\n"
              << "Total de sapos: "   << totalSapos
              << std::endl;

    double percentual = 100.0/static_cast<double>(totalAnimals);
    std::cout << std::fixed << std::setprecision(2)
              << "Percentual de coelhos: " << static_cast<double>(totalCoelhos)*percentual << "%\n"
              << "Percentual de ratos: "   << static_cast<double>(totalRatos)*percentual   << "%\n"
              << "Percentual de sapos: "   << static_cast<double>(totalSapos)*percentual   << "%"
              << std:: endl;

    return 0;
}
