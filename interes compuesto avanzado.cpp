#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, monthlyDeposit;
    int years;

    cout << "Ingrese el monto inicial: ";
    cin >> principal;
    cout << "Ingrese la tasa de interés anual (%): ";
    cin >> rate;
    cout << "Ingrese el depósito mensual: ";
    cin >> monthlyDeposit;
    cout << "Ingrese el número de años: ";
    cin >> years;

    double r = rate / 100 / 12;
    int n = years * 12;
    double total = principal * pow(1 + r, n);
    for (int i = 1; i <= n; i++) {
        total += monthlyDeposit * pow(1 + r, n - i);
    }

    cout << "Total acumulado después de " << years << " años: " << total << endl;
    return 0;
}
