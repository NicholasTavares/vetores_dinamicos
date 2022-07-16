#ifndef __LIKED__LIST__FIND__
#define __LIKED__LIST__FIND__
#include "linked_list_int.h"

/*
  Retorna ou não o índice de um determinado elemento.
    *list = ponteito para lista duplamente ligada.
    element = elemento que pode ou não ter seu índice retornado.
*/

int linked_list_find(struct linked_list_int* list, int element);

#endif