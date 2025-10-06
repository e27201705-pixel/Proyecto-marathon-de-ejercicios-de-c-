include <iostream>
using namespace std;

void hanoi(int n, char origen, char destino, char auxiliar) {
    if (n == 1) {
        cout << "Mover disco 1 de " << origen << " a " << destino << endl;
        return;
    }
    hanoi(n - 1, origen, auxiliar, destino);
    cout << "Mover disco " << n << " de " << origen << " a " << destino << endl;
    hanoi(n - 1, auxiliar, destino, origen);
}

int main() {
    int n = 3;
    hanoi(n, 'A', 'C', 'B');
    return 0;
}