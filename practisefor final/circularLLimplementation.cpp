//cll
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
class linkedlist{
    private:
        node* head;
        int length;
    public:
        linkedlist(){
            head=NULL;
            length=0;
        }

        void printing(){
            node *n=head;
            do{
                cout<<n->info<<"\t";
                n=n->next;
            }while(n!=head);
            //cout<<n->info<<endl;
            cout<<endl;
            cout<<"-----------------------------------:"<<endl;
        }
        void insertion(int val,int pos){
            node* n=new node(val);
            if(pos==1){
                n->next=head;
                head=n;
                head->next=head;
                length++;
            }
            else{
                node* curr=head;
                for(int i=1;i<pos-1;i++){
                    curr=curr->next;
                }
                n->next=curr->next;
                curr->next=n;
                n->next=head;
                length++;

            }

        }
        void remove(int pos){
            cout<<"length "<<length<<endl;
            if(pos==1){
               
                node* curr=head;
                node* temp=head;
                if(head->next==head){
                    delete curr;
                }
                while(curr->next!=head){
                    curr=curr->next;
                }
                head=head->next;
                curr->next=head;
                delete temp;
            }
            else if(pos==length){
                 node* left=head;
                 node* right=head;
                 for(int i=1;i<pos;i++){
                    left=right;
                    right=right->next;
                 }
                 left->next=head;
                 delete right;
            }
            else{
                node* curr=head;
                node* temp=head;
                for(int i=1;i<pos;i++){
                    temp=curr;
                    curr=curr->next;
                }
                cout<<curr->info<<endl;
                temp->next=curr->next;
                delete curr;


            }


        }














};
int main(){
     linkedlist l1;
    l1.insertion(66,1);
    l1.insertion(22,2);
    l1.insertion(33,3);
    l1.insertion(45,4);
    l1.insertion(43,5);
    l1.insertion(46,6);
    l1.insertion(23,7);
    l1.printing();

    cout<<"removing a node: "<<endl;
    l1.remove(6);
    l1.printing();

}