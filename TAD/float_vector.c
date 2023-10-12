// implementacao
#include "float_vector.h"
#include <stdlib.h>
#include <stdio.h>

// compile this file using  = gcc -c TAD/float_vector.c -> float_vector.o

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

void append(FloatVector *vec, float val){
    if(vec->size == vec->capacity){
        fprintf(stderr, "ERROR in 'append'\nVector is full\n");
        exit(EXIT_FAILURE);
    }

    vec->data[vec->size] = val;
    vec->size++;
}

void print(FloatVector *vec){
    puts("-----------------------------");
    printf("Size: %d\n", vec->size);
    printf("Capacity: %d\n", vec->capacity);
    puts("---");

    for(int i = 0; i < vec->capacity; i++){
        printf("%.1f  ", vec->data[i]);
    }
    puts("\n------------------------------\n");
}

