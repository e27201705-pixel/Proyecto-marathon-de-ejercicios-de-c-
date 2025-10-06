#include <iostream>
#include <algorithm>
using namespace std;

int kthElemento(int A[], int n, int B[], int m, int k) {
    if (n > m) return kthElemento(B, m, A, n, k);  // A siempre es el más pequeño

    if (n == 0) return B[k - 1];
    if (k == 1) return min(A[0], B[0]);

    int i = min(n, k / 2);
    int j = min(m, k / 2);

    if (A[i - 1] > B[j - 1])
        return kthElemento(A, n, B + j, m - j, k - j);
    else
        return kthElemento(A + i, n - i, B, m, k - i);
}

int main() {
    int A[] = {2, 3, 6, 7, 9};
    int B[] = {1, 4, 8, 10};
    int k = 5;
    cout << "El " << k << "-esimo elemento es " << kthElemento(A, 5, B, 4, k) << endl;
    return 0;
}
