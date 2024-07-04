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
void postOrder(Node *root);
void nonRecursivePostOrder(Node* root);
// functions
void postOrder(Node *root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        visit(root);
    }
}
void nonRecursivePostOrder(Node* root) {
    stack<Node*> output;
    stack<Node*> stack;
    stack.push(root);
    while (!stack.empty()) {
        Node* current = stack.top();
        stack.pop();
        output.push(current);
        if (current->left) stack.push(current->left);
        if (current->right) stack.push(current->right);
    }
    while (!output.empty()) {
        Node* current = output.top();
        output.pop();
        cout << current->key << " ";
    }
}