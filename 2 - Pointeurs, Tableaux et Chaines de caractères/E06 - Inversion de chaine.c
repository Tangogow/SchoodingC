/*
Complétez la fonction pour qu'elle inverse la chaîne de caractères sur place (le résultat est stocké dans la chaîne d'origine).

Exemples :

"hello" devient "olleh"
"Coucou" devient "uocuoC"
*/
void reverse(char *str) {
  char tmp[strlen(str)];
  int begin, end, len = 0;

  len = strlen(str);
  end = len - 1;
  for (​‍‌‍﻿﻿﻿‌﻿begin = 0; begin < len; begin++) {
    tmp[begin] = str[end];
    end--;
  }
  tmp[begin] = '\0';
  strcpy(str, tmp);
}
