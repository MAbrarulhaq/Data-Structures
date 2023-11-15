
#include<iostream>
using namespace std;
class Node{
	public:
		Node *left;
		Node*right;
		int info;
		int height;

		Node(int info)
		{
			this->info=info;
			height=0;
			left=right=NULL;
		}
};

class AVLtree{
	private:

	Node*root;
	void makeEmpty(Node* t);
	Node* insert(int x,Node*t);
	Node* leftleftrotate(Node* &C);
	Node* rightrightrotate(Node*&C);
	
	Node* leftrightrotate(Node* &C);
	Node* rightleftrotate(Node* &C);
	int height(Node*t);
	int getBalance(Node*t);
	void inorder(Node *t);
	
	public:
		AVLtree()
		{
			root=NULL;
		}
		void insert(int x){
			root=insert(x,root);
		}
	
		void display()
		{
			inorder(root);
			cout<<endl;
		}

	
};



Node* AVLtree::leftleftrotate(Node* &A)
{
    Node* newNode = A->right;
    A->right = newNode->left;
    newNode->left = A;
    A->height = max(height(A ->left), height(A ->right)) + 1;
    newNode ->height = max(height(newNode->right), A->height) + 1;
    return newNode;
}

Node* AVLtree::rightrightrotate(Node* &C)
{
    Node* newNode = C->left;
    C->left = newNode->right;
    newNode->right = C;
    C->height = max(height(C ->left), height(C ->right)) + 1;
    newNode ->height = max(height(newNode->left), C->height) + 1;
    return newNode;
}

Node* AVLtree::leftrightrotate(Node*& t)
{
    t->left = leftleftrotate(t->left);
    return rightrightrotate(t);
}

Node* AVLtree::rightleftrotate(Node*& t)
{
    t->right = rightrightrotate(t->right);
    return leftleftrotate(t);
}

void AVLtree::inorder(Node *t)
{
	if(t==NULL)
	return;
	inorder(t->left);
	cout<<t->info<<" ->";
	inorder(t->right);
}
int AVLtree::height(Node* t)
{
	return(t==NULL ? -1 : t->height);
}
int AVLtree::getBalance(Node*t)
{
	if(t==NULL)
	return 0;
	else 
	return height(t->left) - height(t->right);
}
	
	
void AVLtree::makeEmpty(Node* t) {
        if(t == NULL)
            return;
        makeEmpty(t->left);
        makeEmpty(t->right);
        delete t;
    }
	
Node*  AVLtree::  insert(int x, Node* t)
    {
        if(t == NULL)
        {
            t = new Node (x);
        }
        else if(x < t->info)
        {
            t->left = insert(x, t->left);
            if(height(t->left) - height(t->right) == 2)
            {
                if(x < t->left->info)
                    t = rightrightrotate(t);
                else
                    t = leftrightrotate(t);
            }
        }
        else if(x > t->info)
        {
            t->right = insert(x, t->right);
            if(height(t->right) - height(t->left) == 2)
            {
                if(x > t->right->info)
                    t = leftleftrotate(t);
                else
                    t = rightleftrotate(t);
            }
        }

        t->height = max(height(t->left), height(t->right))+1;
        return t;
    }
   
   

int main()
{
	AVLtree tree1;
	tree1.insert(1);
	tree1.insert(2);
	tree1.insert(7);
	tree1.insert(4);
	tree1.insert(5);
    tree1.insert(6);

	tree1.insert(3);

	tree1.display();
	
}