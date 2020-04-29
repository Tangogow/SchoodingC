/*
Complétez la fonction pour qu'elle retourne un clone du tableau passé en paramètre, c'est à dire un tableau nouvellement alloué dynamiquement, de même dimension et de même contenu que celui passé en paramètre.
*/
int* clone(int* tab, int N){
  int *tab2 = malloc(N * sizeof(int));
  for (int i = 0; i < N; i++)
    tab2[i] = tab[i];
  return tab2;
}
