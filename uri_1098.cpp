#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    for(int j = 1; j <= 3; j++)
        cout << "I=" << 0 << " J=" << j << endl;

    for(double x = 0.2; x < 1.0; x += 0.2)
        for(int j = 1; j <= 3; j++)
            cout << "I=" << x << " J=" << x + j << endl;

    for(int j = 2; j <= 4; j++)
        cout << "I=" << 1 << " J=" << j << endl;

    for(double x = 1.2; x < 1.99; x += 0.2)
        for(int j = 1; j <= 3; j++)
            cout << "I=" << x << " J=" << x + j << endl;

    for(int j = 3; j <= 5; j++)
        cout << "I=" << 2 << " J=" << j << endl;

    return 0;
}
