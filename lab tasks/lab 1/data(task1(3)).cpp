#include<iostream>
using namespace std;
int find_small_val(int A[],int s ){
    for(int i=1;i<s+1;i+=1){
        for(int z=0;z<s+1;z+=1){
              if(i==A[z]){ 
                break;
              }
              else if(z==s){
                return i;
              }

        }
    }
}

int main(){
    int A[] = {1,3,6,4,1,2};
    int size=sizeof(A)/sizeof(int);
    int v=find_small_val(A,size);
    cout<<"the return number is:"<<v<<endl;
    

}