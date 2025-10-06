#include <iostream>
#include <string>
using namespace std;

struct Artista {
    string nombre;
    string genero;
};

int main() {
    Artista a;
    int nivelFama;

    cout << "Nombre del artista: ";
    getline(cin, a.nombre);
    cout << "Género musical: ";
    getline(cin, a.genero);
    cout << "Nivel de fama (1-5): ";
    cin >> nivelFama;

    cout << a.nombre << " es un artista de " << a.genero << ". ";

    switch (nivelFama) {
        case 1: cout << "Poco conocido."; break;
        case 2: cout << "Conocido localmente."; break;
        case 3: cout << "Fama mediana."; break;
        case 4: cout << "Muy famoso."; break;
        case 5: cout << "¡Una estrella mundial!"; break;
        default: cout << "Valor de fama inválido."; break;
    }

    cout << endl;
    return 0;
}
