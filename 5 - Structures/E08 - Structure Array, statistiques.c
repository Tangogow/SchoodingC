/*
Ajoutez les fonctions suivantes :

int minArray(Array* a) : retourne le minimum du tableau
int maxArray(Array* a) : retourne le maximum du tableau
int sumArray(Array* a) : retourne la somme des éléments du tableau
int averageArray(Array* a) : retourne la moyenne du tableau
*/

// Array.h
#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct{
  int *tab;
  int size;
}Array;

int getlen(Array *p1, int);
Array *concat(Array *, Array *);
voi​‍‌‍﻿﻿﻿‌﻿d freeArray(Array **);
Array *createArray(int, int);
int minArray(Array*);
int maxArray(Array*);
int sumArray(Array*);
int averageArray(Array*);

#endif

// Array.c
#include "Array.h"

#include <stdlib.h>
#include <stdio.h>

Array *createArray(int size, int value) {
  Array *array = malloc(sizeof(size) * sizeof(int));
  array->tab = malloc(size * sizeof(int));
  for (int i = 0; i < size; i++)
    array->tab[i] = value;
  array->size = size;
  return array;
}

void freeArray(Array **array) {
  free(array[0]);
  array[0] = NULL;
  free(*array);
  *array = NULL;
}

int getlen(Array *p1, int value) {
  int i = 0;
  while (p1->tab[i] == value)
    i++;
  return i;
}

int​‍‌‍﻿﻿﻿‌﻿ minArray(Array* a) {
  int min = a->tab[0];
  for (int i = 0; i < a->size; i++) {
    if (a->tab[i] < min)
      min = a->tab[i];
  }
  return min;
}

int maxArray(Array* a) {
  int max = a->tab[0];
  for (int i = 0; i < a->size; i++) {
    if (a->tab[i] > max)
      max = a->tab[i];
  }
  return max;
}

int sumArray(Array* a) {
  int sum = 0;
  for (int i = 0; i < a->size; i++)
    sum += a->tab[i];
  return sum;
}

int averageArray(Array* a) {
  int avg = sumArray(a);
  avg /= a->size;
  return avg;
}
