/*
Ajoutez les fonctions int  comparePeoplesByAge(People* a, People* b) et int  comparePeoplesByName(People* a, People* b) qui retournent :

-1 si a est avant b
1 si a est après b
0 si ils sont égaux
comparePeoplesByAge compare dans l'ordre les champs age, lastname, firstname. C'est a dire d'abord par age croissant, puis pour un même age, par ordre alphabétique.

comparePeoplesByName compare dans l'ordre les champs lastname, firstname, age.C'est a dire d'abord par ordre alphabétique, puis en cas de même nom et prenom, par age croissant.
*/

// People.h
#ifndef _PEOPLE_H_
#define _PEOPLE_H_

typedef struct People People;

struct People {
  char *firstname;
  char *lastname;
  int age;
  P​‍‌‍﻿﻿﻿‌﻿eople *soulmate;
};

People *createPeople(char *, char *, int);
void bindPeoples(People *, People *);
void removePeople(People **p);

#endif

// People.c
#include "People.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

People *createPeople(char *firstname, char *lastname, int age) {
  People *p = malloc(500);
  p->firstname = malloc(500 * sizeof(char));
  p->lastname = malloc(500 * sizeof(char));
  strcpy(p->firstname, firstname);
  strcpy(p->lastname, lastname);
  p->age = age;
  p->soulmate = NULL;
  return p;
}

void bindPeoples(People *a, People *b) {
  if (a->soulmate)
    a->soulmate->soulmate = NULL;
  else if (b->soulmate)
    b->soulmate->soulmate = NULL;
  a->soulmate = b;
  b->soulmate = a;
}

void removePeople(People **p) {
  (*p)->soulmate->soulmate = NULL;
  (*p)->soulmate = NULL;
  free((*p)->soulmate);
  (*p) = NULL;
  free(*p);
}

int  comparePeoplesByAge(People* a, People* b) {
  if (a->age > b->age)
    return 1;
  else if (a->age < b->age)
    return -1;
  else if (a-> age == b->age) {
    if (strcmp(a->lastname, b->lastname) == 0) {
   ​‍‌‍﻿﻿﻿‌﻿   if (strcmp(a->firstname, b->firstname) == 0) {
        return 0;
      }
      else if (strcmp(a->firstname, b->firstname) > 0)
        return 1;
      else if (strcmp(a->firstname, b->firstname) < 0)
        return -1;
      }
    else if (strcmp(a->lastname, b->lastname) > 0)
      return 1;
    else if (strcmp(a->lastname, b->lastname) < 0)
      return -1;
  }
}

int  comparePeoplesByName(People* a, People* b) {
  if (strcmp(a->lastname, b->lastname) == 0) {
    if (strcmp(a->firstname, b->firstname) == 0) {
      if (a->age > b->age)
        return 1;
      else if (a->age < b->age)
        return -1;
      else if (a-> age == b->age)
        return 0;
    }
    else if (strcmp(a->firstname, b->firstname) > 0)
      return 1;
    else if (strcmp(a->firstname, b->firstname) < 0)
      return -1;
    }
  else if (strcmp(a->lastname, b->lastname) > 0)
    return 1;
  else if (strcmp(a->lastname, b->lastname) < 0)
    return -1;
}
