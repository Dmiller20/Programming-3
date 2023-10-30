#include <iostream>
//very basic binary search tree

struct node 
{
    int data;
    node* left;
    node* right;

};

node* createNode(int data) 
{
    node* newNode = new node();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

int main()
{
    node* root = createNode(3);
    root->left = createNode(1);
    root->right = createNode(4);
    root->left->left = createNode(0);

    return 0;
}
