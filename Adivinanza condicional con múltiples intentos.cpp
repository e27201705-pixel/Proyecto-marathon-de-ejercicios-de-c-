#include <iostream>
#include <string>
using namespace std;

int main() {
    string respuesta;
    int intentos = 3;

    cout << "Adivinanza: Blanco por dentro, verde por fuera. Si quieres que te lo diga, espera...\n";

    while (intentos--) {
        cout << "¿Qué es?: ";
        getline(cin, respuesta);
        if (respuesta == "pera" || respuesta == "Pera") {
            cout << "¡Correcto!" << endl;
            return 0;
        } else {
            cout << "Incorrecto. ";
            if (intentos > 0)
                cout << "Te quedan " << intentos << " intentos." << endl;
        }
    }

    cout << "¡Se acabaron los intentos! La respuesta era: pera." << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string respuesta;
    int intentos = 3;

    cout << "Adivinanza: Blanco por dentro, verde por fuera. Si quieres que te lo diga, espera...\n";

    while (intentos--) {
        cout << "¿Qué es?: ";
        getline(cin, respuesta);
        if (respuesta == "pera" || respuesta == "Pera") {
            cout << "¡Correcto!" << endl;
            return 0;
        } else {
            cout << "Incorrecto. ";
            if (intentos > 0)
                cout << "Te quedan " << intentos << " intentos." << endl;
        }
    }

    cout << "¡Se acabaron los intentos! La respuesta era: pera." << endl;
    return 0;
}
