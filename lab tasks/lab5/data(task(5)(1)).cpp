//q1
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
         void reverse(){
            node* curr=head;
            node* rev=head;
            while(curr!=NULL){
                 curr=curr->next;
            }
            //node* temp1=rev->next;
            node* temp=rev->next;
            curr->next=temp->prev;
            temp->prev=curr->next;


            temp->next=rev->prev;
            rev->prev=temp->next;
            // curr=prev;
            // prev=temp;
            
            // prev=prev->next;
            // curr=curr->prev;

            
         }
          void Remove(int pos){
             node *current = head;
             if (pos == 1){
                head = head->next;
                head->prev = NULL;
                delete current;
                length--;

                 cout << "POSITION to removed: " << pos <<endl;
        }
        else
        {
            node *prevNode = NULL;

            for (int i = 1; i < pos; i++)
            {
                prevNode = current;
                current = current->next;
            }

            prevNode->next = current->next;
            (current->next)->prev = prevNode;

            delete current;
            length--;

            cout << "POSITION to removed " << pos <<endl;
        }
    }
      void display()
    {
        node *current = head;

        for (int i = 1; i <= length; i++)
        {
            cout << current->info<<endl;
            current = current->next;
        }
        
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

    l1.display();

}