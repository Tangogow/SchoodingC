/*
Ajoutez un champs soulmate, qui pointe vers un autre People, représentant l’âme sœur de la personne courante. La valeur est initialisée à NULL dans createPeople.

Ajouter une fonction void bindPeoples(People* a, People* b), qui fait en sorte que a et b soient les âmes sœurs l'une de l'autre. Si a ou b étaient déjà en couple, rendre leur ancienne âme sœur célibataire.

Ajoutez une fonction void removePeople(People** p) qui :

met a jour le People pointé par soulmate, si il existe (si on supprime Jean, et que Jeanne est son âme sœur, Jeanne n'a plus d’âme sœur, pauvre Jeanne... :( )
libère la mémoire propre à ce People : son nom, son prénom, et lui même
met le pointeur à NULL
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
 ​‍‌‍﻿﻿﻿‌﻿ return p;
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
