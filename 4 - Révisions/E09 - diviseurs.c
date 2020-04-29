/*
On vous fournit un entier N

Traduire l'algorithme suivant :

Pour X allant de 2 à N :
    Déclarer une variable C, initialisée à 0
    Afficher "<X> est divisible par "
    Pour D allant de 2 à X-1:
        Si X est divisible par D :
            Afficher "<D> "
            Augmenter C de 1
    Si C vaut 0:
        Afficher "rien, c'est un nombre premier"
    Afficher un saut de ligne
*/

for (int X = 2; X < N + 1; X++) {
  int C = 0;
  printf("%d est divisible par ", X);
  for (int D = 2; D < X - 1; D++) {
    if (X % D == 0) {
      printf("%d ", D);
      C++;
    }
  }
  if (C == 0)
    printf("rien, c'est un nombre premier");
  printf("\n");
}
