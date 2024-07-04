// required
#include <iostream>
struct Node{
    int key;
    Node *left;
    Node *right;
};
// public functions
void rightTurn(Node *&root);
// functions
void rightTurn(Node *&root)
{
    Node *originalRoot = root;
    root = root->left;
    if(root->right == NULL)
    {
        root->right = originalRoot;
        originalRoot->left = NULL;
    }
    else
    {
        originalRoot->left = root->right;
        root->right = originalRoot;
    }
}
