#include <stdio.h>
#include <stdlib.h>

void print_array(double *a, int n);

void print_array(double *a, int n){
    int i;

    for(i = 0; i < n; i++){
        printf("%f ",a[i]);
    }

    printf("\n");
}