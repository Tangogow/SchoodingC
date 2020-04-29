/*
Complétez la fonction pour qu'elle retourne 1 si les deux chaines de caractères, composées uniquement de lettres, sont des anagrammes, 0 sinon.

Deux mots sont des anagrammes si ils sont composés des mêmes lettres.

Exemples d'anagrammes :

"chien" et "chine"
"aube" et "beau"
La fonction sera insensible à la case.
*/
int anagram(char* s1, char* s2){
  int c1 = 0;
  int c2 = 0;
  for (int i = 0; i < strlen(s1); i++) {
    if (s1[i] > 'A' && s1[i] <= 'Z')
      c1 += s1[i] - 65;
    else if (s1[i] > 'a' && s1[i] <= 'z'​‍‌‍﻿﻿﻿‌﻿)
      c1 += s1[i] - 97;
    if (s2[i] > 'A' && s2[i] <= 'Z')
      c2 += s2[i] - 65;
    else if (s2[i] > 'a' && s2[i] <= 'z')
      c2 += s2[i] - 97;
  }
  if (c1 == c2)
    return 1;
  return 0;
}
