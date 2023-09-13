#include <stdio.h>

int main(){
    int a = 4;
    int b = 3;
    int *p1, *p2;
    p1 = &a;
    p2 = p1;
    *p2 = (*p1) + 3;
    b = b * (*p1);
    (*p2)++;
    p1 = &b;

    printf("%d  %d\n", *p1, *p2);
    printf("%d  %d\n", a, b);

    return 0;
}
