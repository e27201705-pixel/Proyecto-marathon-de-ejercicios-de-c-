#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    double capital, tasa;
    int anios;

    cout << "Capital inicial: ";
    cin >> capital;
    cout << "Tasa anual de interés (%): ";
    cin >> tasa;
    cout << "Años: ";
    cin >> anios;

    double total = capital * pow(1 + tasa / 100, anios);
    cout << "Monto final: $" << total << endl;

    ofstream archivo("historial.txt", ios::app);
    archivo << "Capital: " << capital << ", Tasa: " << tasa << "%, Años: " << anios << ", Total: $" << total << endl;
    archivo.close();

    return 0;
}


