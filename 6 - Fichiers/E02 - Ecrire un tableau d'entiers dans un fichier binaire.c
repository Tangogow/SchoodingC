/*
Complétez la fonction pour qu'elle écrive le tableau d'entiers passé en paramètre, dans le fichier binaire dont le nom est passé en paramètre.

Le tableau sera stocké sous le format suivant : taille, puis chaque élément.

Exemple : le fichier contenant le tableau [1,2,3,4] contiendra successivement les représentations binaires de 4,1,2,3,4
*/

void writeIntArray(char *filename, int *tab, int N) {
  int val;
  FILE *f;

  f = fopen(filename, "wb");
  fwrite(&N, size​‍‌‍﻿﻿﻿‌﻿of(int), 1, f);
  for (int i = 0; i < N; i++) {
    val = tab[i];
    fwrite(&val, sizeof(int), 1, f);
  }
  fclose(f);
}
