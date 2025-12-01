#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int K, N;
    cout << "Введіть ціле число N: ";
    cin >> N;
    cout << "Введіть ціле число K: ";
    cin >> K;

    cout << "Число K повторене N разів: ";
    for (int i = 1; i <= N; i++) {
        cout << K << " ";
    }
    cout << endl;

    float candy;
    cout << "Введіть вартість 1 кг цукерок: ";
    cin >> candy;
    for (int i = 1; i <= N * 10; i++) {
        float weight = i / 10.0;
        cout << "Ціна за " << weight << " кг цукерок: " << weight * candy << endl;
    }

    int fact;
    cout << "Введіть число для факторіала: ";
    cin >> fact;
    int ful_fact = 1;
    for (int i = 1; i <= fact; i++) {
        ful_fact *= i;
    }
    cout << "Факторіал вашого числа: " << ful_fact << endl;

    double sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }
    cout << "Сума 1 + 1/2 + ... + 1/N = " << sum << endl;

    double X, f_sum = 1;
    cout << "Введіть дійсне число X: ";
    cin >> X;
    for (int i = 1; i <= N; i++) {
        f_sum += pow(-1, i) * pow(X, 2 * i) / tgamma(2 * i + 1);
    }
    cout << "Значення виразу = " << f_sum << endl;
}
