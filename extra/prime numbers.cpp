#include<iostream>
using namespace std;
void mean(int arr[8],int *p){
    p=arr;
    int sum=0;
        for(int i=0;i<8;i++){
         sum+=*(p+i);
        
    }
    cout<<"mean of array:"<<sum/8<<endl;
}
void reverse(int arr[],int *p){
     p=arr;
          for(int i=8;i>=0;i--){
            cout<<"reversing the array:"<<*(p+i)<<endl;

          }
}
void prime(int arr[],int *p){
    int count=0;
    p=arr;
    for(int j=1;j<8;j++){
         int x=*(p+j);
         for(int i=2;i<=x;i++){                                              //2, 3, 5, 7, 11, 13, 17, 19, 23 
                 if(x%i==0)
                      count+=1;  
    }
      
    }
    
    cout<<"total prime numbers in array:"<<count<<endl;

}
int main(){
    int arr[8],*p;
    p=arr;
    cout<<"enter the array:"<<endl;
    for(int i=0;i<8;i++){
        cin>>*p++;
    }
    p=arr;
    mean(arr,p);
    reverse(arr,p);
    prime(arr,p);

   



}