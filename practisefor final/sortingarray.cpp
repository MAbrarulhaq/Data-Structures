#include <iostream>
using namespace std;

void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap elements arr[j] and arr[j + 1]
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 3};
    int size = sizeof(arr) / sizeof(*arr);

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }

    bubbleSort(arr, size);

    cout << "\nSorted array: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }

    
}