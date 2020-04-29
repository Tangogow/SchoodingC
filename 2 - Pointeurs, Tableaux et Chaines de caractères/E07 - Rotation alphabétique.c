/*
Completez la fonction pour qu'elle effectue une rotation alphabétique de N éléments sur place dans la chaine de caractères fournie en paramètre.

Faire la rotation alphabétique de N éléments sur une lettre consiste a remplacer celle-ci de par la lettre qui se trouve N positions plus loin dans l'alphabet. Quand on arrive à la fin de l'alphabet, on revient au début (d'ou le terme "rotation").

Par exemple, faire une rotation :

de 3 éléments sur 'Y' donne 'B'
de -2 éléments sur 'f' donne 'd'
La fonction doit pouvoir gérer les majuscules et les minuscules, et laisser inchangés les caractères non alphabétiques.
*/
void alphaRotate(char* str, int n) {
  char tmp[strlen(str)];
  int j = 0;
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    if (str[i] <= 122 && str[i] >= 97) {
      if (str[i] + n > 122)
        str[i] -= 26;
      if (str[i] + n < 97)
        str[i] += 26;
      tmp[j] = str[i] + n;
      j++;
    }
    else if (str[i] <= 90 && str[i] >= 65) {
      if (str[i] + n > 90)
        str[i] -= 26;
      if (str[i] + n < 65)
        str[i] += 26;
      tmp[j] = str[i] + n;
      j++;
    }
    else {
      tmp[j] = str[i];
      j++;
    }
  }
  tmp[j] = '\0';
  strcpy(str, tmp);
}
