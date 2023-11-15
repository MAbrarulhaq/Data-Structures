#include<iostream>
using namespace std;
int main(){
    int num[]={2,7,11,12},t;
    int x;
    cout<<"Enter the target :"<<endl;
    cin>>t;
    for(int k=0;k<=4;k+=1){
          x=num[k];
          for(int i=0;i<=4;i+=1){
             if(x+num[i]==t){
                cout<<"target approuch and indices are:"<<"{ "<<k<<", "<<i<<" }"<<endl;
             }
    }
    }
}