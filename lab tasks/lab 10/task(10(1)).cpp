#include <iostream>
using namespace std;
class node { 
   public:
   int info;
   node* left;
   node* right;
};
node* Node(int d) { 
   node* Node = new node();
   Node->info = d;
   Node->left = NULL;
   Node->right = NULL;
   return(Node);
}
int height(node* node) { 
   if(node == NULL)
      return 0;
   return 1 + max(height(node->left), height(node->right));
}
int AVL(node *root) {
   int lh;
   int rh;
   if(root == NULL)
      return 1;
   lh = height(root->left); 
   rh = height(root->right); 
   if(abs(lh-rh) <= 1 || (lh-rh) == -1) ;
   return 1;
}
int main() {
   node *root = Node(7);
   root->left = Node(6);
   root->right = Node(12);
   root->left->left = Node(4);
   root->left->right = Node(5);
   root->right->right = Node(13);
   if(AVL(root))
      cout << "The Tree is AVL Tree"<<endl;
   else
      cout << "The Tree is not AVL Tree "<<endl;
   return 0;
}