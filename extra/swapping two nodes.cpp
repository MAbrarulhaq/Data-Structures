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
        void swapnodes(int val1,int val2){
            //node *prev1,*prev2,lpos,rpos;
            node* lpos=head;
            node* rpos=head;
            for(int i=1;i<val1;i++){
                lpos=lpos->next;
            }
            node* temp1=lpos->next;
            for(int i=1;i<val2;i++){
                rpos=rpos->next;
            }
            node* temp2=rpos->next;
            lpos->next=temp2;
            temp1->next =lpos;
            head->next=rpos;
            rpos->next=temp1;
            lpos->next=temp2;
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
    linkedlist l1;
cout<<"-------inserting nodes:-------"<<endl;
    l1.insertion(66,1);
     l1.insertion(22,2);
     l1.insertion(33,3);
     //l1.insertion(44,4);
     l1.insertion(55,4);
     l1.insertion(77,5);

    l1.printing();
    cout<<"AFTER SWAPINT TWO NODES:"<<endl;
    l1.swapnodes(2,4);
    l1.printing();
}