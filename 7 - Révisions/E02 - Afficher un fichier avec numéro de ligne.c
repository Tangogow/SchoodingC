/*
Afficher le contenu du fichier "input.txt", en affichant chaque ligne précédé du numéro de ligne, puis ": ".

Exemple, si le fichier contient :

Bonjour

La programmation c'est sympa !

Alors l'affichage sera :

1: Bonjour
2: La programmation c'est sympa !
*/

int len = 200;
FILE *fp = fopen("input.txt", "r");
char *tmp = malloc(sizeof(char) * len);
int i = 1;

while​‍‌‍﻿﻿﻿‌﻿ (!feof(fp)) {
  fgets(tmp, len, fp);
  printf("%d: %s", i, tmp);
  i++;
}
fclose(fp);
