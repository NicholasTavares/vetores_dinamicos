#include "array_list_push_back.h"

#include <stdlib.h>

unsigned int array_list_push_back(struct array_list_int *a, int x,
                                  int increment_size, char increment_by_double,
                                  int *erro) {
  *erro = 1;
  if (a->size == a->capacity) {
    a->capacity =
        increment_by_double ? a->capacity * 2 : a->capacity + increment_size;
    int *novo = (int *)malloc(sizeof(int) * (a->capacity));
    int *antigo = a->a;
    for (int i = 0; i < a->size; i++) {
      *(novo + i) = *(antigo + i);
    }
    a->a = novo;
    free(antigo);
  }
  a->a[a->size++] = x;
  *erro = 0;
  return 1;
}