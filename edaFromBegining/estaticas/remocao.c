#include <stdio.h>
#include <stdlib.h>

int remocao(int *v, int k, int n){
    // mover elementos
    int value = v[k];
    for(int j = k+1; j < n; ++j){
        v[j - 1] = v[j];
    }
    return value;
}

int show(int *v, int n){
    for(int i = 0; i < n; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
}


int main(){
    int v[6] = {7, 8, 2, 3, 4, 5};
    int x;

    printf("Digite um indice:");
    scanf("%d", &x);

    int res = remocao(v, x, 6);
    printf("Indice k = %d, possuia o valor %d\n", x, res);

    show(v, 5);

    return 0;
}

