#include <stdio.h>
#include <stdlib.h>

int main(){
    // ler vetor de inteiros de 5 posicoes
    int v[5];
    int i = 0;

    for (i; i <= 5; i++) {
        v[i] = rand() % 10 + 1;
    };

    // Definir ponteiro para o vetor
    // IMPORTANTE: O nome do vetor por si soh atua como ponteiro para o endereco de sua primeira posicao
    int *pv = v;
    // &v[0] = 2000 (base) = &v
    // &v[1] = 2004
    // &v[2] = 2008
    // &v[3] = 2012
    // &v[4] = 2016
    // &v[5] = 2020

    // Por meio do ponteiro, imprima todas as posicoes na tela
    int j = 0;
    for (j; j <= 5; j++){
        printf("Posicao de n%d: %d\n", j, v[j]);
    };
    printf("----------");

    j = 0;
    for (j; j <= 5; j++){
        printf("Posicao de n%d: %d\n", j, pv[j]);
    };

    return 0;
}
