// required
#include <iostream>
#include <time.h>
// public functions
void arrayIn(int a[], int n);
// functions
void arrayIn(int a[], int n){
    srand(time(0));
    for (int i = 0; i < n; i++){
        a[i] = rand()%199-99;
        for (int j = 0; j < i; j++){
            if (a[j] == a[i]){
                a[i] = rand()%199-99;
                j = -1;
            }
        }
    }
}
