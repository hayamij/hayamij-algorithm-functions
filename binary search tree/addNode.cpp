// required
#include <iostream>
struct Node{
    int key;
    Node *left;
    Node *right;
};
Node *newNode(int data);
// public functions
void addNode(Node *&root,int data);
// functions
void addNode(Node *&root,int data)
{
    if(root==NULL)
        root = newNode(data);
    else
    {
        if(root->key > data)
            addNode(root->left,data);
        if(root->key < data)
            addNode(root->right,data);
    }
}