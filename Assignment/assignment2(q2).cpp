//problem 2
#include<iostream>  
#include<string>
#include<math.h>
#include<stdio.h>
using namespace std;
class node{
    public:
        string info;
        node *next;
        node(string val){
            info=val;
            next=NULL;
        }     
};
class linkedlist{
    private:
        node* head;
        node* head1;
        int length;
        int length1;
    public:
        linkedlist(){
            head=NULL;
            head1=NULL;
            length=0;
            length1=0;
        }
        void push(string num){
            
            
            node* n=new node(num);

                n->next=head;
                head=n;
                length++;  
            
        }
        void push1(string num){
            
            
            node* x=new node(num);

                x->next=head1;
                head1=x;
                length1++;  
                cout<<"two remaining string are :"<<head1->info<<endl;
        }

        
        string pop(){
            node* temp=head;
            node* temp1=temp->next;

                head=temp1;
                length--;
               
               
            return temp->info;
        }
        string pop1(){
            node* temp=head1;
            node* temp1=temp->next;

                head1=temp1;
                length--;
               
               
            return temp->info;
        }
        void comparing(){
            string op1,op2;
            for(int j=1;j<=length;j++){
            op1=pop();
            op2=pop();
            if(op1==op2){
                for(int i=1;i<=length1;i++){
                    push(pop1());
                }
                comparing();
            }
            if(length1==2){
                printing();

            }
            else{
                push1(op1);
                push(op2);
                comparing();
            }

            }
            

        }
         void printing1(){
            node* n=head1;
            while(n!=NULL){
                push(n->info);
               cout<<n->info<<"\t";
              n=n->next;
            }
          }

          void printing(){
            node* n=head;
            while(n!=NULL){
            //   cout<<n->info<<"\t";
              n=n->next;
            }
            cout<<endl;
          }
        
        
        

};
int main(){
        linkedlist l1;
        //cout<<l<<endl;
        l1.push("a");
        l1.push("b");
        l1.push("b");
        l1.push("a");
        l1.push("c");
        l1.push("a");
        l1.comparing();
        // l1.pop();
        // l1.pop();
        // l1.pop();
        // l1.pop();
        // it will reversed when it will popped
        //l1.printing();
}