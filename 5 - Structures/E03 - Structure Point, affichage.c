/*
Ajoutez la fonction displayPoint, qui prend en paramètre un pointeur sur Point et affiche celui-ci sur la sortie standard, au format "(X, Y)", X etant la cordonnée x,et Y, la coordonnée y, toutes deux avec deux décimales.
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
  p->​‍‌‍﻿﻿﻿‌﻿y = y;
  return p;
}

void freePoint(Point **p) {
  free(*p);
  *p = NULL;
}

void displayPoint(Point *p){
    printf("(%.2f, %.2f)", p->x, p->y);
}
