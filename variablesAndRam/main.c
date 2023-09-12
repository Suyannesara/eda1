#include <stdio.h>

int main(){
    int c = 10;
    int b;

    printf("Valor de c: %d\n", c);
    printf("Endereco de c: %p\n", &c);
    printf("Valor de b (lixo de mem): %d\n", b);

    return 0;
}

