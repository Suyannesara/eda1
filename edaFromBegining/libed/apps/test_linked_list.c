#include "linked_list.h"

int main(){
    LinkedList *L = LinkedList_create();

    // insert elements in the begginig of list
    LinkedList_add_first(L, 5);
    LinkedList_add_first(L, 4);
    LinkedList_add_first(L, 2);
    LinkedList_add_first(L, 10);
    LinkedList_print(L);

    LinkedList_add_end(L, 3);
    LinkedList_print(L);

    return 0;
}
