#include <iostream>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
class bst
{
public:
    node *root;
    bst()
    {
        root = NULL;
    }
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->info<<"\t";
    inorder(root->right);
}
void findTarget(root, k) {
  const int arr = [];
    inorder(node->left);
    arr.push(node->data);
    inorder(node->right);
  }

  inorder(root);

   int  left = 0;
   int right = arr+length - 1;

  while (left < right) {
    const product = arr[left] * arr[right];
    if (product === k) {
      return true;
    } else if (product < k) {
      left++;
    } else {
      right--;
    }
  }

  return false;
}
    node *insert(node *root, int value)
    {
        if (root == nullptr)
        {
            return new node(value);
        }
        if (value < root->data)
        {
            root->left = insert(root->left, value);
        }
        else if (value > root->data)
        {
            root->right = insert(root->right, value);
        }
        return root;
    }

    node *deletenode(node *root, int val)
    {
        if (root == NULL)
        {
            return root;
        }
        if (val < root->data)
        {
            root->left = deletenode(root->left, val);
        }
        else if (val > root->data)
        {
            root->right = deletenode(root->right, val);
        }
        else
        {
            // Case 1: No child
            if (root->left == NULL && root->right == NULL)
            {
                delete root;
                root = NULL;
            }
            // Case 2: One child
            else if (root->left == NULL)
            {
                node *temp = root;
                root = root->right;
                delete temp;
            }
            else if (root->right == NULL)
            {
                node *temp = root;
                root = root->left;
                delete temp;
            }
            // Case 3: Two children
            else
            {
                node *temp = root->right;
                while (temp->left != NULL)
                {
                    temp = temp->left;
                }
                root->data = temp->data;
                root->right = deletenode(root->right, temp->data);
            }
        }
        return root;
    }
    // node*
    // node* findK(node *root, int k)
    // {
    //     if (root == NULL)
    //     {
    //         return root;
    //     }
    //     else if (k > root->data)
    //     {
    //         root->left=

    //     }
    // }
};
int main()
{
    bst b;
    node *root = nullptr;
    root = b.insert(root, 8);
    b.insert(root, 6);
    b.insert(root, 11);
    b.insert(root, 10);
    b.insert(root, 13);
    b.insert(root, 7);
    b.insert(root, 4);
    b.preOrderTraversal(root);

    cout<<endl;
    // b.maxval(root,0);
    cout<<endl;
    cout<<b.getlevel(root,10,0)<<endl;

    // node *result1 = b.deletenode(root, 11);
    // cout << "Inorder traversal of BST after removing 6: ";
    // b.preOrderTraversal(result1);
    // cout << endl;

    return 0;
}