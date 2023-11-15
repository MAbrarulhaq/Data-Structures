//q3
#include<iostream>
using namespace std;
int multiply(int n,int c){
    
    if(c==0){
        return 1 ;
    }
    c-=1;
    return n*multiply(n,c);
    
}
int main(){
    int n,c;
    cout<<"enter any number:"<<endl;
    cin>>n>>c;
    cout<<multiply(n,c);
}