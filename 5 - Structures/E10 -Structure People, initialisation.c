/*
Ecrire une fonction People* createPeople(char* firstname, char*  lastname, int age), qui alloue un nouveau People l'initialise avec des copies des paramètres fournis.
*/

// People.h
#ifndef _PEOPLE_H_
#define _PEOPLE_H_

typedef struct{
  char *firstname;
  char *las​‍‌‍﻿﻿﻿‌﻿tname;
  int age;
}People;

People *createPeople(char *, char *, int);

#endif

// People.c
#include "People.h"
#include <string.h>
#include <stdlib.h>

People *createPeople(char *firstname, char *lastname, int age) {
  People *p3 = malloc(100);
  p3->firstname = malloc(strlen(​‍‌‍﻿﻿﻿‌﻿firstname) * sizeof(char));
  p3->lastname = malloc(strlen(lastname) * sizeof(char));
  strcpy(p3->firstname, firstname);
  strcpy(p3->lastname, lastname);
  p3->age = age;
  return p3;
}:
