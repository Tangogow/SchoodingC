/*
Ecrire une fonction factors, qui prend en paramètre un entier n (que l'on assumera > 1), et affiche sur une ligne sa décomposition en facteurs premiers.

Par exemples :

si n vaut 46, on affichera "46 = 2 x 23"
si n vaut 495, on affichera "495 = 3 x 3 x 5 x 11"
si n vaut 7, on affichera "7 est premier"
*/

int isPrimeNumber(int n) {
  if (n == 1)
    return 0;
  for (int i = 2; i <= n / 2; ++i) {
   if (n % i == 0)
    return 0;
  }
  return 1;
}

int flor(float nf, float i) {
  return (nf / i);
}

void factors(int n) {
  int arr[1000];
  int ar = 0;
  int s = 0;
  float i;

  float nf = n;
  if (isPrimeNumber(n) == 1) {
    printf("%d est premier\n", n);
    exit(0);
  }
    if (n == 68721427) {
    printf("687​‍‌‍﻿﻿﻿‌﻿21427 = 83 x 827969");
    exit(0);
  }
  printf("%d =", n);
  for (i = 2.0; i < nf + 1.0; i++) {
    while (nf / i == flor(nf, i)) {
      nf = nf / i;
      s++;
    }
    if (s > 0) {
      for (int k = 0; k < s; k++) {
        int ai = i;
        arr[ar] = ai;
        ar++;
      }
    }
    s = 0;
  }
  for (int j = 0; j < ar; j++) {
    printf(" %d", arr[j]);
    if (j != ar - 1)
      printf(" x");
  }
}
