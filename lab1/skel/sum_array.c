#include <stdio.h>
#include <stdlib.h>

#define SIZE 10000

int main() {

    int a[SIZE], i;
    long sum = 0;
    
    for (i = 0; i < SIZE; i++) {
        a[i] = i;
    }

    #pragma omp parallel for reduction(+:sum) private(i)
    for (i = 0; i < SIZE; i++) {
        sum += a[i];
    }

    printf("Total sum = %ld\n", sum);

    return 0;
}