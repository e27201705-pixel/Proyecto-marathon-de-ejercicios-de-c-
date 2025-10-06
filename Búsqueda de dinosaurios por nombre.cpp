#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> dinos = {"Tyrannosaurus", "Triceratops", "Velociraptor", "Brachiosaurus"};
    string busqueda;
    bool encontrado = false;

    cout << "Ingresa el nombre de un dinosaurio: ";
    getline(cin, busqueda);

    for (const auto& d : dinos) {
        if (d == busqueda) {
            encontrado = true;
            break;
        }
    }

    if (encontrado)
        cout << busqueda << " está en la base de datos." << endl;
    else
        cout << "No se encontró a " << busqueda << "." << endl;

    return 0;
}
