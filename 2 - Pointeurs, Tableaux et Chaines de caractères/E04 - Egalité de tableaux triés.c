/*
Completer la fonction pour qu'elle retourne la valeur minimum du tableau.

Ici, le paramètre N représente la taille du tableau.

Exemple :

si array vaut [42, -4, 6, 3], on retournera -4.
*/
int minimum(int *array, int N) {
  int tmp = array[0];
  for (int i = 1; i < N; i​‍‌‍﻿﻿﻿‌﻿++) {
    if (array[i] < tmp)
      tmp = array[i];
  }
  return tmp;
}
