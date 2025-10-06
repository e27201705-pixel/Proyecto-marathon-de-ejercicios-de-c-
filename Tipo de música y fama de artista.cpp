#include <iostream>
#include <string>
using namespace std;

int main() {
    string musica;
    int fama;

    cout << "¿Qué tipo de música escuchas?: ";
    getline(cin, musica);
    cout << "En una escala del 1 al 10, ¿qué tan famoso es tu artista favorito?: ";
    cin >> fama;

    cout << "¡Genial! Te gusta la música " << musica << " y calificas a tu artista con " << fama << "/10 en fama." << endl;

    return 0;
}
