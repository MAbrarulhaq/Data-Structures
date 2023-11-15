#include<iostream>
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
class Clinkedlist{
    private:
        node* head;
        int length;
    public:
        Clinkedlist(){
            head=NULL;
            length=0;
        }
void insertAtHead(int val){
    node* n= new node(val);
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}
void insertAtTail(int val){
    node* value = new node(val);
    node* temp = head;
    if(head == NULL){
        insertAtHead(val);
        return;
    }

    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = value;
    value->next=head;
}
void print(){
    node* curr = head;
    do
    {
        cout<<curr->info<< "->";
        curr = curr->next;
    } while (curr!=head);
    
    cout <<"NULL" << endl;
}
};
int main(){
    Clinkedlist c1;
    c1.insertAtTail(1);
    c1.insertAtTail(2);
    c1.insertAtTail(3);
    c1.insertAtTail(4);
    c1.insertAtTail(5);
    c1.insertAtHead(0);
    c1.print();

}