#include "array_list_remove_from.h"

#include <stdio.h>
#include <stdlib.h>

int array_list_remove_from(struct array_list_int *list, int index) {
  if (index > list->size || index < 0) {
    return -1;
  }

  for (int i = index; i < list->size - 1; ++i) {
    list->a[i] = list->a[i + 1];
  }
  list->size--;
  return 1;
}