#include <iostream>
#include <array>


using triple = std::array<int, 3>;


inline void print_numbers(triple &T, size_t a, size_t b, size_t c) {
    std::cout << T[a] << std::endl
              << T[b] << std::endl
              << T[c] << std::endl;
}

int main() {
    triple numbers;
    std::cin >> numbers[0] >> numbers[1] >> numbers[2];

    if(numbers[0] < numbers[1]) {
        if(numbers[1] < numbers[2])
            print_numbers(numbers, 0, 1, 2);
        else {
            if(numbers[0] < numbers[2])
                print_numbers(numbers, 0, 2, 1);
            else
                print_numbers(numbers, 2, 0, 1);
        }
    }
    else {
        if(numbers[1] < numbers[2]) {
            if(numbers[0] < numbers[2])
                print_numbers(numbers, 1, 0, 2);
            else
                print_numbers(numbers, 1, 2, 0);
        }
        else
            print_numbers(numbers, 2, 1, 0);
    }

    std::cout << std::endl;
    print_numbers(numbers, 0, 1, 2);

    return 0;
}

/*
REF for the decision tree:
https://i.stack.imgur.com/8PZBs.jpg
*/
