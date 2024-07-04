// required
#include <iostream>
struct Node{
    int key;
    Node *left;
    Node *right;
};
// public functions
Node *newNode(int data);
// functions
Node *newNode(int data){
    Node *temp = new Node;
    temp->key = data;
    temp->left = temp->right = NULL;
    return temp;
}