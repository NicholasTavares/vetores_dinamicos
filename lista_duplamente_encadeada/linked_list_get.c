#include "linked_list_get.h"

int linked_list_get(struct linked_list_int *list, int index) {
  if (index >= 0 && index <= list->size) {
    struct list_int_node *node = list->first;
    for (int i = 0; index < list->size; i++) {
      if (index == i) {
        return node->value;
        break;
      }
      node = node->next;
    }
  }
  return -1;
}