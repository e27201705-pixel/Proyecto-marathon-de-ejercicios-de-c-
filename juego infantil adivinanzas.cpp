#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numeroSecreto = rand() % 100 + 1;
    int intento, intentos = 0;

    cout << "¡Adivina el número (entre 1 y 100)!" << endl;

    do {
        cout << "Tu intento: ";
        cin >> intento;
        intentos++;
        if (intento < numeroSecreto)
            cout << "Demasiado bajo\n";
        else if (intento > numeroSecreto)
            cout << "Demasiado alto\n";
        else
            cout << "¡Correcto! Lo lograste en " << intentos << " intentos." << endl;
    } while (intento != numeroSecreto);

    return 0;
}
