//problem1
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
             if(pos<1 || pos>length+1){
                return;
            }
            node *n=new node(val);
            if(pos==1){
                n->next=head;
               if(head!=NULL){
                 head->prev=n;
               }

                head=n;
                length++;
                
            }
            
            else{
                node *curr=head;
                for(int i=1;i<(pos-1);i++){
                    curr=curr->next;
                }
                n->next=curr->next;
                n->prev=curr;
                if(curr->next!=NULL){
                    curr->next->prev=n;
                }
                curr->next=n;
                length++;
                
           }
        }
        
    void doblytocirculer(){
            node* curr=head->next;
            if(head==NULL){
                cout<<"hello"<<endl;
            }
            while (curr!=NULL){
                curr = curr->next;
                if(curr->info==44){
                    curr->next=head;
                    head->prev=curr;
                    break;
                }
                
                
            }
            // curr->next=head;
            // head->prev=curr;

    }
      void display()
    {
           node* curr = head;
           
            do
            {
                cout<<curr->info<< "->";
                curr = curr->next;
            } while (curr!=head);
            cout<<curr->info<< "->";
            
            cout <<"NULL" << endl;
        
    }
};
int main(){
    Dlinkedlist l1;
    l1.insert(66,1);
    l1.insert(41,2);
    l1.insert(33,3);
    l1.insert(42,4);
    l1.insert(43,5);
    l1.insert(44,6);

    // l1.display();

    l1.doblytocirculer();
    l1.display();

}