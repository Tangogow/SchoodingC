/*
On vous fournit un tableau d'entiers Tab de taille N

Traduire l'algorithme suivant :

Pour I allant de 0 à N/2-1 :
    Echanger le contenu de la case d'indice I avec celui de la case d'indice N-1-I  (faire un swap)
*/
int tmp;

for (int I = 0; I <= N / 2 - 1; I++) {
  tmp = Tab[I];
  Tab[I] = Tab[N - 1 - I];
  Tab[N - 1 - I] = tmp;
}
