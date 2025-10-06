#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void tablaAmortizacion(double monto, double tasaAnual, int meses) {
    double tasaMensual = tasaAnual / 12 / 100;
    double cuota = monto * (tasaMensual * pow(1 + tasaMensual, meses)) / (pow(1 + tasaMensual, meses) - 1);
    double saldo = monto;

    cout << fixed << setprecision(2);
    cout << "Mes\tCuota\tIntereses\tAmortización\tSaldo\n";

    for (int i = 1; i <= meses; i++) {
        double interes = saldo * tasaMensual;
        double amortizacion = cuota - interes;
        saldo -= amortizacion;
        cout << i << "\t" << cuota << "\t" << interes << "\t\t" << amortizacion << "\t\t" << saldo << "\n";
    }
}

int main() {
    double monto = 10000;
    double tasaAnual = 10;
    int meses = 12;

    tablaAmortizacion(monto, tasaAnual, meses);
    return 0;
}
