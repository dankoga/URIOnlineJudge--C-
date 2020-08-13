#include <iostream>
#include <array>


typedef unsigned long uint_t;


int main() {
    const std::array<uint_t, 7> tableCurrencyBill{100, 50, 20, 10, 5, 2, 1};

    uint_t money;
    std::cin >> money;

    std::cout << money << std::endl;
    for(auto bill: tableCurrencyBill) {
        uint_t billQuantity = money/bill;
        money -= billQuantity*bill;
        std::cout << billQuantity << " nota(s) de R$ "
                  << bill         << ",00" << std::endl;
    }

    return 0;
}
