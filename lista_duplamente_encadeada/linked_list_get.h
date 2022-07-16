#ifndef __LINKED__LIST__GET__
#define __LINKED__LIST__GET__
#include "linked_list_int.h"

/*
  Retorna um elemento da lista duplamente ligada indicado pelo index.
    *list = ponteiro pra lista duplamente ligada.
    index = indice do elemento para a lista.
*/

int linked_list_get(struct linked_list_int *list, int index);

#endif