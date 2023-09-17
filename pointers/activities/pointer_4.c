#include <stdio.h> 
#include <stdlib.h>

int main(){
    // criar ponteiro do tipo char
    char *ps = (char *)malloc(8 * sizeof(char));

    // ler ponteiro usando scanf e identificador de string
    scanf("%s", ps);
    
    // imprimir string no teclado
    printf("NOME: ");
    int i;
    for(i = 0; ps[i] != '\0'; i++){
        printf("%c", ps[i]);
    }
    // printf("\n");

    return 0;
}
