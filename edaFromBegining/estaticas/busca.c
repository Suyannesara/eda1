// Dado um inteiro x e um vetor 
// v[0..n-1] de inteiros, encontrar x em v, ou seja, encontrar um índice k tal que v[k] == x.

#include <stdio.h>
#include <stdlib.h>

// int busca(int *v, int x, int n){
//     int k = n - 1;
//     while(k >= 0 && v[k] != x){

//         k--;
//     }
//     return k;
// }

int busca(int *v, int x, int n){
    for(int k = 0; k < n; k++){
        if(v[k] == x) return k;
    }
    return -1;
}


int main(){
    int v[6] = {7, 8, 2, 3, 4, 5};
    int x;

    printf("Digite um numero:");
    scanf("%d", &x);

    int res = busca(v, x, 6);
    printf("Indice k = %d, possui o elemento x = %d", res, x);

    return 0;
}

