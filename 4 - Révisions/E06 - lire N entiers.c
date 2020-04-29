/*
Traduire l'algorithme suivant :

Lire un entier N sur l'entrée standard
Déclarer un entier S, initialisé à 0
N fois :
    Lire un entier X sur l'entrée standard
    Afficher "Lu : <X>" et revenir à la ligne
    Ajouter X à S
Afficher "Somme : <S>"

Information : dans les affichages, ce qui est marqué avec la notation <V> doit être remplacé par la valeur de V.
*/

int N, X;

scanf("%d", &N);
int S = 0;

for (int i = 0; i < N; i++) {
  scanf("%d", &X);
  printf("Lu : %d\n", ​‍‌‍﻿﻿﻿‌﻿X);
  S += X;
}
printf("Somme : %d", S);
