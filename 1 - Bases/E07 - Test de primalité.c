/*
Ecrire une fonction isPrimeNumber qui prend en paramètre un entier n, et retourne 1 si n est premier, 0 sinon.

Pour tester si n est premier :

on cherche pour tout nombre d entre 2 et n-1 si  d divise n. Si on trouve un tel nombre, n n'est pas premier.
sinon il est premier
Attention : faire un cas particulier pour 1, qui n'est pas premier.
*/

int isPrimeNumber(int n) {
  if (n == 1)
    return 0;
  for (int i = 2;​‍‌‍﻿﻿﻿‌﻿ i <= n / 2; ++i) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}
