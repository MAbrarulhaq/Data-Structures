#include<iostream>
using namespace std;
void reverse(int size,int *ptr){
    for(int i=size;i>0;i--){
        cout<<"array in reverse :"<<*ptr--<<endl;
    }
}
void decending(int size,int *ptr){
	for(int j=0;j<size;j++){
     for(int i=1; i<=size; i++){
        int *temp;
            if((ptr+i)>(ptr+i+1)){
                temp=(ptr+i+1);
                *(ptr+i+1)=*(ptr+i);
                *(ptr+i)=*temp;

            }
     }
 }
      for(int i=0; i<size; i++){
        cout<<"decending order array:"<<*ptr++<<endl;
      }
      cout<<"second largest number:"<<*ptr<<endl;
    
}
// void findmode(){
    
// }
void mean(int size,int *ptr){
    int sum=0;
    for(int i=0;i<size;i++){
         sum+=*ptr;
         ptr++;
    }
    int mean=sum/size;
    cout<<"Average of array elements:"<<mean<<endl;

}
int main(){
    int size;
    cout<<"enter the size of array:"<<endl;
    cin>>size;
    int* arr=new int[size];

    int *ptr=arr;
    cout<<"element of array:";
    for(int i=0; i<size; i++){
        cin>>*ptr;
        ptr++;
    }
    ptr=arr;
    mean(size,ptr);
    ptr=(arr+size-1);
    reverse(size,ptr);
    ptr=arr;
    decending(size,ptr);
    // for(int i=size;i<=size;i--){
    //     cout<<"array in reverse :"<<*ptr--<<endl;
    // }



    

}