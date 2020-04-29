/*
Complétez la fonction pour qu'elle ajoute le tableau d'entiers passé en paramètre, dans le fichier binaire dont le nom est passé en paramètre.

Le tableau sera stocké sous le format suivant : taille, puis chaque élément.

On distinguera 2 cas de figure :

le fichier est vide : dans ce cas on écrira simplement le tableau
le fichier contient déjà un tableau : dans ce cas on concaténera les deux tableaux
Exemple : le fichier contient déja le tableau [1,2,3,4] et donc les représentations binaires de 4,1,2,3,4

On y ajoute le tableau [3,2,1] : le fichier devra alors contenir 7,1,2,3,4,3,2,1
*/

int *readIntArray(char *, int *);

void writeIntArray(char *filename, int *tab, int N){
  int val;
  FILE *f;

  f = fopen(filename, "wb");
  fwrite(&N, sizeof(int), 1, f);
  for(int i = 0; i < N; i++) {
    val = tab[i];
    fwrite(&val, sizeof(int), 1, f);
  }
  fclose(f);
}

void appendIntArray(char *filename, int *tab,​‍‌‍﻿﻿﻿‌﻿ int N){
  int a, b, c;
  a = N;
  int *tab2 = readIntArray(filename, &N);
  b = N;
  c = a + b;
  int *tab3 = malloc(c * sizeof(int));
  int j = 0;

  for (int i = 0; i < b; i++) {
    tab3[j] = tab2[i];
    j++;
  }
  for (int i = 0; i < a; i++) {
    tab3[j] = tab[i];
    j++;
  }
  writeIntArray(filename, tab3, c);
}
