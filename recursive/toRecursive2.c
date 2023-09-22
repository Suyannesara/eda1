#include <stdio.h>
#include <stdlib.h>


void fazAlgo(int i){
    if(i < 1 || i > 6){
        printf("\nDigitou errado");
        printf("\nTente novamente!!!");
        scanf("%d", &i);

        //recurivar
        fazAlgo(i);
    }
}

int main(){
    int i;

    printf("\nDigite entre 1 e 6");
    scanf("%d", &i);
    fazAlgo(i);
    printf("\nFIMMM");
    return 0;
}


