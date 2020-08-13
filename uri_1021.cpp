#include <iostream>
#include <array>


typedef unsigned long uint_t;


int main() {
    const std::array<uint_t, 6> tableCurrencyBills{100, 50, 20, 10, 5, 2};
    const std::array<uint_t, 4> tableCurrencyCoins{50, 25, 10, 5};

    uint_t currencyInt, currencyCent;
    char cDot;
    std::cin >> currencyInt >> cDot >> currencyCent;

    std::cout << "NOTAS:" << std::endl;

    for(auto bill: tableCurrencyBills) {
        uint_t currencyQuantity = currencyInt/bill;
        currencyInt -= currencyQuantity*bill;
        std::cout << currencyQuantity << " nota(s) de R$ "
                  << bill             << ".00" << std::endl;
    }

    std::cout << "MOEDAS:"   << std::endl
              << currencyInt << " moeda(s) de R$ 1.00" << std::endl;

    for(auto coin: tableCurrencyCoins) {
        uint_t currencyQuantity = currencyCent/coin;
        currencyCent -= currencyQuantity*coin;
        std::cout << currencyQuantity << " moeda(s) de R$ 0."
                  << coin             << std::endl;
    }
    std::cout << currencyCent << " moeda(s) de R$ 0.01" << std::endl;

    return 0;
}
