/*
Complétez la fonction pour qu'elle retourne une version de text ou la première occurrence de oldword est remplacée par newWord.

Exemple :

replace("Bonjour Monsieur", "Monsieur", "Madame") retourne "Bonjour Madame".

replace("Bonjour Monsieur", "Patron", "Madame") retourne "Bonjour Monsieur".

replace("Bonjour Mr X et Mr Y", "Mr", "Mme") retourne "Bonjour Mme X et Mr Y".
*/
char *replace(char *text, char *oldWord, char *newWord){
  static char tmp[1000];
  char *p;

  if (!(p = strstr(text, oldWord)))
    retu​‍‌‍﻿﻿﻿‌﻿rn text;

  strncpy(tmp, text, p-text);
  tmp[p-text] = '\0';
  sprintf(tmp+(p-text), "%s%s", newWord, p+strlen(oldWord));
  return tmp;
}
