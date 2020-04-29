/*
Ecrire un programme calculette qui lit successivement un entier, un caractère et un autre entier.

Si le caractère est un '+' : le programme affiche la somme des deux entiers et quitte.

Si le caractère est un '-' : le programme affiche la soustraction du second entier au premier et quitte.

Si le caractère est un 'x' : le programme affiche la multiplication des deux entiers et quitte.

Si le caractère est un '/' :

si le second entier est 0, le programme affiche "DIV BY 0 NOT ALLOWED" et quitte.
sinon, le programme affiche le résultat de la division réelle, avec deux décimales après la virgule,  du premier entier par le second, et quitte.
Sinon, le programme affiche "RTFM" et quitte.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av) {
  int n1;
  char op;
  int n2;
  scanf("%d", &n1);
  scanf(" %c", &op);
  scanf("%d", &n2);

  if (op == '+')
    printf("%d\n", n1 + n2);
  else if (op == '-')
    printf("%d\n", n1 - n2);
  else if (op ==​‍‌‍﻿﻿﻿‌﻿ 'x')
    printf("%d\n", n1 * n2);
  else if (op == '/') {
    if (n2 == 0) {
      printf("DIV BY 0 NOT ALLOWED\n");
      exit(0);
    }
    float a, b;
    a = n1;
    b = n2;
    float res = a / b;
    printf("%.2f\n", res);
  }
  else
    printf("RTFM\n");
  return 0;
}
