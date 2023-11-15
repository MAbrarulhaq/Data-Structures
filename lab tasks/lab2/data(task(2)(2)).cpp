#include<iostream>
using namespace std;
int main(){
    int a,b,size;
    cout<<"start index:";
    cin>>a;
    cout<<"end index:";
    cin>>b;
    cout<<"enter size:";
    cin>>size;
    char* arr=new char[size];
    char *ptr=arr;
    for(int i=0; i<size; i++){
        cin>>*ptr++;
    }
    char *p=arr;
    p=arr;
    for(int i=0; i<size; i++){
    
        cout<<*(p+a);
        a++;
        if (a==b){
            break;
        }
    }
    cout<<endl;
 }


