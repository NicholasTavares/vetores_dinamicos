#include "linked_list_find.h"

int linked_list_find(struct linked_list_int* list, int element) {
  if (list->size > 0) {
    struct list_int_node* current = list->first;
    for (int i = 0; i < list->size; i++) {
      if (current->value == element) {
        return i;
        break;
      }
      current = current->next;
    }
    return -1;
  }
  return -1;
}