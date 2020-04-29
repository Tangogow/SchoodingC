/*
On vous fournit deux tableaux d'entiers T1 et T2, tous 2 de taille N

Traduire l'algorithme suivant :

Créer une variable S, initialisée à 0
Pour chaque élément de T1:
    Si l'élément est plus grand que celui de même indice dans T2 :
        Augmenter S de 1
Afficher S
*/

int S = 0;

for (int i = 0; i < N; i++)
    if (T1[i] > T2[i])
      S++;
printf("%d", S);
