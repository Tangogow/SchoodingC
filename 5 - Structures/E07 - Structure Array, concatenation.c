/*
Ajoutez une fonction concat, qui prend en paramètres deux pointeurs sur Array, et retourne un pointeur sur un nouveau Array qui est la concaténation des deux.
*/

// Array.h

#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct{
  int *tab;
  int size;
}Array;

int getlen(Array ​‍‌‍﻿﻿﻿‌﻿*p1, int);
Array *concat(Array *, Array *);
void freeArray(Array **);
Array *createArray(int, int);
#endif

// Array.h
#include "Array.h"

#include <stdlib.h>
#include <stdio.h>

Array *createArray(int size, int value) {
  Array *array = malloc(sizeof(size) * sizeof(int));
  array->tab = malloc(size * sizeof(int));
  for (int i = 0; i < size; i++) {
    array->tab[i] = value;
  }
  array->size = size;
  return array;
}

void freeArray(Array **array) {
  free(array[0]->tab);
  array[0] = NULL;
  free(*array);
  *array = NULL;
}

int getlen(Array *p1, int val​‍‌‍﻿﻿﻿‌﻿ue) {
  int i = 0;
  while (p1->tab[i] == value)
    i++;
  return i;
}

Array *concat(Array *p1, Array *p2) {
  Array *array = malloc(p1->size + p2->size);
  array->tab = malloc((p1->size + p2->size) * sizeof(int));
  int i = 0;
  for (; i < getlen(p1, p1->tab[0]); i++)
    array->tab[i] = p1->tab[i];
  for (int j = 0; j < getlen(p2, p2->tab[0]); j++)
    array->tab[j + i] = p2->tab[j];
  array->size = p1->size + p2->size;
  return array;
}
