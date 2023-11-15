#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
        int info;
        node* left;
        node* right;
        node(int val){
            info=val;
            left=NULL;
            right=NULL;
        }     
};
// class linkedlist{
//     private:
//         node* head;
//         int length;
//     public:
//         linkedlist(){
//             head=NULL;
//             length=0;
//         }
// void push(int num){ 
//             node* n=new node(num);

//                 n->next=head;
//                 head=n;
//                 length++;  
//         }

// int pop(){
//         node* temp=head;
//         node* temp1=temp->next;
//         head=temp1;
//         length--;
//         return temp->info;
//         }
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->info<<"\t";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->info<<"\t";
    inorder(root->right);
}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->info<<"\t";
    
}
void printlevelorder(node* root){
    if(root==NULL){
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* node=q.front();
        q.pop();
        if(node!=NULL){
            cout<<node->info<<" ";
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}









int main(){
     node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->left = new node(4);
    root->left->right = new node(5);
    // linkedlist l1;

    // cout<<"root left value="<<(root->left)<<endl;
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
     cout<<endl;
     cout<<"-------printlevelorder:------"<<endl;
    printlevelorder(root);
}