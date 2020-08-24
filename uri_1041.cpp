#include <iostream>
#include <string>

/*
Using ternary numbers to codify the coordinates:
0 - =0;
1 - <0
2 - >0
n Y X
0 0 0 Origem
1 0 1 Eixo X
2 0 2 Eixo X
3 1 0 Eixo Y
4 1 1 Q3
5 1 2 Q4
6 2 0 Eixo Y
7 2 1 Q2
8 2 2 Q1
*/

int main() {
    std::string tableQuadrant[] = {
        "Origemn",
        "Eixo X",
        "Eixo X",
        "Eixo Y",
        "Q3",
        "Q4",
        "Eixo Y",
        "Q2",
        "Q1"
    };

    float positionX, positionY;
    std::cin >> positionX >> positionY;

    size_t quadrantIndex = (positionX < 0) + 2*(positionX > 0)
                       + 3*(positionY < 0) + 6*(positionY > 0);

    std::cout << tableQuadrant[quadrantIndex] << std::endl;

    return 0;
}
