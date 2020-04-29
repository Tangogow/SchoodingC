/*
Complétez la fonction pour qu'elle alloue et retourne un tableau de NxM cases.

Chaque case (i,j),  telle que 0<=i<N, et 0<=j<M, sera accessible via tab[i][j] si tab est le nom donné au tableau retourné, et sera initialisée à i+j.

L'allocation devra se faire en 2 mallocs.
*/

int **initMatrix(int N, int M) {
  int **tab = malloc(N * sizeof(int*));
  tab = malloc((M * N) * sizeof(int));

  int *p = tab + N;​‍‌‍﻿﻿﻿‌﻿
  for (int i = 0; i < N; i++) {
    tab[i] = p + i * M;
    for (int j = 0; j < M; j++)
      tab[i][j] = i + j;
  }
  return tab;
}
