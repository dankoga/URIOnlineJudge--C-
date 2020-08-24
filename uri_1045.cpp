#include <iostream>
#include <array>


using triple = std::array<double, 3>;

void sort_triple(triple &T) {
    if(T[0] < T[1]) {
        if(T[1] < T[2]) {
            auto temp = T[2];
            T[2] = T[0];
            T[0] = temp;
        }
        else {
            if(T[0] < T[2]) {
                auto temp = T[2];
                T[2] = T[0];
                T[0] = T[1];
                T[1] = temp;
            }
            else {
                auto temp = T[1];
                T[1] = T[0];
                T[0] = temp;
            }
        }
    }
    else {
        if(T[1] < T[2]) {
            if(T[0] < T[2]) {
                auto temp = T[2];
                T[2] = T[1];
                T[1] = T[0];
                T[0] = temp;
            }
            else {
                auto temp = T[2];
                T[2] = T[0];
                T[0] = T[1];
                T[1] = temp;
            }
        }
    }
}


int main() {
    using std::cin;
    using std::cout;
    using std::endl;

    triple sides;
    cin >> sides[0] >> sides[1] >> sides[2];
    sort_triple(sides);
    cout << sides[0] << " "
         << sides[1] << " "
         << sides[2] << endl;

    if(sides[2] + sides[1] <= sides[0]) {
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }

    // Classifying the triangle shape according to its angles
    sides[0] *= sides[0];
    sides[1] *= sides[1];
    sides[2] *= sides[2];
    if(sides[2] + sides[1] < sides[0])
        cout << "TRIANGULO OBTUSANGULO" << endl;
    else if(sides[2] + sides[1] > sides[0])
        cout << "TRIANGULO ACUTANGULO" << endl;
    else {
        cout << "TRIANGULO RETANGULO" << endl;
        return 0;
    }

    // Classifying the triangle shape according to its sides
    unsigned int equalSides = 0;
    for(int i = 0; i < 3; i++)
        for(int j = i+1; j < 3; j++)
            if(sides[i] == sides[j])
                equalSides++;
    if(equalSides == 3)
        cout << "TRIANGULO EQUILATERO" << endl;
    else if(equalSides == 1)
        cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}
