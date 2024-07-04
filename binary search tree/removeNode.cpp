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
void removeNode(Node *&root, int data);
// functions
void removeNode(Node *&root, int data)
{
    Node *originalRoot = root;
    Node *fatherRoot = root;
    if(root == NULL)
        return;
    else
    {
        while(root!=NULL)//browse to node = data
        {
            if(root->key < data)
            {
                fatherRoot = root;
                root = root->right;
            }
            else if(root->key > data)
            {
                fatherRoot = root;
                root = root->left;
            }
            else//when root->key == data
                break;
        }
        if(root->left==NULL && root->right==NULL)//delete leaves
        {
            if(fatherRoot->key > data)
                fatherRoot->left = NULL;
            else if(fatherRoot->key < data)
                fatherRoot->right = NULL;
            delete root;
            root = originalRoot;
            return;
        }
        else if(root->left==NULL && root->right!=NULL)
        {
            Node *temp = root;
            if(fatherRoot->key > data)
                fatherRoot->left = root->right;
            else if(fatherRoot->key < data)
                fatherRoot->right = root->right;
            else if(fatherRoot == root)
            {
                root = root->right;
                delete fatherRoot;
                return;
            }
            delete temp;
            root = originalRoot;
            return;
        }
        else if(root->left!=NULL && root->right==NULL)
        {
            Node *temp = root;
            if(fatherRoot->key > data)
                fatherRoot->left = root->left;
            else if(fatherRoot->key < data)
                fatherRoot->right = root->left;
            else if(fatherRoot == root)
            {
                root = root->left;
                delete fatherRoot;
                return;
            }
            delete temp;
            root = originalRoot;
            return;
        }
        else//node to be deleted has 2 children
        {
            Node *replacementNode = findMin(root->right);
            int tempData = root->key;
            root->key = replacementNode->key;
            replacementNode->key = tempData;
            if(root->right->right==NULL && root->right->left==NULL)//replacement node doesn't have children
            {
                root->right = NULL;
                delete replacementNode;
            }
            removeNode(root->right,tempData);
            root = originalRoot;
            return;
        }
    }
}
