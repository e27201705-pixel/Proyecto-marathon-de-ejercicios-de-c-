#include <iostream>
#include <cmath>
using namespace std;

int tiempoParaMeta(double capitalInicial, double tasaAnual, double meta) {
    double tasaMensual = tasaAnual / 12 / 100;
    int meses = 0;
    double saldo = capitalInicial;

    while (saldo < meta) {
        saldo *= (1 + tasaMensual);
        meses++;
    }
    return meses;
}

int main() {
    double capital = 5000;
    double tasa = 5;
    double meta = 10000;

    int meses = tiempoParaMeta(capital, tasa, meta);
    cout << "Meses para alcanzar la meta: " << meses << endl;
    return 0;
}

