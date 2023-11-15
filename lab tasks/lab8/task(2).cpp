//q2
#include<iostream>
#include<cmath>
using namespace std;
int checkingpower(int n,int i=1){
    
    if(pow(4,i)==n){     //comparing the powers of 4 with n;
        cout<<"power:"<<i<<endl;
        return true;
    }
    else{
    i+=1;
    if(i>n){   
        cout<<"not a power of 4:"<<endl;
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