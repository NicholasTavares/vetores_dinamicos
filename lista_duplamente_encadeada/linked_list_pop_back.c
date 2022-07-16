#include "linked_list_pop_back.h"

#include <stdlib.h>

unsigned int linked_list_pop_back(struct linked_list_int* list) {
  if (list->size > 0) {
    struct list_int_node* current = list->last;
    list->last = current->prev;
    list->last->next = NULL;
    free(current);
    list->size--;
    return 1;
  }
  return -1;
}