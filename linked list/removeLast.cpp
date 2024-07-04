// required
#include <iostream>
using namespace std;
struct Node{
	int Key;
	Node *Next;
};
// public functions
void removeLast(Node *&pHead);
// functions
void removeLast(Node *&pHead){
    if(pHead==NULL) cout <<"\nList is empty";
    else if(pHead->Next == NULL){
        delete(pHead);
        cout <<"List is empty";
    }
    else{
        Node *pHeadTemp = pHead;
        while(pHead->Next->Next != NULL) pHead = pHead->Next;
        Node *temp = pHead->Next;
        pHead->Next = NULL;
        delete(temp);
        pHead = pHeadTemp;
    }
}