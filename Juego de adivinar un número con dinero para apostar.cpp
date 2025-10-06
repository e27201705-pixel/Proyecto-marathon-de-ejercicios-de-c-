#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void juegoAdivinarNumero(double dineroInicial, double apuesta, double meta) {
    srand(time(nullptr));
    double dinero = dineroInicial;
    int ronda = 0;

    while (dinero > 0 && dinero < meta) {
        ronda++;
        int numeroSecreto = rand() % 10 + 1;
        int intento;
        cout << "Ronda " << ronda << " - Adivina el número (1-10): ";
        cin >> intento;

        if (intento == numeroSecreto) {
            dinero += apuesta * 10;
            cout << "¡Correcto! Dinero: " << dinero << endl;
        } else {
            dinero -= apuesta;
            cout << "Incorrecto, el número era " << numeroSecreto << ". Dinero: " << dinero << endl;
        }
    }

    if (dinero >= meta)
        cout << "¡Felicidades! Alcanzaste la meta con $" << dinero << endl;
    else
        cout << "Perdiste todo el dinero." << endl;
}

int main() {
    juegoAdivinarNumero(100, 10, 500);
    return 0;
}
