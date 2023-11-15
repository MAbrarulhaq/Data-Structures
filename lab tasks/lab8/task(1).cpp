// q1
#include<iostream>
#include<cmath>
using namespace std;
bool checkingpower(int n){
    for(int i=1;i<=n;i++){
        int p=pow(4,i);
        if (p==n){
            cout<<"power:"<<i<<endl;
            return true;
        }

    }
    cout<<"false:"<<endl;
    return false;


}
int main(){
    int n;
    cout<<"enter any number:"<<endl;
    cin>>n;
    checkingpower(n);
}