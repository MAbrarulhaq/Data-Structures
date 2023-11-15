//q2
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int smallest = i;  
    int left = 2 * i + 1;  
    int right = 2 * i + 2;  
    if (left < n && arr[left] < arr[smallest]) {
        smallest = left;
    }
    if (right < n && arr[right] < arr[smallest]) {
        smallest = right;
    }
    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
}

void buildMinHeap(int arr[], int n) {
    int startIdx = (n / 2) - 1;
    for (int i = startIdx; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

void printHeap(int arr[], int n) {
    cout << "MIN HEAP " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 10, 3, 5, 1};
    int n = sizeof(arr) / sizeof(int);

    buildMinHeap(arr, n);
    printHeap(arr, n);
}