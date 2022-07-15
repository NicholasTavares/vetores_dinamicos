#include "array_list_get.h"

#include <stdio.h>

int array_list_get(struct array_list_int *list, int index, int *error) {
  if (index < 0 && index > list->size) {
    *error = 1;
    return -1;
  }
  return list->a[index];
};