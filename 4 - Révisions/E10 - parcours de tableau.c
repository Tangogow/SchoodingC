/*
On vous fournit un tableau d'entiers Tab de taille N

Traduire l'algorithme suivant :

Déclarer une variable X, initialisée à 0
Pour chaque case de Tab :
    Si le contenu de la case est positif :
        Ajouter le contenu de la case à X
    Sinon :
        Ajouter l'opposé du contenu de la case à X
    Si l'indice de la case est un multiple de 5 :
        Ajouter 100 à X
Afficher X
*/

int X = 0;

for (int i = 0; i < N; i++) {

  if (Tab[i] > 0)
    X += Tab[i];
  else
    X -= Tab[i];
  if (i % 5 == 0)
    X += 100;
}
printf("%d", X);
