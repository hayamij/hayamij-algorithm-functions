// public functions
void bubbleSort(int a[], int n);
void swap(int &a, int &b);

// functions
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int a[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = n-1; j > i; j--){
            if (a[j] < a[j-1]){
                swap(a[j],a[j-1]);
            }
        }
    }
}