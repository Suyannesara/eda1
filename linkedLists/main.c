#include <stdio.h>
#include <stdlib.h>

// # Forma 1
typedef struct node {
    int conteudo;
    struct node *prox;
}celula;

// # Forma 2
// typedef struct node celula;
// struct node{
//     int conteudo;
//     struct celula *prox;
// };

// Lista encadeada
void imprime(celula *le){
    if(le != NULL){
        printf("%d\n", le->conteudo);
        imprime(le->prox, i);
    }
} 


int main (void) {
   printf ("sizeof (celula) = %ld\n", sizeof (celula));
   return EXIT_SUCCESS;
}
