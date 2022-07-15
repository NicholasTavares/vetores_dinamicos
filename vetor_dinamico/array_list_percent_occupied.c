#include "array_list_percent_occupied.h"

double array_list_percent_occupied(struct array_list_int* list) {
  double percent = 1.0;
  if (list->size < list->capacity) {
    percent = ((double)list->size) / ((double)list->capacity);
  }
  return percent;
}