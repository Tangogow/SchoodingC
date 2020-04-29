/*
Ecrire un programme entier (donc avec un main) qui lit un entier sur l'entrée standard (avec scanf), et écrit sur la sortie standard la table de multiplication associée.

vous ferez en sorte que chaque nombre soit affiché sur 5 caractères (je vous conseille de regarder en ligne les options de formatage).

Chaque ligne sera du format suivant :

<entier><espace>x<espace><entier><espace>=<espace><entier>

Exemple :

Si le nombre en entrée est 12, la sortie doit être :

    1 x    12 =    12
    2 x    12 =    24
    3 x    12 =    36
    4 x    12 =    48
    5 x    12 =    60
    6 x    12 =    72
    7 x    12 =    84
    8 x    12 =    96
    9 x    12 =   108
   10 x    12 =   120
   */
#include <stdio.h>

int main(int ac, char **av) {
  int n;
  scanf("%d", &n);
  for​‍‌‍﻿﻿﻿‌﻿ (int i = 1; i <= 10; i++) {
    printf("% 5d x % 5d = % 5d\n", i, n, i * n);
 }
}
