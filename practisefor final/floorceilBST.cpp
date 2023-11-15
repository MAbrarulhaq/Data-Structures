#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* createNode(int key) {
    Node* newNode = new Node();
    if (!newNode) {
        std::cout << "Memory error\n";
        return nullptr;
    }
    newNode->data = key;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

// Function to insert a node in the BST
Node* insertNode(Node* root, int key) {
    if (root == nullptr)
        return createNode(key);
    if (key < root->data)
        root->left = insertNode(root->left, key);
    else if (key > root->data)
        root->right = insertNode(root->right, key);
    return root;
}

// Function to find the floor and ceil of a given key in BST
void findFloorCeil(Node* root, int key, int& floor, int& ceil) {
    if (root == nullptr)
        return;

    if (root->data == key) {
        floor = root->data;
        ceil = root->data;
        return;
    }

    if (key < root->data) {
        ceil = root->data;
        findFloorCeil(root->left, key, floor, ceil);
    } else {
        floor = root->data;
        findFloorCeil(root->right, key, floor, ceil);
    }
}

// Function to find the floor and ceil of a given key in BST
void findFloorCeilWrapper(Node* root, int key) {
    int floor = -1, ceil = -1;
    findFloorCeil(root, key, floor, ceil);

    std::cout << "Key: " << key << std::endl;
    std::cout << "Floor: " << floor << std::endl;
    std::cout << "Ceil: " << ceil << std::endl;
}

int main() {
    Node* root = nullptr;
    root = insertNode(root, 4);
    root = insertNode(root, 2);
    root = insertNode(root, 6);
    root = insertNode(root, 1);
    root = insertNode(root, 3);
    root = insertNode(root, 5);
    root = insertNode(root, 7);

    findFloorCeilWrapper(root, 4);
    findFloorCeilWrapper(root, 1);
    findFloorCeilWrapper(root, 6);
    findFloorCeilWrapper(root, 8);

    return 0;
}