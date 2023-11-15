//q3
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int greater = i;  
    int leftchild = 2 * i + 1; 
    int rightchild = 2 * i + 2;  
    if (leftchild < n && arr[leftchild] > arr[greater]) {
        greater = leftchild;
    }
    if (rightchild < n && arr[rightchild] > arr[greater]) {
        greater = rightchild;
    }
    if (greater != i) {
        swap(arr[i], arr[greater]);
       heapify(arr, n, greater);
    }
}

void conversion(int arr[], int n) {
    for (int i = (n / 2) - 1; i >= 0; i--) {
       heapify(arr, n, i);
    }
}

void print(int arr[], int n) {
    cout << "Max-Heap: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {3, 5, 9, 6, 8, 20, 10, 12, 18, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    conversion(arr, n);
    print(arr, n);
}