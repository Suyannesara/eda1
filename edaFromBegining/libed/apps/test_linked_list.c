#include "linked_list.h"

int main(){
    LinkedList *L = LinkedList_create();

    LinkedList_add_first(L, 5);
    LinkedList_add_first(L, 4);
    LinkedList_add_first(L, 2);
    LinkedList_add_first(L, 10);

    LinkedList_print(L);
    LinkedList_end(L);

    // LinkedList_remove_from_head(L);
    LinkedList_remove(L, 10);

    LinkedList_print(L);
    LinkedList_end(L);

    return 0;
}
