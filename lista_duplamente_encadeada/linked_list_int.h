#ifndef __LINKED__LIST__INT__
#define __LINKED__LIST__INT__
#include "list_int_node.h"

/*
  Estrutura da lista duplamente ligada.
    *first = primeiro nó.
    *last = último nó.
*/

struct linked_list_int {
  struct list_int_node *first;
  struct list_int_node *last;
  unsigned int size;
};

#endif