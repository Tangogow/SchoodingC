/*
On vous fournit deux tableaux d'entiers T1 et T2, tous 2 de taille N

Traduire l'algorithme suivant :

Créer un tableau R de taille N
Pour chaque couple d'éléments de même indice de T1 et T2:
    Mettre le produit de éléments dans la case de même indice de R
Pour I allant de 0 a N:
   Afficher "<R[I]>
*/
//Créer un tableau R de taille N
int R[N];

for (int i = 0; i < N; i++)
  R[i] = T1[i] * T2[i];

for (int I = 0; I < N; I++)
  printf("%d ", R[I]);
