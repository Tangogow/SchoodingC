/*
Complétez la fonction pour qu'elle alloue et retourne un tableau de NxM cases.

Chaque case (i,j),  telle que 0<=i<N, et 0<=j<M, sera accessible via tab[i][j] si tab est le nom donné au tableau retourné, et sera initialisée à i+j.

L'allocation devra se faire en N+1 mallocs.
*/
int **initMatrix(int N, int M) {
  int **tab = malloc(N * 2 * sizeof(int));
  for(int i = 0; i < N; i++) {
    ​‍‌‍﻿﻿﻿‌﻿tab[i] = malloc(M * sizeof(int));
    for (int j = 0; j < M; j++)
      tab[i][j] = i + j;
  }
  return tab;
}
