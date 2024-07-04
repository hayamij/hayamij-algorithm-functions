// required
#include <iostream>
#include <stack>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
};
void visit(Node *root);
// public functions
void preOrder(Node *root);
void nonRecursivePreOrder(Node* root);
// functions
void preOrder(Node *root)
{
    if(root!=NULL)
    {
        visit(root);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void nonRecursivePreOrder(Node* root) {
    stack<Node*> stack;
    stack.push(root);
    while (!stack.empty()) {
        Node* current = stack.top();
        stack.pop();
        cout << current->key << " ";
        if (current->right) stack.push(current->right);
        if (current->left) stack.push(current->left);
    }
}