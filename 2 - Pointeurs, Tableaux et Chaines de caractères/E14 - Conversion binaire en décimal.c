/*
Complétez la fonction pour qu'elle retourne l'entier correspondant à la représentation binaire passée en paramètre. On considérera que les bits sont ici en little endian.

Par exemple :

"000110" vaut 0*1 + 0*2 + 0*4 + 1*8 +1*16 + 0*32 = 24
"11011" vaut 1*1 + 1*2 + 0*4 + 1*8 + 1*16 = 27
*/

int pow(int base, int exp) {
  if (exp < 0)
    return -1;
  int result = 1;
  while (exp) {
    if (exp & 1)
      result *= base;
    exp >>= 1;
    base *= base;
  }
  return result;
}

int bin2dec(char* s) {
  int arr[8] = {0}​‍‌‍﻿﻿﻿‌﻿;
  int j = strlen(s) - 1;
  for (int i = 0; i < strlen(s); i++) {
    arr[i] = s[i] - '0';
    j--;
  }
  j = strlen(s) - 1;
  int res = 0;
  for (int i = 0; i < strlen(s); i++) {
    res += arr[j] * pow(2, j);
    j--;
  }
  return res;
}
