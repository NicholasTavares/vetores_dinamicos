#include "array_list_insert_at.h"

#include <stdlib.h>

unsigned int array_list_insert_at(struct array_list_int *list, int index,
                                  int value) {
  if (index > list->size || index < 0) {
    return -1;
  }
  if (list->size == list->capacity) {
    int *novo = (int *)malloc(sizeof(int) * (list->capacity++));
    int *antigo = list->a;
    for (int i = 0; i < list->size; i++) {
      *(novo + i) = *(antigo + i);
    }
    list->a = novo;
    free(antigo);
  }

  for (int i = list->size; i > index; --i) {
    list->a[i] = list->a[i - 1];
  }

  list->a[index] = value;
  list->size++;
  return 1;
}