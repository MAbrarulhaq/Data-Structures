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
        void insertion(int val,int pos){
            node* n=new node(val);
            if(head==NULL){
                n->next=head;
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
                length++;
            }
         }
         void insertaftervalue(int val){
            if(head==NULL){
                return;
            }
            node* temp=head;
            while(temp!=NULL){
                if(temp->info==val){
                    node* n=new node(100);
                    n->next=temp->next;
                    temp->next=n;
                    length++;
                }
                temp=temp->next;
            }
            

         }
          void deletion(int val){
            node* temp=head;
            node* temp1=NULL;

            
            while(temp!=NULL){
                if(temp->info==val){
                
                head=temp->next;
                delete temp;
                return;
        
            }

            else if(temp->next->info==val){
                temp1=temp->next;
                temp->next=temp->next->next;
                delete temp1;
            }
            temp=temp->next;
            }
            length--;
          }

          
          

         

         void insertathead(int val){
            node* temp=head;
            while(temp!=NULL){
                if(temp->info==val){
                    node* n=new node(101);
                    n->next=temp;
                    head=n;
                    length++;
                }
                temp=temp->next;
            }
            

         }

        void printing(){
            node* n=head;
            while(n!=NULL){
              cout<<n->info<<endl;
              n=n->next;
            }
             cout<<endl;
        }
};
int main(){
    linkedlist l1;
cout<<"-------inserting nodes:-------"<<endl;
    l1.insertion(66,1);
     l1.insertion(22,2);
     l1.insertion(33,3);
     l1.insertion(44,4);
     l1.insertion(55,5);
     l1.insertion(77,6);

    l1.printing();
cout<<"-------inserting at middle:-------"<<endl;
    l1.insertaftervalue(33);
    l1.printing();
cout<<"-------inserting at head:-------"<<endl;
    l1.insertathead(66);
    l1.printing();
cout<<"-------deleting node:-------"<<endl;   
    l1.deletion(66);
    l1.printing();

}