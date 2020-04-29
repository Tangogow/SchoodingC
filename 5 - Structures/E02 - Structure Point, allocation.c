/*
Ajoutez les fonctions suivantes:

Point* createPoint(float x, float y) : alloue dynamiquement, rempli et retourne un Point, en fonction des paramètres
void freePoint(Point** p) : libère le point, et met son pointeur à NULL
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
  Point *p = ​‍‌‍﻿﻿﻿‌﻿malloc(sizeof(p));
  p->x = x;
  p->y = y;
  return p;
}

void freePoint(Point **p) {
  free(*p);
  *p = NULL;
}
