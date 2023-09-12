#include <stdio.h>

int main(){
    int a;

    // 4bytes
    printf("sizeof(a) = %ld bytes\n", sizeof(a));
    printf("sizeof(int) = %ld bytes\n", sizeof(int));
    printf("sizeof(float) = %ld bytes\n", sizeof(float));

    // 8bytes (pointeirs - any type + doubles + longs)
    printf("sizeof(long) = %ld bytes\n", sizeof(long));
    printf("sizeof(double) = %ld bytes\n", sizeof(double));
    printf("sizeof(int *) = %ld bytes\n", sizeof(int *));
    printf("sizeof(void *) = %ld bytes\n", sizeof(void *));
    printf("sizeof(int **) = %ld bytes\n", sizeof(int **));
    printf("sizeof(float *) = %ld bytes\n", sizeof(float *));

    return 0;
}
