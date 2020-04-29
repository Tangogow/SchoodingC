/*
On vous fournit un tableau d'entiers Tab de taille N

Traduire l'algorithme suivant :

Pour I allant de N à 2 :
    Pour chaque case de Tab d'indice de 1 à I-1 :
        Si le contenu de la case est plus petit que le contenu de la précédente :
            Echanger le contenu de la case avec celui de la précédente (faire un swap
*/
int tmp;

for (int I = N; I >= 2; I--) {
  for (int i = 1; i <= I - 1; i++) {
    if (Tab[i] < Tab[i - 1]) {
      tmp = Tab[i];
      Tab[i] = Tab[i - 1];
      Tab[i - 1] = tmp;
 ​‍‌‍﻿﻿﻿‌﻿   }
  }
}
