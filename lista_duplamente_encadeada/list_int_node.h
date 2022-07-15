#ifndef __LIST__INT__NODE__
#define __LIST__INT__NODE__
/*
  Estrutura do nó de uma lista duplamente ligada:
    value = número inteiro
    ∗prev = ponteiro para o elemento anterior
    ∗next = ponteiro para o próximo elemento
*/

struct list_int_node {
  int value;
  struct list_int_node *prev;
  struct list_int_node *next;
};

#endif