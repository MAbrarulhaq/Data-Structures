//problem3
#include<iostream>  
#include<string>
#include<math.h>
#include<stdio.h>
using namespace std;
class node{
    public:
        string info;
        node *next;
        node(string val){
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
        void push(string num){
            
            
            node* n=new node(num);

                n->next=head;
                head=n;
                length++; 
                // cout<<"two remaining string are :"<<head1->info<<endl;
        }

        
        string pop(){
            node* temp=head;
            node* temp1=temp->next;
                head=temp1;
                length--;
               
            return temp->info;
        }
        void matching(string s){                        //  "{()}[]" //foo(bar[i)
             int n=s.length();
             for(int i=0;i<=n;i++){
                string x;
                x=s[i];
                if(x=="{" || x=="[" || x=="("){
                    push(x);
                }
                else if(x=="}" || x=="]" || x==")"){
                    string op;
                    op=pop();
                    if(x==")"){
                        if(op=="("){
                            cout<<"success:"<<endl;
                            cout<<"balanced:"<<endl;
                        }
                        else{
                            cout<<"because of no matching:"<<i+1<<endl;
                            break;
                    }
                    }
                    else if(x=="}"){
                        if(op=="{"){
                            cout<<"success:"<<endl;
                            cout<<"balanced:"<<endl;
                        }
                        else{
                            cout<<"because of no matching:"<<i+1<<endl;
                            break;
                    }
                    }
                    else if(x=="]"){
                        if(op=="["){
                            cout<<"success:"<<endl;
                            cout<<"balanced:"<<endl;
                        }
                        else{
                            cout<<"because of no matching:"<<i+1<<endl;
                            break;
                    }
                    }

                }
                else{
                    cout<<x<<endl;
                }
             }







        }

};
int main(){
        linkedlist l1;
        string s="foo(bar[i)";
        l1.matching(s);
}