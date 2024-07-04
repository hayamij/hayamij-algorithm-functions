// required
#include <iostream>
struct Node{
	int Key;
	Node *Next;
};
// public functions
void removeAll(Node *&pHead);
// functions
void removeAll(Node *&pHead){
    while(pHead!=NULL){
        Node *temp = pHead;
        pHead = pHead->Next;
        delete(temp);
    }
}