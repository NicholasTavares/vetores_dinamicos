#ifndef __ARRAY__LIST__INSERT__AT__
#define __ARRAY__LIST__INSERT__AT__
#include "array_list_int.h"

/*
  Insere um inteiro no índice indicado no array
    *list = ponteiro para o array.
    index = indice que indica onde será incluído o inteiro.
    value = inteiro a ser inserido
*/

unsigned int array_list_insert_at(struct array_list_int* list, int index,
                                  int value);

#endif