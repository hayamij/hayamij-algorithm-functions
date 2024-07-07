//public functions
int sentinalLinearSearch(int a[], int n, int x);


// functions
int sentinalLinearSearch(int a[], int n, int x) { 
    a[n] = x;  
    for (int i = 0; ;i++){ 
        if (a[i] == x) return i;
    }
    return -1;
}
