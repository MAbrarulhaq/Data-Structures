#include <iostream>
using namespace std;
 
int* insertX(int n, int arr[],
            int x, int pos)
{
    int i;
 
    n++;  // ye logic h ke koi bhi last index ho use age wali ko acces krne ke lia 
 
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    arr[i] = x;
 
    return arr;
}
 
int main()
{
    int arr[100] = { 0 };
    int i, x, pos, n = 10;
 
    for (i = 0; i < 10; i++)
        arr[i] = i + 1;
 
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
 
    x = 50;
 
    pos = 5;
 
    insertX(n, arr, x, pos);
 
    for (i = 0; i < n + 1; i++)
        cout << arr[i] << " ";
    cout << endl;
 
    return 0;
}