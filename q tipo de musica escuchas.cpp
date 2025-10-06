
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double capital, tasa;
    int anios;

    cout << "Capital inicial: ";
    cin >> capital;
    cout << "Tasa anual de interés (%): ";
    cin >> tasa;
    cout << "Años de inversión: ";
    cin >> anios;

    for (int i = 1; i <= anios; ++i) {
        capital += capital * (tasa / 100);
        cout << "Año " << i << ": $" << capital << endl;
    }

    return 0;
}

