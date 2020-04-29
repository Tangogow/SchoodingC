/*
Complétez la fonction pour qu'elle retourne un tableau qui contient à la suite le contenu du premier tableau passé en paramètre, puis celui du second panneau passé en paramètre.
*/
int *concat(int *tabA, int sizeA, int *tabB, int sizeB){
  int *tabC;
  tabC = malloc((sizeA + sizeB) * sizeof(int));
  for (int ​‍‌‍﻿﻿﻿‌﻿i = 0; i < sizeA; i++)
    tabC[i] = tabA[i];
  for (int j = 0; j < sizeB; j++)
    tabC[j + sizeA] = tabB[j];
  return tabC;
}
