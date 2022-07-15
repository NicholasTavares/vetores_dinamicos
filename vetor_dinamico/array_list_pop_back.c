#include "array_list_pop_back.h"

#include <stdlib.h>

unsigned int array_list_pop_back(struct array_list_int *list) {
  if (list->size > 0) {
    int *novo = (int *)malloc(sizeof(int) * (list->size--));
    int *antigo = list->a;
    for (int i = 0; i < list->size; i++) {
      *(novo + i) = *(antigo + i);
    }
    list->a = novo;
    free(antigo);
    return 1;
  };

  return -1;
}