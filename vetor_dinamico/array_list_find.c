#include "array_list_find.h"

int array_list_find(struct array_list_int* list, int element) {
  for (int i = 0; i < list->size; i++) {
    if (list->a[i] == element) {
      return i;
    }
  }

  return -1;
}