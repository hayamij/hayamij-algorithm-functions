// required
#include <iostream>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
};
// public functions
void visit(Node *root);
// functions
void visit(Node *root)
{
    cout <<" "<<root->key;
}