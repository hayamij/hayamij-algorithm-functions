// required
#include <iostream>
struct Node{
	int Key;
	Node *Next;
};
Node *newNode(int data);
// public functions
void AddHead(Node *&pHead, int data);
// functions
void AddHead(Node *&pHead, int data){
	Node *temp = newNode(data);
	if(pHead == NULL)
		pHead = temp;
	else{
		temp->Next = pHead;
		pHead = temp;
	}
}