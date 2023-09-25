#include <stdio.h>
#include <stdlib.h>

// receber 4 valores
// dizer quantos de 5 e 8

int verificar(int i){
    int valor;
    int qtd;

    printf("Digite um valor:");
    scanf("%d", &valor);

    qtd = valor >= 5 && valor <= 8 ? 1 : 0;

    // parada
    if(i == 1){
        // retornar algo
        return qtd;
    }

    int ret = verificar(i - 1);
    return ret + qtd;
}

int main(){
    int res = verificar(4);
    printf("Quantidade entre 5 e 8: %d\n", res);
    return 0;
}
