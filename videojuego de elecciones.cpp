#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    string opciones[] = {"Piedra", "Papel", "Tijera"};
    int eleccionUsuario, eleccionCPU;

    cout << "Elige: 0 = Piedra, 1 = Papel, 2 = Tijera: ";
    cin >> eleccionUsuario;

    eleccionCPU = rand() % 3;
    cout << "CPU eligió: " << opciones[eleccionCPU] << endl;

    if (eleccionUsuario == eleccionCPU)
        cout << "Empate!" << endl;
    else if ((eleccionUsuario == 0 && eleccionCPU == 2) ||
             (eleccionUsuario == 1 && eleccionCPU == 0) ||
             (eleccionUsuario == 2 && eleccionCPU == 1))
        cout << "¡Ganaste!" << endl;
    else
        cout << "Perdiste." << endl;

    return 0;
}
