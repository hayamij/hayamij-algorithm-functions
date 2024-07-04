// public functions
void interchangeSort(int a[], int n);
void swap(int &a, int &b);

// functions
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void interchangeSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if (a[j] > a[i]){
				swap(a[j], a[i]);
			}
		}
	}
}