#include <stdio.h>

#include "linked_list_create.h"
#include "linked_list_find.h"
#include "linked_list_get.h"
#include "linked_list_pop_back.h"
#include "linked_list_push_back.h"
#include "linked_list_size.h"

void print_linked_list(struct linked_list_int* list) {
  struct list_int_node* node = list->first;
  printf(" (%u) { ", list->size);
  for (int i = 0; i < list->size; ++i) {
    printf("%d ", node->value);
    node = node->next;
  }
  printf("}\n");
}

int main() {
  struct linked_list_int* linked_list = linked_list_create();
  linked_list_push_back(linked_list, 7);
  linked_list_push_back(linked_list, 5);
  linked_list_push_back(linked_list, 9);
  linked_list_push_back(linked_list, 12);
  linked_list_push_back(linked_list, 19);

  print_linked_list(linked_list);

  printf("Resultado pop list %d\n", linked_list_pop_back(linked_list));

  print_linked_list(linked_list);

  printf("Tamanho da lista %d\n", linked_list_size(linked_list));

  printf("Índice do elemento %d\n", linked_list_find(linked_list, 12));

  return 0;
}