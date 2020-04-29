/*
Complétez la fonction pour qu'elle lise et retourne le tableau d'entiers stocké dans le fichier binaire dont le nom est passé en paramètre.

Le tableau est stocké sous le format suivant : taille, puis chaque élément.

Exemple : le fichier contenant le tableau [1,2,3,4] contiendra successivement les représentations binaires de 4,1,2,3,4

La fonction retourne le tableau d'entiers lu, et met la taille du tableau dans l'entier pointé par le pointeur N, passé en paramètre.
*/

int *readIntArray(char *filename, int *N) {
  unsigned char buffer[50];
  FILE *ptr = fopen(filename,"rb");

  fread(buffer, sizeof(buffer), 1, ptr);
  int size = buffer[0] * sizeof(int​‍‌‍﻿﻿﻿‌﻿) + 1;
  int *arr = malloc(size);
  int j = 0;
  for (int i = 1; i < size; i++) {
    if (buffer[i] != 0) {
      arr[j] = buffer[i];
      j++;
    }
  }
  *N = j;
  return arr;
}
