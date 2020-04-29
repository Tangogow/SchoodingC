/*
Completer la fonction pour inverser l'ordre des éléments dans le tableau.

Exemple : si array vaut [1,2,3,4,5], il doit valoir [5,4,3,2,1] a la fin.
*/
void invert(int *array, int N) {
  int tmp[N];
  int j = N - 1;
  for (int i = 0; i < N; i++)​‍‌‍﻿﻿﻿‌﻿ {
    tmp[j] = array[i];
    j--;
  }
  for (int i = 0; i < 5; i++)
    array[i] = tmp[i];
}
