#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int arr[]={3,2,4,1,5};
    int size=sizeof(arr)/sizeof(int);
    bubbleSort(arr, size);
    for (int f = 0; f <size; f++) {
        cout<<"array is :"<<arr[f]<<endl;
    }
    cout<<"smallest number in array is:"<<arr[0]<<endl;
    cout<<"largest number in array is:"<<arr[size-1]<<endl;

}