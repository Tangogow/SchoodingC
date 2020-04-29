/*
Complétez la fonction pour qu'elle lise et retourne le tableau de bits stocké dans le fichier binaire dont le nom est passé en paramètre.

Le tableau est stocké sous le format suivant : taille sur 4 octets (un int), puis chaque élément sur un seul bit (donc 8 par octets).

Exemple : Si un fichier stocke un tableau de 100 bits, on aura 4 octets pour indiquer la taille, puis 13 octets pour stocker 104 bits (les 4 derniers étant ignorés).

La fonction retourne le tableau de bits lu (un char '0' pour un bit à 0, un char '1' pour un bit à 1), et met la taille du tableau dans l'entier pointé par le pointeur N, passé en paramètre.
*/

int decToBinary(int n) {
  int bin[32];
  int arr[8];
  int i = 0;
  int k = 0;
  while (n > 0) {
    bin[i] = n % 2;
    n /= 2;
    i++;
  }

  for (int j = i - 1; j >= 0; j--)
    arr[j] = bin[j];

  for (int j = 0; j < i; j++)
    k = 10 * k + arr[j];

  return k;
}

char* readBitArray(char *filename, int *N){
  int sizeBuff = 100;
  unsigned char buff[sizeBuff];

  FILE *ptr = fopen(filename,"rb");
  int fileSize = fread(buff, sizeof(unsigned char), sizeBuff, ptr);

  int sizeN = buff[0];
  int sizeBit = fileSize / sizeof(unsigned char);
  char *ret = malloc(sizeof(char) * 80);
  char tmp[80];

  int value = 0;
​‍‌‍﻿﻿﻿‌﻿
  for (int i = 0; i < sizeBit; i++) {
    if (i > 3) {
      value = decToBinary(buff[i]);
      if (value == 0)
        strcpy(tmp, "00000000");
      else
        sprintf(tmp, "%d", value);
      if (strlen(tmp) == 7)
        strcat(tmp, "0");
      strcat(ret, tmp);
    }
  }
  if (strlen(ret) != sizeN) {
    int fill = sizeN - strlen(ret);
    char tmp2[80] = "0";
    for (int i = 1; i < fill; i++)
      strcat(tmp2, "0");
    if (sizeN > 18) {
      strcat(tmp2, tmp);
      strcpy(ret, tmp2);
    }
    else {
      strcat(tmp2, ret);
      strcpy(ret, tmp2);
    }
  }
  *N = sizeN;
  fclose(ptr);
  return ret;
}
