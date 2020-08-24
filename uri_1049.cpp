#include <iostream>


int main() {
    std::string inputWord;
    std::cin >> inputWord;
    if(inputWord[0] == 'v') {
        std::cin >> inputWord;
        if(inputWord[0] == 'a') {
            std::cin >> inputWord;
            if(inputWord[0] == 'c')
                std::cout << "aguia\n";
            else
                std::cout << "pomba\n";
        }
        else {
            std::cin >> inputWord;
            if(inputWord[0] == 'o')
                std::cout << "homem\n";
            else
                std::cout << "vaca\n";
        }
    }
    else {
        std::cin >> inputWord;
        if(inputWord[0] == 'i') {
            std::cin >> inputWord;
            if(inputWord[2] == 'm')
                std::cout << "pulga\n";
            else
                std::cout << "lagarta\n";
        }
        else {
            std::cin >> inputWord;
            if(inputWord[0] == 'h')
                std::cout << "sanguessuga\n";
            else
                std::cout << "minhoca\n";
        }
    }

    return 0;
}
