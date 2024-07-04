// required
#include <iostream>
using namespace std;
struct Node{
	int Key;
	Node *Next;
};
bool findX(Node *pHead, int x);
// public functions
void removeX(Node *&pHead, int x);
// functions
void removeX(Node *&pHead, int x){
    if(findX(pHead,x)==true){
        while(pHead->Next->Key!=x) pHead = pHead->Next;
        Node *temp = pHead->Next;
        pHead->Next = pHead->Next->Next;
        delete(temp);
    }
    else
        cout<<"\nData not found";
}
