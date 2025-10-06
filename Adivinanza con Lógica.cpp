#include <iostream>
#include <string>
using namespace std;

int main() {
    string respuesta;
    cout << "Adivina: Tiene agujas pero no cose, ¿qué es? ";
    getline(cin, respuesta);

    if (respuesta == "reloj" || respuesta == "Reloj")
        cout << "¡Correcto!" << endl;
    else
        cout << "Incorrecto. Era: reloj." << endl;

    return 0;
}

