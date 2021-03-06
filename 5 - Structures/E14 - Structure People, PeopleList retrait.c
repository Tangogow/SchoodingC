/*
Ajouter une fonction deletePeople, qui prend en paramètres un pointeur sur PeopleList et un pointeur sur People, et qui retire le People de la PeopleList.
*/

// People.h

#ifndef _PEOPLE_H_
#define _PEOPLE_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

typedef struct People People;

struct People {
  char *firstname;
  char *lastname;
  int age;
  People *soulmat​‍‌‍﻿﻿﻿‌﻿e;
};

void comparePeoplesBy();

People *createPeople(char *, char *, int);
void bindPeoples(People *, People *);
void removePeople(People **p);

int  compareByName(People *, People *);
int  compareByAge(People *, People *);

#endif

// People.c
#include "People.h"
#include "PeopleList.h"

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

int  compareByAge(People* a, People* b) {
  if (a->age > b->age)
    return 1;
  else if (a->age < b->age)
    return -1;
  else if (a-> age == b->age) {
    if (strcmp(a->lastname, b->lastname) == 0) {
      if (strcmp(a->firstn​‍‌‍﻿﻿﻿‌﻿ame, b->firstname) == 0) {
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

int  compareByName(People* a, People* b) {
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

// PeopleList.h
#ifndef _PEOPLE_LIST_H_
#define _PEOPLE_LIST_H_

#include "People.h"

typedef struct PeopleList PeopleList;

struct PeopleList {
  People **list;
  int size;
  int type;
};

PeopleList *deletePeople(PeopleList *, People *);​‍‌‍﻿﻿﻿‌﻿
PeopleList *createPeopleList(int (*)());
PeopleList *swapPeople(PeopleList *);
PeopleList *addPeople(PeopleList *, People *);
void displayPeopleList(PeopleList *);
int comparePeoplesByAge();
int comparePeoplesByName();

#endif

// PeopleList.c
#include "People.h"
#include "PeopleList.h"

PeopleList *deletePeople(PeopleList *pl, People *p) {
  int i = 0;

  for (; i < pl->size; i++)
    if (pl->list[i] == p)
      break;

  for (int j = i; j < pl->size; j++) {
    if (j == pl->size)
      break;
    pl->list[i] = pl->list[j + 1];
    i++;
  }
  pl->size--;
}


int comparePeoplesByAge() {
  return 1;
}

int comparePeoplesByName() {
  return 0;
}

PeopleList *createPeopleList(int (*f)()) {
  PeopleList *pl = malloc(50);
  pl->list = malloc(50);
  pl->size = 0;
  pl->type = f();
  return pl;
}

PeopleList *swapPeople(PeopleList *pl) {
  People *tmp;

  if (pl->size > 0)
    for (int i = 1; i < pl->size; i++)
      for (int j = 0; j <​‍‌‍﻿﻿﻿‌﻿ pl->size; j++)
        if (pl->type == 1)
          while (compareByAge(pl->list[j], pl->list[i]) > 0) {
            tmp = pl->list[j];
            pl->list[j] = pl->list[i];
            pl->list[i] = tmp;
          }
        else
          while (compareByName(pl->list[j], pl->list[i]) > 0) {
            tmp = pl->list[j];
            pl->list[j] = pl->list[i];
            pl->list[i] = tmp;
          }
}

PeopleList *addPeople(PeopleList *pl, People *p) {
  pl->list[pl->size] = p;
  pl->size++;
  pl = swapPeople(pl);
  return pl;
}

void displayPeopleList(PeopleList *pl) {
  for (int i = 0; i < pl->size; i++)
    printf("%s %s : %d\n", pl->list[i]->firstname, pl->list[i]->lastname, pl->list[i]->age);
}
