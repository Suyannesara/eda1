#include <stdio.h>

int main(){
    // lei uma variavel inteira
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    // crie ponteiro que aponte para ela
    int *pnum = NULL;
    pnum = &num;

    // valor associado ao endereco
    printf("Valor associado ao endereco guardado pelo ponteiro: %d\n", *pnum);
    printf("Edereco de num: %p\n", pnum);
    printf("Edereco de num: %p\n", &num);

    // num -> 3000
    // pnum = 3000
    // *pnum - *(3000) = num
  
    return 0; 
}
