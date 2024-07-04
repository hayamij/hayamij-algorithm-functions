// required
#include <iostream>
struct Node{
    int key;
    Node *left;
    Node *right;
};
Node *findMin(Node *root){
    while(root->left!=NULL)
        root = root->left;
    return root;
}
// public functions
Node *deleteNode(Node *root, int data);
// functions
Node* deleteNode(Node* root, int data) {
    if (root == nullptr) return root; // Base case: empty tree
    if (data < root->key) {
        root->left = deleteNode(root->left, data); // Recurse on the left subtree
    } else if (data > root->key) {
        root->right = deleteNode(root->right, data); // Recurse on the right subtree
    } else {
        // Node with the key to be deleted found
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node* temp = findMin(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}