#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int dado1 = rand() % 6 + 1;
    int dado2 = rand() % 6 + 1;
    int sumaReal = dado1 + dado2;
    int intento;

    cout << "Adivina la suma de dos dados (entre 2 y 12): ";
    cin >> intento;

    if (intento == sumaReal)
        cout << "¡Exacto! Muy bien." << endl;
    else if (abs(intento - sumaReal) == 1)
        cout << "Casi lo logras. La suma era " << sumaReal << endl;
    else
        cout << "Incorrecto. La suma era " << sumaReal << endl;

    return 0;
}
