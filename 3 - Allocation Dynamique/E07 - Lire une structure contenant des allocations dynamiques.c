/*
Complétez la fonction pour qu'elle retourne un tableau a 2 dimensions représentant les N premières lignes du triangle de Pascal.

Ainsi, la première case pointera sur un tableau de 1 cases, la seconde vers un de 2 cases, etc...

Le tableau sera alloué en N+1 mallocs.
*/
int **pascal(int N) {
  int **a;
  int c = 1;

  a = malloc(N * sizeof(int *));
  int j = 1;
  for (int i = 0; i < N; i++) {
    a[i] = malloc(j * sizeof(int));
    j++;
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || i == 0)
        c = 1;
      else
        c = c * (i - j + 1) / j;
        a[i][j] = c;
    }
  }
  return a;
}
