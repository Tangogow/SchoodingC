/*
Ajoutez la fonction add, qui prend en paramètre deux pointeurs sur Point et retourne un pointeur sur un Point nouvellement alloué, qui à comme coordonnées les sommes des deux pointeurs passés en paramètres.
*/

// Point.h
#ifndef _POINT_H_
#define _POINT_H_

typedef struct{
  float x;
  float y;
​‍‌‍﻿﻿﻿‌﻿}Point;

Point *createPoint(float x, float y);
void freePoint(Point** p);

#endif

// Point.c
#include "Point.h"

#include <stdlib.h>
#include <stdio.h>

Point *createPoint(float x, float y) {
  Point *p = malloc(sizeof(p));
  p->x = x;
  p->y = y;
  return p;
}

void freePoint(Point **p) {
  free(*p);
  *p = NULL;
}​‍‌‍﻿﻿﻿‌﻿

void displayPoint(Point *p){
  printf("(%.2f, %.2f)", p->x, p->y);
}

Point *add(Point *p1, Point *p2) {
  Point *p = malloc(sizeof(p1) + sizeof(p2));
  p->x = p1->x + p2->x;
  p->y = p1->y + p2->y;
  return p;
}
