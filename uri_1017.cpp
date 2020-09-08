#include <iostream>
#include <iomanip>


int main() {
    double time, speed;
    cin >> time >> speed;

    cout << fixed << setprecision(3);
    cout << time*speed/12.0 << endl;

    return 0;
}
