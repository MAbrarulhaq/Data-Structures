//task 4
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
        write a code with classes simple
        //given a binary search tree and an integer k,return true if there exist two elements in the bst such that their product equals to k,or false otherwise
        // do code first do inorder of the manually given tree and put it in dynamic array to store tree values then take apply loop on array
        //take first index in array and then take product of first index and the expected index to make sure tow's product give result 
        void deletion(int pos){
            node* temp=head;
            if(pos==1){
                head=head->next;
                delete temp;
            }
            else{
                node* temp1=head;
                for(int i=1;i<pos;i++){
                        temp=temp1;
                        temp1=temp1->next;

                }
                temp->next=temp1->next;
                delete temp1;
            }
// write a program to contruct tree stack object i:g(stack1,stack2,stack3).push any five random numbers into the stack1 .now write a function
// to sort the stack1 in ascending order such that the smallest number is on the top and larest is at the bottom of the stack1.your function can only utilize stack2 and stack3 to sort stack1..Any number popped from any stack can only be stored in another stack. you cannt use anyother  variable
//    make nodes by your self and also make function of push and pop by yourself in class and dont use built in functions in c++     }
//         void average(){
            node* n=head;
            int sum=0;
            while(n!=NULL){
                sum+=n->info;
                n=n->next;
            }
            cout<<"average is "<<sum/length<<endl;
        }
         void printing(){
            node *n=head;
            while(n!=NULL){
                cout<<n->info<<"\t";
                n=n->next;
            }
            cout<<endl;
            cout<<"-----------------------------------:"<<endl;
        }
        void concatenate(linkedlist l2){
            node *n=head;
            
            while(n->next!=NULL){
                //cout<<n->info<<"\t";
                n=n->next;
            }
            node *n1=l2.head;
            n->next=n1;


        }
};
int main(){
     linkedlist l1,l2;
    l1.insertion(66,1);
    l1.insertion(22,2);
    l1.insertion(33,3);
    l1.insertion(45,4);
    l1.insertion(43,5);
    l1.insertion(46,6);
    l1.insertion(23,7);
    l1.printing();

    // l1.deletion(4);
    // l1.printing();
     
    //  l1.average();
    // cout<<"second linked list: "<<endl;

    // l2.insertion(3,1);
    // l2.insertion(4,2);
    // l2.insertion(6,3);
    // l2.insertion(7,4);
    // l2.insertion(2,5);
    // l2.insertion(1,6);
    // l2.insertion(8,7);
    // l2.printing();

    // l1.concatenate(l2);
    // l1.printing();



}