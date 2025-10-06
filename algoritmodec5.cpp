#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* izq;
    Nodo* der;
};

Nodo* nuevoNodo(int valor) {
    Nodo* nodo = new Nodo();
    nodo->dato = valor;
    nodo->izq = nodo->der = nullptr;
    return nodo;
}

void inorden(Nodo* raiz) {
    if (raiz != nullptr) {
        inorden(raiz->izq);
        cout << raiz->dato << " ";
        inorden(raiz->der);
    }
}

int main() {
    Nodo* raiz = nuevoNodo(4);
    raiz->izq = nuevoNodo(2);
    raiz->der = nuevoNodo(5);
    raiz->izq->izq = nuevoNodo(1);
    raiz->izq->der = nuevoNodo(3);
    
    cout << "Recorrido Inorden: ";
    inorden(raiz);
    return 0;
}