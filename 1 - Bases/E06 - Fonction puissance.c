/*
Enoncé
Ecrire une fonction puissance, qui prend en paramètres deux entiers x et n, et retourne x à la puissance n.
*/

int puissance(int x, int n) {
  if (x == 0 || n == 0)
    return 1;
  int r​‍‌‍﻿﻿﻿‌﻿es = x;
  while (n != 1) {
    res *= x;
    n--;
  }
  return res;
}
