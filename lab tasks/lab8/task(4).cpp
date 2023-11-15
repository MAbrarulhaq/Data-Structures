//q4
#include<iostream>
#include<cmath>
using namespace std;
int checkingpower(int n,int i=1){
    
    if(pow(3,i)==n){
        cout<<"power:"<<i<<endl;
        return true;
    }
    else{
    i+=1;
    if(i>n){   
        cout<<"not a power of 3:"<<endl;
        return 0;
     }
    return checkingpower(n,i);
    }
}
int main(){
    int n,i;
    cout<<"enter values for n then i:"<<endl;
    cin>>n>>i;
    checkingpower(n,i);
}