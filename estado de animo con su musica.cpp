#include <iostream>
#include <string>
using namespace std;

string recomendarMusica(string estado) {
    if (estado == "feliz") return "Pop";
    if (estado == "triste") return "Blues";
    if (estado == "enojado") return "Rock";
    if (estado == "relajado") return "Lo-fi";
    return "Explora nuevos géneros.";
}

int main() {
    string estado;
    cout << "¿Cómo te sientes hoy (feliz, triste, enojado, relajado)?: ";
    getline(cin, estado);

    cout << "Te recomendamos escuchar: " << recomendarMusica(estado) << endl;
    return 0;
}
