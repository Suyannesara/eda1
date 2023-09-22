#include <stdio.h>
#include <stdlib.h>


void fazAlgo(){
    int item;

    printf("\n1-dizer oi");
    printf("\n2-dizer tchau");
    printf("\n0-sair");

    scanf("%d", &item);
    // switch (item)
    // {
    // case 0:
    // // recursividade aqui
    //     break;
    // case 1:
    //     printf("\nOIIIO");
    //     fazAlgo();
    //     break;
    // case 2:
    //     printf("\nTCHAUU");
    //     fazAlgo();
    //     break;
    // }

    switch (item)
    {
    case 1:
        printf("\nOIIIO");
        break;
    case 2:
        printf("\nTCHAUU");
        break;
    };

    if(item != 0){
        fazAlgo();
    };
}

int main(){
    fazAlgo();
    return 0;
}


