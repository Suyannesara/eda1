#include <stdio.h>

int main(){
    // Ler inteiro x DO TECLADO e definir ponteiro para x
    int x;
    int *px = NULL;

    printf(" Digite o valor de x: ");
    scanf("%d", &x);

    px = &x;
    printf("Valor de x antes: %d\n", x);

    // Modificar valor de x por meio do ponteiro
    // *px -> &x = 2000 -> *(2000) = x
    *px = 8;

    // Mostrar valor de x atual 
    printf("Valor de x atual: %d\n", x);
    printf("Valor de x atual: %d\n", *px);

    return 0;
}
