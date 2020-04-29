/*
On considère que deux tableaux sont égaux si ils sont de même taille et contiennent les mêmes valeurs (et en même quantité).

Exemples :

[1,2,3] et [3,2,1] sont égaux,
[1,2,2,3] et [1,2,3,3] ne le sont pas.

Compléter la fonction pour qu'elle retourne 1 si les deux tableaux sont égaux, 0 sinon.
*/
int equals(int *tab, int *tab2, int N) {
  int nb[50000] = {0};
  int nb2[50000] = {0};
  int c1 = 0;
  int c2 = 0;
  for (int i = 0; i < N; i++) {
    c1 += tab[i]++;
    c2 +​‍‌‍﻿﻿﻿‌﻿= tab2[i]++;
    nb[tab[i]]++;
    nb2[tab2[i]]++;
  }
  if (c1 != c2)
    return 0;
  for (int i = 0; i < 10; i++) {
    if (nb[i] != nb2[i])
      return 0;
  }
  return 1;
}
