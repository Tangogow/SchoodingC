/*
On souhaite créer un type générique, qui puisse être soit un entier, soit un réel, soit une chaîne de caractères.

On indiquera le type actuellement stocké grâce à une enum, et on stockera la valeur dans une union.



Définissez l'enum Type qui contient trois valeurs : INTEGER, REAL, STRING

Définissez l'union Value qui contient trois champs :

un entier integer
un double real
un tableau de 16 char string
Définissez la structure GenericType qui contient 2 champs :

un Type type
une Value value
L'utilisation devra pouvoir être :

GenericType gt;
gt.type = INTEGER;
gt.value = 45;
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
  double real;
  char string[16];
} Value;

typedef struct GenericType {
    Type type;
    Value value;
} GenericType;

#endif

/* GenericType.c */
#include "Ge​‍‌‍﻿﻿﻿‌﻿nericType.h"
