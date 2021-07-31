#include <iostream>
#include <string>
#include <algorithm>


int main() {
    size_t testsQty;
    std::cin >> testsQty;
    std::cin.ignore();
    for(size_t test = 0; test < testsQty; test++) {
        std::string line;
        getline(std::cin, line);
        std::reverse(line.begin(), line.end());

        size_t half = line.size()/2;
        for(size_t i = 0; i < half; i++)
            if(isalpha(line[i]))
                line[i] += 3;
        for(size_t i = half; i < line.size(); i++)
            if(isalpha(line[i]))
                line[i] += 2;
            else
                line[i] -= 1;

        std::cout << line << std::endl;
    }
    return 0;
}

