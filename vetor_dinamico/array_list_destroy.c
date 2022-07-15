#include "array_list_destroy.h"

#include <stdlib.h>

void array_list_destroy(struct array_list_int* list) {
  free(list->a);
  free(list);
}