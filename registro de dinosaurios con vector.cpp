#include <iostream>
#include <vector>
using namespace std;

struct Dinosaurio {
    string nombre;
    string dieta;
    double peso;
};

int main() {
    vector<Dinosaurio> lista;
    int cantidad;

    cout << "¿Cuántos dinosaurios quieres registrar?: ";
    cin >> cantidad;
    cin.ignore();

    for (int i = 0; i < cantidad; ++i) {
        Dinosaurio d;
        cout << "Nombre del dinosaurio #" << i+1 << ": ";
        getline(cin, d.nombre);
        cout << "Dieta (herbívoro/carnívoro/omnívoro): ";
        getline(cin, d.dieta);
        cout << "Peso estimado (en toneladas): ";
        cin >> d.weight;
        cin.ignore();
        lista.push_back(d);
    }

    cout << "\n--- Dinosaurios Registrados ---\n";
    for (const auto& d : lista) {
        cout << "Nombre: " << d.nombre << ", Dieta: " << d.dieta << ", Peso: " << d.weight << " toneladas\n";
    }

    return 0;
}
