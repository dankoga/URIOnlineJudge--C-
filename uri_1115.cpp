#include <iostream>
#include <array>
#include <string>


int main() {
    std::array<std::string, 4> tableQuadrants{
        "primeiro",
        "segundo",
        "quarto",
        "terceiro"
    };

    int x, y;
    while(std::cin >> x >> y && x*y != 0) {
        auto code = static_cast<size_t>(x < 0);
        code += 2 * static_cast<size_t>(y < 0);
        std::cout << tableQuadrants[code] << std::endl;
    }

    return 0;
}

/* Os quadrantes foram condificados binariamente:
  0 0 = 0 : primeiro
  0 1 = 1 : segundo
  1 1 = 3 : terceiro
  1 0 = 2 : quarto

   Seria mais eficiente implementar uma árvore de decisão, mas quis tentar desse modo
  por prática.
*/
