#ifndef __ARRAY__LIST_GET__
#define __ARRAY__LIST_GET__
#include "array_list_int.h"

/*
  Retornar o elemento indicado pelo índice do array
    *list = ponteiro do array
    index = indice do array
    *error = ponteiro de variável de erro
*/

int array_list_get(struct array_list_int *list, int index, int *error);

#endif