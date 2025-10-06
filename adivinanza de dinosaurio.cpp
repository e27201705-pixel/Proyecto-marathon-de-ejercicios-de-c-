#include <iostream>
#include <string>
using namespace std;

int main() {
    string respuesta;
    cout << "Pista: Soy un carnívoro gigante del periodo Cretácico, con dientes enormes. ¿Quién soy?: ";
    getline(cin, respuesta);

    if (respuesta == "Tyrannosaurus" || respuesta == "Tyrannosaurus Rex" || respuesta == "t-rex")
        cout << "¡Correcto!" << endl;
    else
        cout << "Incorrecto. Era el Tyrannosaurus Rex." << endl;

    return 0;
}
