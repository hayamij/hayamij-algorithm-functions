// required
#include <iostream>
struct Node{
    int key;
    Node *left;
    Node *right;
};
// public functions
int countNode(Node *root);
// functions
int countNode(Node *root)
{
    if(root == NULL)
        return 0;
    else
        return 1 + countNode(root->left) + countNode(root->right);
}