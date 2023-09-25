#include <stdio.h>
#include <stdlib.h>


// 8, 6, 4, 2, 0

// de NUM ate 1, de 2 em 2
void contar(int max){

    if(max != 0){
        printf("%d\n", max);
        contar(max - 2);
    }
}


int main() {
    int max;

    printf("DIgite um numero:");
    scanf("%d", &max);

    contar(max);

    return 0;
}
