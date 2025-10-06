#include <iostream>
using namespace std;

bool esValido(int tablero[9][9], int fila, int col, int num) {
    for (int x = 0; x < 9; x++) {
        if (tablero[fila][x] == num || tablero[x][col] == num)
            return false;
    }
    int startFila = fila - fila % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (tablero[i + startFila][j + startCol] == num)
                return false;
    return true;
}

bool resolverSudoku(int tablero[9][9], int fila, int col) {
    if (fila == 9) return true;
    if (col == 9) return resolverSudoku(tablero, fila + 1, 0);
    if (tablero[fila][col] != 0) return resolverSudoku(tablero, fila, col + 1);

    for (int num = 1; num <= 9; num++) {
        if (esValido(tablero, fila, col, num)) {
            tablero[fila][col] = num;
            if (resolverSudoku(tablero, fila, col + 1)) return true;
            tablero[fila][col] = 0;  // Backtrack
        }
    }
    return false;
}

void imprimirTablero(int tablero[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int tablero[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (resolverSudoku(tablero, 0, 0))
        imprimirTablero(tablero);
    else
        cout << "No se encontró solución." << endl;
    return 0;
}