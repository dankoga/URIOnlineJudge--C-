#include <iostream>


int main() {
    int m, n;
    while(std::cin >> m >> n && m > 0 && n > 0) {
        if(m > n) {
            auto temp = m;
            m = n;
            n = temp;
        }
        int sum = 0;
        for(auto i = m; i <= n; i++) {
            std::cout << i << " ";
            sum += i;
        }
        std::cout << "Sum=" << sum << std::endl;
    }
    return 0;
}
