/*
On vous fournit un entier N : affichez les N dernières lignes du fichier "input.txt"

Exemple, si N vaut 2 le fichier contient :

Bonjour
La prog c'est sympa !
Mais alors la, vraiment sympa :)

Alors l'affichage sera :

La prog c'est sympa !
Mais alors la, vraiment sympa :)
*/

int line = 50;
int size = 200;
int nb = 0;
FILE *fp = fopen("input.txt", "r");
char *tmp = malloc(sizeof(char) * line);
char **buf = malloc(sizeof(char) * line * size);

for (int i = 0; i < line; i++)
  buf[i] = mal​‍‌‍﻿﻿﻿‌﻿loc(sizeof(char) * size);

while (!feof(fp)) {
  fgets(tmp, line, fp);
  strcat(buf[nb], tmp);
  nb++;
}
for (int i = nb - N; i <= nb; i++)
  if (i >= 0)
    printf("%s", buf[i]);
