#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "array_list_capacity.h"
#include "array_list_create.h"
#include "array_list_find.h"
#include "array_list_get.h"
#include "array_list_insert_at.h"
#include "array_list_percent_occupied.h"
#include "array_list_pop_back.h"
#include "array_list_push_back.h"
#include "array_list_remove_from.h"
#include "array_list_size.h"

void print_vector(struct array_list_int *a) {
  printf(" (%u %u) { ", a->size, a->capacity);
  for (int i = 0; i < a->size; ++i) {
    printf("%d ", a->a[i]);
  }
  printf("}\n");
}

int main() {
  clock_t inicio, fim;
  int capacity_count;
  scanf("%d", &capacity_count);
  struct array_list_int *a1 = array_list_create(capacity_count);
  int erro;
  inicio = clock();
  for (int i = 0; i < 10; i++) {
    array_list_push_back(a1, i, capacity_count, 0, &erro);
    if (erro) {
      printf("Erro na memória!\n");
      break;
    }
  }

  fim = clock();

  print_vector(a1);
  array_list_remove_from(a1, 5);
  print_vector(a1);
  printf("Tempo aproximado de processo: %.6lf ms \n",
         ((double)(fim - inicio) / (CLOCKS_PER_SEC / 1000.0)));
}