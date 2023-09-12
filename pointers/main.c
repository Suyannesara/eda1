#include <stdio.h>
// store the adress of a variable
// * -> conteudo de um endereco (qual o conteudo do endereco que esta armazenado no ponteiro)
// int*

// todo ponteiro ocupa 8bytes!!!

int main(){
    int a = 10;
    int *p1 = NULL;
    int *p2;

    p1 = &a;

    // ponteiro de ponteiro - armazenar o endereco de um ponteiro
    p2 = p1;

    printf("Valor de p1 = %p\n", p1);
    printf("Endereco de a = %p\n", &a);
    printf("Valor de p2 = %p\n", p2);
    printf("Endereco de p1 = %p\n", &p1);
    printf("Conteudo do endereco de p2 = %d\n", *p2);

    *p2 = 4;

    printf("Agora o conteudo do endereco de p2 eh = %d\n", *p2);

    return 0;
}


 
