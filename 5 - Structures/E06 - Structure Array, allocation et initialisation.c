/*
Ajoutez deux fonctions :

Array* createArray(int size, int value) : alloue dynamiquement un Array de taille size, initialise toutes les cases à value, et le retourne.
void freeArray(Array** array) : libère completement le Array pointé, et met son pointeur à NULL
*/

// Array.h
#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct{​‍‌‍﻿﻿﻿‌﻿
  int *tab;
  int size;
}Array;

#endif

// Array.c
#include "Array.h"

#include <stdlib.h>
#include <stdio.h>

Array *createArray(int size, int value) {
  Array *array = malloc(sizeof(size) * sizeof(int));
  array->tab = malloc(size * sizeof(int));
  for​‍‌‍﻿﻿﻿‌﻿ (int i = 0; i < size; i++)
    array->tab[i] = value;
  array->size = size;
  return array;
}

void freeArray(Array **array) {
  free(array[0]->tab);
  array[0] = NULL;
  free(*array);
  *array = NULL;
}
