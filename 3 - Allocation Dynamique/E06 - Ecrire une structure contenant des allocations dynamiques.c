/*
Complétez la fonction pour qu'elle retourne un tableau qui contient à la suite le contenu des N tableaux passés en paramètres.

Les paramètres sont les suivants :

N correspond au nombre de tableaux passés en paramètre
tabs est un tableau de N tableaux (même format qu'un tableau 2D donc, mais chaque tableau peut avoir une taille différente)
sizes est un tableau de N entiers, correspondants aux tailles des N tableaux indiqués dans tabs

*/
int *concat(int **tabs, int *sizes, int N) {
  int size = 0;
  for (int i = 0; i < N; i++)
    size += sizes[i];
  int *tabC = malloc(size * sizeof(int));
​‍‌‍﻿﻿﻿‌  int c = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < sizes[i]; j++) {
      tabC[c] = tabs[i][j];
      c++;
    }
  }
  return tabC;
}
