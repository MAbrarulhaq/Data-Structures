
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
class Dlinkedlist{
    private:
        node* head;
        int length;
    public:
        Dlinkedlist(){
            head=NULL;
            length=0;
        }
        void insert(int val,int pos){
            node* n=new node(val);
            if(pos==1){
                //node* curr=head;
                n->next=head;
                head=n;
                length++;
            }
            else{
                node* curr=head;
                for(int i=1;i<pos-1;i++){
                    curr=curr->next;
                }
                n->next=curr->next;
                n->prev=curr->next;
                curr->next=n; 
                length++;

            }
        }
        void remove(int pos){
            node* curr=head;
            if(pos==1){
                head=head->next;
                delete curr;
                length--;
            }
            else{
                node* temp=head;
                node* slow=head;
                if(pos==length){
                    for(int i=1;i<pos;i++){
                        slow=temp;
                        temp=temp->next;
                    }
                    temp->prev=NULL;
                    delete temp;
                    length--;
                }
                else{
                    for(int i=0;i<pos-1;i++){
                        slow=temp;
                        temp=temp->next;
                    }
                    (temp->next)->prev=slow->next;
                    slow->next=temp->next;
                    delete temp;
                    length--;
                }

            }
        }
        void spliteven(Dlinkedlist &l2,Dlinkedlist &l3){
            int i=1,x=1;

            node* curr=head;
            while(curr!=NULL){
                if(curr->info%2==0){
                    l2.insert(curr->info,i);
                    i+=1;
                    curr=curr->next;
                }
                else{
                    l3.insert(curr->info,x);
                    x+=1;
                    curr=curr->next;
                }
                
            }
            cout<<endl;
        }

        void display(){
            node* curr=head;
           // for(int i=1;i<=length;i++){
            while(curr!=NULL){
                cout<<curr->info<<"->";
                curr=curr->next;
            }
            cout<<"NULL";
            cout<<endl;

        }

        
};
int main(){
    Dlinkedlist l1,l2,l3;
    l1.insert(1,1);
    l1.insert(2,2);
    l1.insert(3,3);
    l1.insert(4,4);
    l1.insert(5,5);
    l1.insert(6,6);
    l1.insert(7,7);
    l1.insert(8,8);
    l1.display();
    cout<<endl;
    // l1.remove(4);
    // l1.display();
    
    l1.spliteven(l2,l3);
    cout<<"spliting data for even "<<endl;
    l2.display();

    cout<<"spliting data for even "<<endl;
    l3.display();
    //l1.splitodd();

}