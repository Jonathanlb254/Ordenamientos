#include <iostream>

using namespace std;

// Función para ordenamiento burbuja
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Intercambiar elementos si están en el orden incorrecto
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Función para búsqueda binaria
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1; // Si el elemento no está presente en el arreglo
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int x = 1;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        cout << "El elemento " << x << " no se encuentra en el arreglo." << endl;
    else
        cout << "El elemento " << x << " se encuentra en el índice " << result << " del arreglo." << endl;

    return 0;
}

