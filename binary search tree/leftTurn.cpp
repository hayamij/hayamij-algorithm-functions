// required
#include <iostream>
struct Node{
    int key;
    Node *left;
    Node *right;
};
// public functions
void leftTurn(Node *&root);
// functions
void leftTurn(Node *&root)
{
    Node *originalRoot = root;
    root = root->right;
    if(root->left == NULL)
    {
        root->left = originalRoot;
        originalRoot->right = NULL;
    }
    else
    {
        originalRoot->right = root->left;
        root->left = originalRoot;
    }
}
