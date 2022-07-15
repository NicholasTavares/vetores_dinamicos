#include <stdio.h>

#include "linked_list_create.h"

int main() {
  struct linked_list_int* linked_list = linked_list_create();

  printf("Ponteiro first %p\n", linked_list->first);
  printf("Ponteiro last %p\n", linked_list->last);

  return 0;
}