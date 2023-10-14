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

void LinkedList_print(const LinkedList *L){
    SNode *atual = L->begin;

    while(atual != NULL){
        printf("%d -> ", atual->val);
        atual = atual->prox;
    }
    printf("NULL\n");
}

void LinkedList_add_last(LinkedList *L, int val){
    // cria o no
    SNode *novo_no = SNode_create(val);

    // se vazia
    if(L->begin == NULL){
        L->begin = novo_no;
    }else{
        SNode *atual = L->begin;
        // percorre a lista para achar o ultimo
        while(atual->prox != NULL){
            atual = atual->prox;
        }
        
        atual->prox = novo_no;
    }
}




