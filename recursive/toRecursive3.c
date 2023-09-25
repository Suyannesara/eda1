#include <stdio.h>
#include <stdlib.h>


void fazAlgo(int i){
    if(i < 3){
        printf("%d\n", i);
        fazAlgo(i+1);
    }
}


int main(){
    int i = 0;
    fazAlgo(i);

    return 0;
}
