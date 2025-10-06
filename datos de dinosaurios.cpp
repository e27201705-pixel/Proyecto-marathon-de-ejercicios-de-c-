#include <iostream>
#include <string>
using namespace std;

struct Dinosaurio {
    string nombre;
    string periodo;
    double longitud;
};

int main() {
    Dinosaurio d1 = {"Tyrannosaurus Rex", "Cretácico", 12.3};
    Dinosaurio d2 = {"Stegosaurus", "Jurásico", 9.0};

    cout << "Nombre: " << d1.nombre << ", Periodo: " << d1.periodo << ", Longitud: " << d1.longitud << " m\n";
    cout << "Nombre: " << d2.nombre << ", Periodo: " << d2.periodo << ", Longitud: " << d2.longitud << " m\n";

    return 0;
}
