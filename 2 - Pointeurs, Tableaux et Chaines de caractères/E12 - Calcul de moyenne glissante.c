/*
Ecrire un programme qui lit un tableau d'entiers, et un rayon de fenêtre, et affiche le tableau des moyennes glissantes.

Par exemple, si le tableau tab a 6 éléments, et le rayon de la fenêtre est 2, les résultats affichés seront :

(tab[0]+tab[1]+tab[2])/3

(tab[0]+tab[1]+tab[2]+tab[3])/4

(tab[0]+tab[1]+tab[2]+tab[3]+tab[4])/5
(tab[1]+tab[2]+tab[3]+tab[4]+tab[5])/5
(tab[2]+tab[3]+tab[4]+tab[5])/4
(tab[3]+tab[4]+tab[5])/3
Ceci est représenté graphiquement ci-dessous : en orange, la case pour laquelle on calcule le résultat, et en jaune, les cases qui participent au calcul de la moyenne.



Les résultats seront affichés avec une précision de deux décimales après la virgule.
Le programme lira d'abord un entier N représentant le nombre d'éléments du tableau (forcément inférieur à 20), puis un entier R égal au rayon de la fenêtre, puis les entiers correspondant aux valeurs du tableau.
*/
#include <stdio.h>

float avg(int *tab, int n, int r) {
  float avg = 0.0;
  int c = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= r; j++) {
      if (i + j < n) {
        avg += (float)tab[i + j];
        c++;
      }
    }
    for (int k = r; k > 0; k--) {
      if (i - k >= 0​‍‌‍﻿﻿﻿‌﻿) {
        avg += (float)tab[i - k];
        c++;
      }
    }
    printf("%.2f\n", avg / c);
    avg = 0.0;
    c = 0;
  }
}

int main() {
  int n, r;
  scanf("%d", &n);
  scanf("%d", &r);
  int tab[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &tab[i]);
  avg(tab, n, r);
  return 0;
}
