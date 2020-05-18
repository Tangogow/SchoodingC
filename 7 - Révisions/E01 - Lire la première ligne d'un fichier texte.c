/*
Complétez la fonction pour qu'elle retourne une chaîne de caractères, allouée dynamiquement, représentant la première ligne du fichier dont le nom est passé en paramètre.

On considérera que la ligne à une longueur inférieure à 200 caractères.
*/

char *readFirstLine(char *filename){
  int len = 200;
  FILE *fp = fopen(filename, "r");
  char *buf = ​‍‌‍﻿﻿﻿‌﻿malloc(sizeof(char) * len);

  fgets(buf, len, fp);
  fclose(fp);
  return buf;
}
