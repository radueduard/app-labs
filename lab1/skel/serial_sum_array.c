#include <stdio.h>
#include <stdlib.h>

#include <omp.h>

#define SIZE 10000

int main() {

    int a[SIZE], i;
    long sum = 0;
    
    for (i = 0; i < SIZE; i++) {
        a[i] = i;
    }


    double t1 = omp_get_wtime();
    for (i = 0; i < SIZE; i++) {
        sum += a[i];
    }
    double t2 = omp_get_wtime();

    printf("Total sum = %ld in %lf\n", sum, t2 - t1);

    return 0;
}