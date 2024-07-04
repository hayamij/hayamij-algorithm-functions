// required
#include <iostream>
using namespace std;
// public functions
void arrayOut(int a[], int n);
// functions
void arrayOut(int a[], int n){
    for (int i = 0; i < n; i++){
        cout <<" a["<<i<<"] = "<<a[i]<<endl;
    }
}
