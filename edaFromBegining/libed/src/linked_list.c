#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

struct _snode {
    int val;
    SNode *prox;
};

struct _linked_list {
    SNode *begin;
};

// Caso 1 - Lista Vazia
LinkedList *LinkedList_create(){
    LinkedList *L = (LinkedList*)calloc(1, sizeof(LinkedList));
    L->begin = NULL;

    return L;
}

SNode *SNode_create(int val){
    SNode *node = (SNode*)calloc(1, sizeof(SNode));

    node->val = val;
    node->prox = NULL;

    return node;
}

// insercao do nó na cabeça
void LinkedList_add_first(LinkedList *L, int val){
    SNode *node = SNode_create(val);
    // Caso lista vazia - node->prox = NULL
    node->prox = L->begin; 

    L->begin = node;
}