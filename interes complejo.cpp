#include <iostream>
#include <cmath>
using namespace std;

double calcularInteresCompuesto(double capital, double tasa, int anios) {
    return capital * pow(1 + tasa / 100, anios);
}

int main() {
    double capital, tasa;
    int anios;

    cout << "Capital inicial: ";
    cin >> capital;
    cout << "Tasa de interés (%): ";
    cin >> tasa;
    cout << "Número de años: ";
    cin >> anios;

    double resultado = calcularInteresCompuesto(capital, tasa, anios);
    cout << "Total acumulado: $" << resultado << endl;

    return 0;
}
