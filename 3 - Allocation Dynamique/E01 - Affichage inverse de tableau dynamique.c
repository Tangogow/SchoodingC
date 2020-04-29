/*
Ecrire un programme qui :

lit un un entier N sur l'entrée standard
alloue un tableau tab de N entiers
lit et stocke N entiers dans tab
affiche tab en ordre inverse, en séparant chaque élément par une virgule
libère la mémoire allouée pour tab
Exemple, avec en entrée standard : "4 0 1 2 3" la sortie vaudra "3,2,1,0"
*/
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av) {
  int n;
  scanf("%d", &n);
  int *tab;
  tab = malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
    scanf("%d", &tab[i]);
  for (int i = n - 1; i >= 0; i--) {
    printf("%d", tab[i]);
    if (i > 0)
      printf(",");
  }
  printf("\n");
  free(tab);
  return 0;
}
