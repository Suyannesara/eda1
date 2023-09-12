#include <stdio.h>

int main(){
    float z = 2.5;
    float *fp = NULL;

    fp = &z;

    //&z
    printf("&z = %f\n", *&z); // 2.5
    //fp
    printf("fp = %f\n", *fp); // 2.5
    //&fp
    printf("&fp = %f\n", **&fp); // 2.5

    return 0;
}
