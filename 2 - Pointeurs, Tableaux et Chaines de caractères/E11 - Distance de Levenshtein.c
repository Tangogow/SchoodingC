/*
Complétez la fonction pour qu'elle retourne la distance de Levenshtein entre les deux chaines de caractères passées en paramètres.
*/

int getlev(char *s1, int l1, char *s2, int l2) {
  int ret, a, b = 0;

  if (l1 <= 0)
    return l2;
  else if (l2 <= 0)
    return l1;

  l1--;
  l2--;
  if (s1[l1] == s2[l2])
    return getlev(s1, l1, s2, l2);
  else {
    ret = getlev(s1, l1, s2, l2);
    a = getlev(s1, l1++​‍‌‍﻿﻿﻿‌﻿, s2, l2);
    b = getlev(s1, l1, s2, l2++);
  }

  if (ret > a)
    ret = a;
  else if (ret > b)
    ret = b;
  ret++;

  return ret;
}

int levenshtein(char *s1, char *s2) {
  int l1 = strlen(s1);
  int l2 = strlen(s2);
  int ret = getlev(s1, l1, s2, l2);
  return ret;
}
