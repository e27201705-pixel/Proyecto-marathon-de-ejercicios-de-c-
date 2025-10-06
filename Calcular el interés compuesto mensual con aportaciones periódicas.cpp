#include <iostream>
#include <cmath>
using namespace std;

double interesCompuestoConAportaciones(double capitalInicial, double aporteMensual, double tasaAnual, int meses) {
    double tasaMensual = tasaAnual / 12 / 100;
    double saldo = capitalInicial * pow(1 + tasaMensual, meses);

    for (int i = 1; i <= meses; i++) {
        saldo += aporteMensual * pow(1 + tasaMensual, meses - i);
    }
    return saldo;
}

int main() {
    double capital = 1000;
    double aporte = 100;
    double tasa = 6; // 6% anual
    int meses = 12;

    double resultado = interesCompuestoConAportaciones(capital, aporte, tasa, meses);
    cout << "Saldo final después de " << meses << " meses: $" << resultado << endl;
    return 0;
}


