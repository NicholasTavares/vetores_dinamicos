#ifndef __LINKED_LIST_PUSH_BACK__
#define __LINKED_LIST_PUSH_BACK__
#include "linked_list_int.h"

/*
    Insere um elemento no final da lista duplamente ligada.
        *list = ponteiro para a lista duplamente ligada.
        value = inteiro a ser inserido no final da lista duplamente ligada.
*/

unsigned int linked_list_push_back(struct linked_list_int* list, int value);

#endif
