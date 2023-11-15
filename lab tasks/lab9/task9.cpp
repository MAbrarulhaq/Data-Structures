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
        return;
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

    void floorCeil(Node* root, int key, int& floor, int& ceil) {
        if (root == nullptr)
            return;

        if (root->data == key) {
            floor = key;
            ceil = key;
            return;
        }

        if (root->data > key) {
            ceil = root->data;
            floorCeil(root->left, key, floor, ceil);
        } else {
            floor = root->data;
            floorCeil(root->right, key, floor, ceil);
        }
    }

    void findFloorCeil(int key) {
        int floor = -1;
        int ceil = -1;

        floorCeil(root, key, floor, ceil);

        std::cout << "The floor of " << key << " is ";
        if (floor != -1)
            std::cout << floor;
        else
            std::cout << "does not exist";
        std::cout << ", and the ceil of " << key << " is ";
        if (ceil != -1)
            std::cout << ceil;
        else
            std::cout << "does not exist";
        std::cout << std::endl;
    }










int main(){
 node *root = new node(4);
    root->left = new node(2);
    root->right = new node(7);
    //root->right->left = new node(6);
   // root->right->right = new node(7);
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
    // counting(root);
    // cout<<endl;
    printingchild(root,2);
    cout<<endl;
    //floor_and_ceil(root,5);

}
