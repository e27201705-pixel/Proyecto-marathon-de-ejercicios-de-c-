#include <iostream>
#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;  // Elemento no encontrado
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    int result = binarySearch(arr, target);
    if (result != -1)
        cout << "Elemento encontrado en el índice " << result << endl;
    else
        cout << "Elemento no encontrado" << endl;

    return 0;
}


