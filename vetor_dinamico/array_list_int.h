#ifndef __ARRAY__LIST__INT__
#define __ARRAY__LIST__INT__
/*
  Estrutura do vetor:
    *a = ponteiro para o endereço de memória dos inteiros do array
    size = quatidade de elementos no array
    capacidade = quantidade máxima possível de elementos no array
*/
struct array_list_int {
  int *a;
  unsigned int size;
  unsigned int capacity;
};
#endif