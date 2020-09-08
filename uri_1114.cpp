#include <iostream>


int main() {
    while(true) {
        unsigned int password;
        std::cin >> password;
        if (password == 2002) {
            std::cout << "Acesso Permitido" << std::endl;
            return 0;
        }
        else
            std::cout << "Senha Invalida" << std::endl;
    }
}
