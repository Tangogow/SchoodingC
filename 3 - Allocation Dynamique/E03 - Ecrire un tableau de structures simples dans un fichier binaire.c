/*
Complétez la fonction pour qu'elle libère le tableau 2D pointé en paramètre, et le mette a NULL.
*/

void freeMatrix(int*** ptab, int N) {
  for (int i = 0; i < N; i++) {
    //int* p = (*ptab​‍‌‍﻿﻿﻿‌﻿)[i];
    free((*ptab)[i]);
    //free(ptab[i]);
  }
  free(*ptab);
  (*ptab) = NULL;
}
