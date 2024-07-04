// public functions
void quickSort(int a[], int n);
void swap(int &a, int &b);

// functions
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void quickSort(int a[], int left, int right){
    int i = left; int j = right;
    int mid = a[(left + right)/2];
    while (i < j){
        while (a[i] < mid) i++;
        while (a[j] > mid) j--;
        if (i <= j){
            swap(a[i], a[j]);
            i++; j--;
        }
    }
    if (left < j) quickSort(a, left, j);
    if (i < right) quickSort(a, i, right);
}