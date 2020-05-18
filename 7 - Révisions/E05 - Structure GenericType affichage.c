/*
Ajoutez une fonction display, qui prend un GenericType en paramètre, et l'affiche dans la sortie standard.

Dans le cas ou le type représente un double, vous mettrez une précision de 4 décimales.
*/

/* GenericType.h */
#ifndef _GENERICTYPE_H_
#define _GENERICTYPE_H_

typedef enum Type {
  INTEGER,
  REAL,
  STRING,
} Type;

typedef union Value {
  int integer;
 ​‍‌‍﻿﻿﻿‌﻿ double real;
  char string[16];
} Value;

typedef struct GenericType {
  Type type;
  Value value;
} GenericType;

void display(GenericType);

#endif

/* GenericType.c */
#include "GenericType.h"

void display(GenericType gt) {
  if (gt.type == 0)
    printf("%d", gt.value.integer);
  else if (gt.type == 1)
    printf("%.4lf", gt.value.real);
  else if (gt.type == 2)
    printf("%s", gt.value.string);
}
