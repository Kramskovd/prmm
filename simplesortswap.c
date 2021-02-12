
void SwapMaxSort(double *a, int n, int (*p)(double a, double b));
int swap(double *a, double *b);

void SwapMaxSort(double *a, int n, int (*p)(double a, double b)){
    int i, k, im;// im - номер минимального(максимального) элемента
    double am; // am - значение минимального(максимального) элемента

    for(k = n-1; k >= 1; k-- ){
        am = a[0];
        im = 0;
        for(i = 1; i <=k; i++){
            if(p(a[i], am) > 0){
                am = a[i];
                im = i;
            }
        }

        if(im != k){
            swap(a+im, a+k);
        }
    }
}