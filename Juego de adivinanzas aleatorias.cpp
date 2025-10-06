#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string preguntas[] = {
        "Tiene agujas pero no cose",
        "Blanco por dentro, verde por fuera",
        "Oro parece, plata no es"
    };
    string respuestas[] = {"reloj", "pera", "platano"};

    srand(time(0));
    int index = rand() % 3;
    string intento;
    int intentos = 3;

    cout << "Adivinanza: " << preguntas[index] << endl;

    while (intentos--) {
        cout << "Tu respuesta: ";
        getline(cin, intento);
        if (intento == respuestas[index]) {
            cout << "¡Correcto!" << endl;
            return 0;
        } else {
            if (intentos > 0)
                cout << "Incorrecto. Intenta de nuevo. Te quedan " << intentos << " intentos.\n";
        }
    }

    cout << "¡Perdiste! La respuesta era: " << respuestas[index] << endl;

    return 0;
}


