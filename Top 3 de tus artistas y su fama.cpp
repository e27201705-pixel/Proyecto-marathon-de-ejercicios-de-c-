#include <iostream>
using namespace std;

int main() {
    string artistas[3];
    int fama[3];

    cout << "Ingresa tus 3 artistas favoritos y su fama (1-10):\n";
    for (int i = 0; i < 3; i++) {
        cout << "Artista #" << i+1 << ": ";
        getline(cin, artistas[i]);
        cout << "Fama (1-10): ";
        cin >> fama[i];
        cin.ignore();
    }

    cout << "\n--- Tus artistas ---\n";
    for (int i = 0; i < 3; i++) {
        cout << artistas[i] << " tiene fama " << fama[i] << "/10\n";
    }

    return 0;
}

