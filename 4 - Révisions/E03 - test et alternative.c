/*
On vous fournit un entier N

Traduire l'algorithme suivant :

Déclarer un entier X
Initialiser X à 0
Si N est inférieur à 10, mettre X à 1
Sinon si N est pair, mettre X à 2
*/

int X;
X = 0;
if (N < 10)
  X = 1;
else if (N % 2 == 0)
  X = 2;
