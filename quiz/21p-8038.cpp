#include<iostream>
using namespace std;
class node{
    public:
        int info;
        node *next;
        node *prev;
        node(int val){
            info=val;
            next=NULL;
            prev=NULL;
        }     
};
class DBLYlinkedlist{
    private:
        node* head;
        int length;
    public:
        DBLYlinkedlist(){
            head=NULL;
            length=0;
        }
        void insertion(int val,int pos){
            node* n=new node(val);
            if(head==NULL){
                n->next=head;
                n->prev=head;
                head=n;
                length++;
                return;
            }
            else{
                node* temp=head;
                for(int i=1;i<pos-1;i++){
                    temp=temp->next;
                }
                n->next=temp->next;
                temp->next=n;
                n->prev=temp;
                length++;
            }
         }
         void swapping(){
            if(head==NULL){
                return;
            }
            node* curr=head;
            node* temp=head;
          //  cout<<"temp1 is pointing to even position"<<endl;
            node* temp1=temp->next;
           // cout<<"temp is pointing to odd positions:"<<endl;
                temp=temp->next->next;

                 curr->next=temp;
                 temp->prev=curr;
                // take pointer to the next node of temp
                 node* n=temp->next;
                temp->next=n->next->prev;
                 temp1->next=n->prev;
                 n->prev=temp1->next;
                // temp->next=n->next->prev;
                 n->next->prev=temp->next;
                 temp1->prev=temp->next;
                 temp->next=temp1->prev;

          }


       void printing(){
            node* n=head;
            while(n!=NULL){
              cout<<n->info<<"\t";
              n=n->next;
            }
            cout<<endl;

        }
};
int main(){
    DBLYlinkedlist l1;
cout<<"-------inserting nodes:-------"<<endl;
    l1.insertion(1,1);
     l1.insertion(2,2);
     l1.insertion(3,3);
     l1.insertion(4,4);
     l1.insertion(5,5);

    l1.printing();


    l1.swapping();
    l1.printing();

    
}