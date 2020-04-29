/*
Vous avez à votre disposition la structure Point, définie comme suivant :

typedef struct{
    float x;
    float y;
}Point;
Complétez la fonction pour qu'elle écrive le tableau de Point passé en paramètre, dans le fichier binaire dont le nom est passé en paramètre.

Le tableau sera stocké sous le format suivant : taille, puis chaque élément.
*/
void writeFloatArray(char *filename, float *tab, int N) {
  float val;
  FILE *f;

  f = fopen(filename, "wb");
  N /= 2;
  fwrite(&N, sizeof(float), 1, f);
  for (int i = 0; i < N * 2; i++) {
    val = tab[i];
    fwrite(&val, sizeof(float), 1, f);
  }
  fclose(f​‍‌‍﻿﻿﻿‌﻿);
}

void writePointArray(char* filename, Point* tab, int N) {
  float *tab2 = malloc(N * sizeof(float));
  int j = 0;

  for (int i = 0; i < N; i++) {
    tab2[j] = tab[i].x;
    j++;
    tab2[j] = tab[i].y;
    j++;
  }
  writeFloatArray(filename, tab2, j);
}
