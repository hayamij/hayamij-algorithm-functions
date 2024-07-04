// required
#include <iostream>
struct Node{
	int Key;
	Node *Next;
};
Node *newNode(int data);
void addHead(Node *&pHead, int data);
// public functions
void addLast(Node *&pHead, int data);
// functions
void addLast(Node *&pHead, int data){
    if(pHead == NULL) addHead(pHead, data);
    else{
        Node *temp = newNode(data);
        while(pHead->Next != NULL) pHead = pHead->Next;
        pHead->Next = temp;
    }
}