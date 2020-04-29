/*
Ecrire une fonction PGCD, qui :

prend deux entiers A et B en paramètres
retourne un entier
La fonction effectuera l'algorithme suivant :

Si A est plus petit que B:
    Echanger A et B (swap)
Tant que A n'est pas divisible par B:
    Créer une variable R qui contient le reste de la division de A par B
    Mettre la valeur de B dans A
    Mettre la valeur de R dans B
Retourner B
*/

int PGCD(int A, int B) {
  int tmp;

  if (A < B) {
    tmp = A;
    A = B;
    B = tmp;
​‍‌‍﻿﻿﻿‌﻿    }
  while (A % B != 0) {
    int R = A % B;
    A = B;
    B = R;
  }
  return B;
}
