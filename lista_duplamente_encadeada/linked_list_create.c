#include "linked_list_create.h"

#include <stdlib.h>

struct linked_list_int *linked_list_create() {
  struct linked_list_int *new_liked_list =
      (struct linked_list_int *)malloc(sizeof(struct linked_list_int));

  new_liked_list->first = NULL;
  new_liked_list->last = NULL;
  new_liked_list->size = 0;

  return new_liked_list;
}
