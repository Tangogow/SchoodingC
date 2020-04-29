/*
On considère que deux tableaux triés sont égaux si ils sont de même taille et contiennent les mêmes valeurs (et en même quantité).

Exemples :

[1,2,3] et [1,2,3] sont égaux
[1,2,2,3] et [1,2,3,3] ne sont pas égaux.

Compléter la fonction pour qu'elle retourne 1 si les deux tableaux sont égaux, 0 sinon.
*/
int equals(int *tab, int *tab2, int N) {
  for (int i = 0; i < N; ​‍‌‍﻿﻿﻿‌﻿i++) {
    if (tab[i] != tab2[i])
      return 0;
  }
  return 1;
}
