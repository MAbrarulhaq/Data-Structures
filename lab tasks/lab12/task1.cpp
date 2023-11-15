//q1
#include<iostream>

using namespace std;

bool maxheap(int arr[],int n){
    int parent;
    for(int i=1;i<n/2;i++){
        parent=arr[i];
        if(parent>arr[2*i] && parent>arr[2*i+1]){

            //  cout<<"it is max heap:"<<endl;
            
        }
        else{
         //   cout<<"it is not a max heap:"<<endl;
            return false;
        }
    }
    return true;
}










int main(){
     int n;
    int arr[]={0,90,15,10,7,12,2};
    n=sizeof(arr)/sizeof(int);
   cout<<n<<endl;
    cout<<maxheap(arr,n)<<endl;

}