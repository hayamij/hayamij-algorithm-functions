// required
#include <iostream>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
};
// public functions
void findNode(Node *root, int data);
// functions
void findNode(Node *root, int data){
    if (root == NULL){
        cout << "No data found"<<data<<endl;
        return;
    }
    if (root->key == data){
        cout << "Data found "<<data<<endl;
        return;
    }
    if (root->key > data){
        findNode(root->left, data);
    }
    if (root->key < data){
        findNode(root->right, data);
    }
}
