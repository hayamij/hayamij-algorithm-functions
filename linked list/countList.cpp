// required
#include <iostream>
struct Node{
	int Key;
	Node *Next;
};
// public functions
int countList(Node *pHead);
// functions
int countList(Node *pHead){
    if(pHead == nullptr) return 0;
    else {
        int count = 1;
        while(pHead->Next != nullptr){
            count++;
            pHead = pHead->Next;
        }
        return count;
    }
}