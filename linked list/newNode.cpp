// required
#include <iostream>
struct Node{
	int Key;
	Node *Next;
};
// public functions
Node *newNode(int data);
// functions
Node *newNode(int data){
    Node *p = new Node;
    p->Key = data;
    p->Next = NULL;
    return p;
}