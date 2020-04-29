/*
Vous avez à votre disposition la structure Point, définie comme suivant :

typedef struct{
    float x;
    float y;
}Point;
Complétez la fonction pour qu'elle lise et retourne le tableau de Point dans le fichier binaire dont le nom est passé en paramètre.

Vous ferez en sorte que l'entier indiqué par N contienne le nombre de Point lus.

Le tableau est stocké sous le format suivant dans le futur: taille, puis chaque élément.
*/

Point *readPointArray(char *filename, int *N){
  FILE *f;

  f = fopen(filename, "r");
  fread(N, sizeof(​‍‌‍﻿﻿﻿‌﻿int), 1, f);
  Point *tab = malloc(sizeof(Point)*(*N));
  fread(tab, sizeof(Point), *N,f);
  return tab;
}
