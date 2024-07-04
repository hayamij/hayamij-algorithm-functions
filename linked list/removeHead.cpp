// required
#include <iostream>
using namespace std;
struct Node{
	int Key;
	Node *Next;
};
// public functions
void removeHead(Node *&pHead);
// functions
void removeHead(Node *&pHead){
    if(pHead==NULL) cout <<"\nList is empty";
    else{
        Node *temp = pHead;
        pHead = pHead->Next;
        delete(temp);
    }
}