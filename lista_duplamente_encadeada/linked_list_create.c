#include "linked_list_create.h"

#include <stdlib.h>

struct linked_list_int *linked_list_create() {
  struct linked_list_int *new_liked_list =
      (struct linked_list_int *)malloc(sizeof(struct linked_list_int));

  new_liked_list->first =
      (struct list_int_node *)malloc(sizeof(struct list_int_node));

  new_liked_list->first->next = new_liked_list->first;
  new_liked_list->first->prev = new_liked_list->first;

  new_liked_list->last = new_liked_list->first;

  new_liked_list->size = 0;

  return new_liked_list;
}