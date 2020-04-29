/*
Créer un programme complet (donc contenant un main) qui lit en entrée deux entiers (avec scanf), que l'on désignera ici respectivement par W et H.

Si W ou H sont inférieurs à 1, le programme affiche "WRONG INPUT" et se termine.

Sinon, il affiche un rectangle de W caractères de large, et de H caractères de haut, avec :

les cotés verticaux représentés par le caractère '|' (sur la touche 6)
les cotés horizontaux représentés par le caractère '-' (sur la touche 6 aussi)
les coins représentés par le caractère '+'
l'intérieur représenté part le caractère '#'
Exemple avec W et H qui valent respectivement 6 et 4 :
+----+
|####|
|####|
+----+
Avec W et H valant respectivement 1 et 3 :

+
|
+
Avec W et H valant respectivement 5 et 1 :

+---+
*/
#include <stdio.h>
#include <stdlib.h>

int drawLine(int n, char side, char center) {
  n -= 2;
  printf("%c", side);
  if (n < 0) {
    printf("\n");
    return 0;
  }
  while (n != 0) {
    printf("%c", center);
    n--;
  }
  printf("%c\n", side);
}

int main(int ac, char **av) {
  ​‍‌‍﻿﻿﻿‌﻿int W, H;
  scanf("%d", &W);
  scanf("%d", &H);
  if (W < 1 || H < 1) {
    printf("WRONG INPUT");
    return 0;
  }
  H -= 2;
  drawLine(W, '+', '-');
  if (H < 0) {
    printf("\n");
    return 0;
  }
  while (H != 0) {
    drawLine(W, '|', '#');
    H--;
  }
  drawLine(W, '+', '-');
}
