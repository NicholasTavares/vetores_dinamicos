#include "linked_list_push_back.h"
#include "list_int_node.h"
#include <stdlib.h>

unsigned int linked_list_push_back(linked_list_int * list, int i) {
    struct list_int_node * new_node = (struct list_int_node *)malloc(sizeof(struct list_int_node));
    if (linked_list_int->size == 0) {
        linked_list_int->first = new_node;
        linked_list_int->first->prev = NULL;
        linked_list_int->first->next = linked_list_int->last;
        linked_list_int->first->value = i;

        linked_list_int->last = (struct list_int_node *)malloc(sizeof(struct list_int_node));
        linked_list_int->last->prev -> linked_list_int->first;
        linked_list_int->last->next -> NULL;

        return 1;
    }
}
