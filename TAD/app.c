#include "float_vector.h"
// #include "float_vector.o" // the controle remoto


int main(){
    FloatVector *vec_ref = create(10);

    destroy(&vec_ref);

    return 0;
}
