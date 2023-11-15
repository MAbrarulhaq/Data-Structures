// task 7
#include<iostream>
using namespace std;
class node{
    public:
        int emp_id;
        string name;
        int salary;
        
        node *next;
        node(int id,string na,int s){
            emp_id=id;
            name=na;
            salary=s;
            next=NULL;
        }     
};
class Queue{
    private:
        node* front;
        node* rear;
        int length;
    public:
        Queue(){
            front=rear=NULL;
            length=0;
        }

        void enqueue(int id,string na,int s){

            node* n = new node(id,na,s);

            if(front == NULL){
                
                front = n;
                rear = n; 
                
            }
            
            rear->next =  n;
            rear = n;
            
            
            
        }
        void printing(){
            node *n=front;
            cout<<"Employee details:"<<endl;
            int i=1;
            while(n!=NULL){
                cout<<i<<" "<<"employee id: "<<n->emp_id<<" name: "<<n->name<<" salary: "<<n->salary<<endl;
                n=n->next;
                i+=1;
                break;
            }
            cout<<endl;
            cout<<"-----------------------------------:"<<endl;
        }
        
};
int main(){
     Queue q1;
    // q1.enqueue(223,"ali",20000);
    // q1.enqueue(345,"hamza",400000);
    // q1.enqueue(467,"abrar",50000);
    // q1.printing();
   int a;
    do{
         
         cout<<"do you want to continue:";
         cin>>a;
         if(a==0){
            break;
         }
        int x,z;
        string y;
        cout<<"enter id and salary:";
        cin>>x>>z;
        cout<<"enter name :";
        cin>>y;
        q1.enqueue(x,y,z);
        q1.printing();
    }while(a!=0);






    


}