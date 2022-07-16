#include "linked_list_push_back.h"

#include <stdlib.h>

#include "list_int_node.h"

unsigned int linked_list_push_back(struct linked_list_int *list, int value) {
  struct list_int_node *new_node =
      (struct list_int_node *)malloc(sizeof(struct list_int_node));
  if (list->size == 0) {
    new_node->prev = NULL;
    new_node->value = value;
    new_node->next = NULL;

    list->first = new_node;
    list->last = new_node;

    list->size++;

    return 1;
  }

  struct list_int_node *current = list->last;
  current->next = new_node;
  new_node->prev = current;
  new_node->next = NULL;
  new_node->value = value;
  list->last = new_node;

  list->size++;

  return 1;
}
