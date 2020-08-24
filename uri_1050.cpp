#include <iostream>
#include <vector>
#include <string>


using tableCode_t = std::vector<std::string>;

int main() {
    unsigned int codeDDD;
    std::cin >> codeDDD;
    if(codeDDD > 99 || codeDDD < 0) {
        std::cout << "DDD nao cadastrado" << std::endl;

        return 0;
    }

    tableCode_t tableDDD(100, "DDD nao cadastrado");
    tableDDD[61] = "Brasilia";
    tableDDD[71] = "Salvador";
    tableDDD[11] = "Sao Paulo";
    tableDDD[21] = "Rio de Janeiro";
    tableDDD[32] = "Juiz de Fora";
    tableDDD[19] = "Campinas";
    tableDDD[27] = "Vitoria";
    tableDDD[31] = "Belo Horizonte";

    std::cout << tableDDD[codeDDD] << std::endl;

    return 0;
}
