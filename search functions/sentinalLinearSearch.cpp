//public functions
int sentinalLinearSearch(int a[], int n, int x);


// functions
int sentinalLinearSearch(int a[], int n, int x){
    a[n] = x; //đặt lính canh 
    for (int i = 0; ; i++){
        if (a[i]==x){
            if (i == n) return -1;
            return i;
        }
    }
}
