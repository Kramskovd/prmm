
void QuickSort(double *a, int n);
int QuickSortSpliting(double *a, int n);
int swap(double *a, double *b);

int QuickSortSpliting(double *a, int n){
    int left, right;
    double v;

    left = -1;
    right = n;
    v = 0.5*(a[0] + a[n-1]);
    
    while(1){
        while(a[++left] < v);
        while(a[--right] > v);
        if(left >= right){
            return (right < n-1) ? right + 1: right;
        }else{
            swap(a+left, a+right);
        }
    }
}
void QuickSort(double *a, int n){
    int k;
    
    if(n < 2) return;

    k = QuickSortSpliting(a, n);
    QuickSort(a, k);
    QuickSort(a+k, n-k);
}