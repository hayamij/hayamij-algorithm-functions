// required
#include <iostream>
struct Node{
	int Key;
	Node *Next;
};
// public functions
bool findX(Node *pHead, int x);
// functions
bool findX(Node *pHead, int x){
    while(pHead!=NULL){
        if(pHead->Key == x) return true;
        pHead = pHead->Next;
    }
    return false;
}