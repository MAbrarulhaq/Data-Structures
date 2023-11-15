#include<iostream>
using namespace std;
class Stack{
    private:
        int *arr;
        int top,capacity;
    public:
        Stack(int size){
            arr=new int[size];
            capacity =size;
            top=-1;
        }
        int push(int val){
            if((top+1)==capacity){
                cout<<"stack overflow:"<<endl;
            }
            top++;
            arr[top]=val;
            return arr[top];
        }
        int pop(){
            if(top==-1){
                cout<<"stack underflowl:"<<endl;
            }
            int val=arr[top];
            cout<<"top element:"<<val<<endl;
            top--;
            return val;
        }
};
int main(){
    Stack s(5);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    cout<<"popping the top element of the stack:"<<endl;
    s.pop();
}