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
void preorder(node* root,int val){
    if(root==NULL){
        return ;
    }
    if(root->info==val){
        cout<<root->info;
        //return root->info;
    }
    
    cout<<root->info<<"\t";
    preorder(root->left,val);
    preorder(root->right,val);
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->info<<"\t";
    inorder(root->right);
}
void comparing(node* root,int p){
    if(root==NULL){
        return;
    }
    else if(p>root->info){
        p=root->info;
        cout<<"greater"<<p<<endl;
    }
    else{
        p=root->info;
         cout<<"greater"<<p<<endl;
    }
    //node* node=root->info;
    //cout<<root->info<<"\t";

     comparing(root->left,p);
     comparing(root->right,p);
}
void counting(node* root){
    static int count=0;
    if(root->left==NULL){
        if(root->right==NULL){
        ++count;
        cout<<"counting leafs:"<<count<<endl; 
        return; 
        }
        
        // else{
        //     cout<<"these are not leafs:"<<root->info<<endl;
        // }
    }
    // else{
    //     cout<<"these are not leafs:"<<root->info<<endl;
    // }
    
    
     counting(root->left);
     counting(root->right);
}
void printingchild(node* root,int val){
    if(root==NULL){
        return;
    }
    else if(root->info==val){
        cout<<"root:"<<root->info<<endl;
        preorder(root,val);
        return;
    }


    printingchild(root->left,val);
    printingchild(root->right,val);


}

// void floor_and_ceil(node* root,int val){
//     if(root==NULL){
//         return;
//     }
//     else if(root->info==val){
//         cout<<"floor:"<<root->info<<endl;
//         cout<<"ceil:"<<root->info<<endl;
//         return;
//     }
//     else if(root->info!=val){
//         int t,x;
//         t=preorder(root,val);
//         t+=1;
//         x=preorder(root,t);
//         if(t==x){
//             cout<<"ceil:"<<t<<endl;
//         }
//         else{
//             t-=1;
            
//         }
//         if(root!=val){
//             floor_and_ceil(root->left,val);
//             floor_and_ceil(root->right,val);
//             val+=1;
//             if(root->info==val){

//                 cout<<"ceil:"<<val<<endl;
//             }
//             else{

//             }
//         }
        

//     }
//     else{

//     }
//     floor_and_ceil(root->left,val);
//     floor_and_ceil(root->right,val);
    



// }











int main(){
 node *root = new node(4);
    root->left = new node(2);
    root->right = new node(7);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->left = new node(1);
    //root->left->left->left = new node(0);
    root->left->right = new node(3);
    root->left->left->left = new node(0);
    root->left->left->right = new node(5);
    preorder(root,2);
    cout<<endl;
    // inorder(root);
    // cout<<endl;
    // comparing(root,root->info);
    // cout<<endl;
    counting(root);
    cout<<endl;
    // printingchild(root,2);
    // cout<<endl;
    //floor_and_ceil(root,5);

}