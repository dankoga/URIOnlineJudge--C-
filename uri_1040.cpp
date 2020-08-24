#include <iostream>
#include <iomanip>

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::fixed;
    using std::setprecision;

    float score1, score2, score3, score4;
    cin >> score1 >> score2 >> score3 >> score4;

    float scoreAverage = 0.2*score1 + 0.3*score2 + 0.4*score3 + 0.1*score4;
    cout << fixed << setprecision(1)
         << "Media: " << scoreAverage << endl;

    if(scoreAverage >= 7.0) {
        cout << "Aluno aprovado." << endl;
        return 0;
    }

    if(scoreAverage < 5.0) {
        cout << "Aluno reprovado." << endl;
        return 0;
    }

    cout << "Aluno em exame." << endl;

    cin >> score1; // Reusing score1 to store the new score
    cout << "Nota do exame: " << score1 << endl;
    scoreAverage = (scoreAverage + score1)*0.5;
    if(scoreAverage < 5.0)
        cout << "Aluno reprovado." << endl;
    else
        cout << "Aluno aprovado." << endl;

    cout << "Media final: " << scoreAverage << endl;

    return 0;
}
