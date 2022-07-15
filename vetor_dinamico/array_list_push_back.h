#ifndef __ARRAY__LIST__PUSH__BACK__
#define __ARRAY__LIST__PUSH__BACK__
#include "array_list_int.h"
/*
  Insere um inteiro no final do array:
    *a = ponteiro para o array
    x = inteiro a ser inserido
    increment_size = valor de incrementação à capacidade do array
    increment_by_double = sinal para incrementar a capacidade dobrando-a
    erro = ponteiro para variável de erro
*/
unsigned int array_list_push_back(struct array_list_int *a, int x,
                                  int increment_size, char increment_by_double,
                                  int *erro);

#endif