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
void inOrder(Node *root);
void nonRecursiveInOrder(Node* root);
// functions
void inOrder(Node *root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        visit(root);
        inOrder(root->right);
    }
}

void nonRecursiveInOrder(Node* root) {
    stack<Node*> stack;
    Node* current = root;
    while (current != nullptr || !stack.empty()) {
        while (current != nullptr) {
            stack.push(current);
            current = current->left;
        }
        current = stack.top();
        stack.pop();
        cout << current->key << " ";
        current = current->right;
    }
}