// implementacao
#include "float_vector.h"
#include <stdlib.h>
#include <stdio.h>

struct float_vector {
    int capacity; // num maximo de elementos
    int size; // qtd atual de elementos aramazenados
    float *data; // vetor de floats
};

/**
 * @brief
 * 
 * @param capacity Capacidade do vetor
 * @return
*/

FloatVector *create(int capacity){
    // alocar um espaco para uma variavel do tipo float vector

    // criar a caixinha que representa o struct definido
    FloatVector *vec = (FloatVector*)calloc(1, sizeof(FloatVector));

    // alimentar esse floatVector
    vec->capacity = capacity;
    vec->size = 0;
    vec->data = (float*)malloc(capacity * sizeof(float));

    return vec;
}

void destroy(FloatVector **vec_ref){
    // desalocar free(POINTER)
    // vec_ref = pointer para vec pointer na stack
    // vec_ref -> vec (pointer na heap)
    FloatVector *vec = *vec_ref;

    free(vec->data);
    free(vec);

    *vec_ref = NULL;
}

int main(){
    create(5);
    return 0;
}



