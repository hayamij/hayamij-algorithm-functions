// public functions
void insertionSort(int a[], int n);


// functions
void insertionSort(int a[], int n)
{
	int j;
	for (int i = 1; i < n; i++){
		int temp = a[i];
		for (j = i - 1; j > 0; j--){
			if (a[j] > temp)
				a[j + 1] = a[j];
			else if (a[j] < temp)
				break;
		}
		a[j + 1] = temp;
	}
}
