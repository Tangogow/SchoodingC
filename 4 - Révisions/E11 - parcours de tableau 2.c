/*
On vous fournit un tableau d'entiers Tab de taille N

Traduire l'algorithme suivant :

Déclarer une variable X, initialisée à 0
Pour chaque case de Tab, sauf la première :
    Si le contenu de la case est plus grand que le contenu de la précédente :
        Augmenter X de 1
Afficher X
*/
int X = 0;

for (int i = 1; i < N; i++) {
  if (Tab[i] > Tab[i - 1])
    X++;
}
printf("%d", X);
