#include<iostream>  
#include<string>
#include<math.h>
#include<stdio.h>
using namespace std;
class node{
    public:
        int info;
        node *next;
        node(int val){
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
        void push(int num){
            
            
            node* n=new node(num);

                n->next=head;
                head=n;
                length++;

            
            
        }
        void reverse(node* temp){
             node* x=new node(temp->info);
                 x->next=head1;
                 head1=x;
                length1++;

        }
        int pop(){
            node* temp=head;
            node* temp1=temp->next;
                head=temp1;
                length--;
                reverse(temp);
               
            return temp->info;
        }

          void printing(){
            node* n=head1;
            while(n!=NULL){
              cout<<n->info<<"\t";
              n=n->next;
            }
            cout<<endl;

        }
        

};
int main(){
        linkedlist l1;
        //cout<<l<<endl;
        l1.push(3);
        l1.push(4);
        l1.push(5);
        l1.push(6);
        l1.pop();
        l1.pop();
        l1.pop();
        l1.pop();
        // it will reversed when it will popped
        l1.printing();
}