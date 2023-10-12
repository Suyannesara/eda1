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

void print(const FloatVector *vec){
    puts("-----------------------------");
    printf("Size: %d\n", vec->size);
    printf("Capacity: %d\n", vec->capacity);
    puts("---");

    for(int i = 0; i < vec->capacity; i++){
        printf("%.1f  ", vec->data[i]);
    }
    puts("\n------------------------------\n");
}

int size(const FloatVector *vec){
    return vec->size;
}

int capacity(const FloatVector *vec){
    return vec->capacity;
}

float get(const FloatVector *vec, int index){
    return vec->data[index];
}

void set(FloatVector *vec, int index, float val){
    if(index >= vec->capacity || index < 0){
        printf("ERROR in 'set'\nProvided index is not valid\n");
        exit(EXIT_FAILURE);
    }

    if(vec->data[index]){
        char confirmation;

        printf("WARN in 'set'\nValue '%.1f' is already assigned to index: %d\n", vec->data[index], index);
        puts("If you desire to keep going with your action, write 'S'");
        scanf("%c", &confirmation);

        switch (confirmation) {
            case 'S':
                vec->data[index] = val;
                break;
            default:
                exit(EXIT_SUCCESS);
                break;
        }
    }

    vec->data[index] = val;
}
