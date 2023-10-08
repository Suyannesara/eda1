#include <stdio.h>
#include <stdlib.h>

// #BUSCA 1 - FOR
int busca(int *v, int x, int size){
    for(int i = 0; i < size; i++){
        if(v[i] == x){
            return i;
        }
    }

    // nao existem indices negativos no array, portanto nao existe um indice no qual o x esteja
    return -1;
}

// #BUSCA 2 - Recursivo
int buscaR(int *v, int x, int size, int i){
    // condicao de parada
    if(i == size){
        return -1;
    }

    if(v[i] == x){
        return i;
    }
    
    i++;
    return buscaR(v, x, size, i);
}

// #BUSCA 3 desafio - BuscaR sem o I!
int buscaR2(int *v, int x, int size){
    // condicao de parada
    if(size == 0) return - 1;
    if(v[size - 1] == x) return size - 1;

    return buscaR2(v, x, (size - 1));
}

int mock(int *v, int size){
    int i;
    for(i = 0; i < size; i++){
        v[i] = rand()%10;
        // v[i] = i;
    }
}

int show(int *v, int size){
    for(int i = 0; i < size; i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
}


// #REMOCAO 1
int removeItem(int k, int length, int v[]){
    int x = v[k]; // k == i

    for(int j = k+1; j < length; ++j){
        v[j-1] = v[j];
    };

    return x;
}

int main(){
    int size = 10;
    int v[size];

    mock(v, size);
    show(v, size);

    // int res_busca = busca(v, 9, size);
    int res_busca = buscaR2(v, 7, size);
    // printf("Busca: %d\n", res_busca);

    removeItem(5, size, v);
    printf(" ------------- Depois ----------------\n");
    size-=1;
    show(v, size);

    return 0;
}