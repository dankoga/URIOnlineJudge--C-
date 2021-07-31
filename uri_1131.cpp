#include <iostream>


int main() {
    unsigned int vitoriasInter = 0, vitoriasGremio = 0, jogos = 0;
    unsigned int opcao;
    do {
        unsigned int golsInter, golsGremio;
        std::cin >> golsInter >> golsGremio;
        if(golsInter > golsGremio)
            vitoriasInter++;
        else if(golsGremio > golsInter)
            vitoriasGremio++;

        jogos++;

        std::cout << "Novo grenal (1-sim 2-nao)" << std::endl;
        std::cin >> opcao;
    } while(opcao == 1);

    std::cout << jogos << " grenais" << std::endl
              << "Inter:"   << vitoriasInter << std::endl
              << "Gremio:"  << vitoriasGremio << std::endl
              << "Empates:" << jogos - vitoriasInter - vitoriasGremio << std::endl;

    if (vitoriasInter > vitoriasGremio)
        std::cout << "Inter venceu mais" << std::endl;
    else if (vitoriasGremio > vitoriasInter)
        std::cout << "Gremio venceu mais" << std::endl;
    else
        std::cout << "Nao houve vencedor" << std::endl;

    return 0;
}
