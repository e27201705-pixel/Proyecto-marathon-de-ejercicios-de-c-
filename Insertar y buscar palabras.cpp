#include <iostream>
#include <unordered_map>
using namespace std;

struct NodoTrie {
    unordered_map<char, NodoTrie*> hijos;
    bool esFinal;

    NodoTrie() : esFinal(false) {}
};

class Trie {
private:
    NodoTrie* raiz;

public:
    Trie() { raiz = new NodoTrie(); }

    void insertar(string palabra) {
        NodoTrie* nodo = raiz;
        for (char c : palabra) {
            if (!nodo->hijos[c]) {
                nodo->hijos[c] = new NodoTrie();
            }
            nodo = nodo->hijos[c];
        }
        nodo->esFinal = true;
    }

    bool buscar(string palabra) {
        NodoTrie* nodo = raiz;
        for (char c : palabra) {
            if (!nodo->hijos[c]) return false;
            nodo = nodo->hijos[c];
        }
        return nodo->esFinal;
    }
};

int main() {
    Trie trie;
    trie.insertar("hola");
    trie.insertar("hola123");
    trie.insertar("holanda");

    cout << (trie.buscar("hola") ? "Encontrado" : "No encontrado") << endl;
    cout << (trie.buscar("holanda") ? "Encontrado" : "No encontrado") << endl;
    cout << (trie.buscar("holi") ? "Encontrado" : "No encontrado") << endl;
    return 0;
}

