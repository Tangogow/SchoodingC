/*
Ecrire une fonction somme, qui :

prend un tableau d'entier Tab et sa taille N en paramètres
retourne un entier
La fonction effectuera l'algorithme suivant :

Déclarer une variable S initialisée à 0
Pour tout élément de Tab :
    Ajouter la valeur de l'élément à S
Retourner S
*/

int somme(int Tab[], int N) {
  int S = 0;
  for (in​‍‌‍﻿﻿﻿‌﻿t i = 0; i < N; i++)
    S += Tab[i];
  return S;
}
