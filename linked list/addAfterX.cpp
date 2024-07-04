// required
#include <iostream>
using namespace std;
struct Node{
	int Key;
	Node *Next;
};
bool findX(Node *pHead, int x);
Node *newNode(int data);
// public functions
void addAfterX(Node *pHead, int x);
// functions
void addAfterX(Node *pHead, int x){
    if(findX(pHead, x)==true){
        while(pHead->Key != x) pHead = pHead->Next;
        int data;
        cout << "Enter data: ";
        cin >> data;
        Node *temp = newNode(data);
        temp->Next = pHead->Next;
        pHead->Next = temp;
    }
}