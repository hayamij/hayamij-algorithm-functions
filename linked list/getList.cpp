// required
#include <iostream>
using namespace std;
struct Node{
	int Key;
	Node *Next;
};
// public functions
void getList(Node *pHead);
// functions
void getList(Node *pHead){
    cout << "\nList: ";
    while(pHead != NULL){
        cout << pHead->Key << " ";
        pHead = pHead->Next;
    }
}