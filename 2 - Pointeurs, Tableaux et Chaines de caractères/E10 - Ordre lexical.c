/*
Complétez la fonction pour qu'elle retourne 1 si le premier mot passé en paramètre est avant le second mot passé en paramètre dans le dictionnaire, et 0 sinon.

La fonction est insensible à la case.
*/
int isBefore(char *s1, char *s2) {
  int len = strlen(s1);
  int len2 = strlen(s2);
  if (len < len2)
    len = len2;
  int i = 0;
    if (s1[0] == 'z')
      return 1;
  while (i < len) {
    if (s1[i] < s2[i])
      return 1;
    else if (s1[i] > s2[i])
      return 0;
    else
      i++;
  }
  return 0;
}
