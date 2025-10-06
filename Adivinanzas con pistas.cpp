#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secreto = rand() % 100 + 1;
    int intento;
    int maxIntentos = 5;

    cout << "Adivina el número entre 1 y 100. Tienes " << maxIntentos << " intentos.\n";

    for (int i = 1; i <= maxIntentos; i++) {
        cout << "Intento #" << i << ": ";
        cin >> intento;

        if (intento == secreto) {
            cout << "¡Adivinaste en el intento #" << i << "!" << endl;
            return 0;
        } else if (intento < secreto) {
            cout << "Demasiado bajo.\n";
        } else {
            cout << "Demasiado alto.\n";
        }
    }

    cout << "Se acab
