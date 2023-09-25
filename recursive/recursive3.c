#include <stdlib.h>
#include <stdio.h>

// pedir 4 numeros
// retornar maior valor digitado

int verificar(int i){
    int atual;

    printf("Digite um numero:");
    scanf("%d", &atual);

    // parada
    if(i == 1){
        return atual;
    }
    
    int ret = verificar(i - 1);
    if(atual > ret){
        return atual;
    }
    return ret;
}

int main(){
    int test = verificar(4);
    printf("\nValor maior: %d", test);
    
    return 0;
}
