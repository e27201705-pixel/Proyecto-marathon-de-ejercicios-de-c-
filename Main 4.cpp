#include <iostream>
#include <cstring>
using namespace std;

void invertirCadena(char* str) {
    char* inicio = str;
    char* fin = str + strlen(str) - 1;
    while (inicio < fin) {
        swap(*inicio, *fin);
        inicio++;
        fin--;
    }
}

int main() {
    char cadena[] = "OpenAI";
    invertirCadena(cadena);
    cout << "Cadena invertida: " << cadena << endl;
    return 0;
}