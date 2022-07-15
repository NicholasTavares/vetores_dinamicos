#ifndef __ARRAY__LIST__FIND__
#define __ARRAY__LIST__FIND__
#include "array_list_int.h"

/*
  Busca um elemento no array e retorna seu índice. Se não tiver o elemento,
  retorna -1.
    *list = ponteiro para o array elemento.
    element = elemento a ser procurado no array.
*/

int array_list_find(struct array_list_int* list, int element);

#endif