#include <stdio.h>

int fatorial(int n){
    // caso base - ponto de parada
    if(n == 0)
        return 1;

    // n * (n - 1)
    // 3 * 2!
    return n * fatorial(n - 1);       
}

int main(){
    // gatilho externo
    int n;
    scanf("%d", &n);
    printf("Resultado: %d", fatorial(n));

    return 0;
}

