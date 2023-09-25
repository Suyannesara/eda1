#include <stdio.h>
#include <stdlib.h>

// 5
// contar(4)
// contar(3)
// contar(2)
// contar(1)
// contar(0)

void contar(int max){
    if(max != 0){
        contar(max - 1);
        printf("%d\n", max);
    }

}

int main(){
    int max;

    printf("Digite um numero:");
    scanf("%d", &max);

    // stopin, chamada inicial
    contar(max);
    
    return 0;
}
