#include "array_list_create.h"

#include <stdlib.h>

struct array_list_int *array_list_create(int capacity_count) {
  struct array_list_int *new_list =
      (struct array_list_int *)malloc(sizeof(struct array_list_int));
  new_list->a = (int *)malloc(sizeof(int) * capacity_count);
  new_list->size = 0;
  new_list->capacity = capacity_count;
  return new_list;
}