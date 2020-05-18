/*
Lire tout le contenu du fichier "input.txt".

Le mettre en majuscules.

L'enregistrer dans un fichier "output.txt'.
*/

int line = 50;
int size = 200;
FILE *input = fopen("input.txt", "r");
FILE *output = fopen("output.txt", "w");
char *tmp = malloc(sizeof(char) * line);
char *buf = malloc(sizeof(char) * size);

while (!feof(input)) {
  fgets(tmp, line, input);
  for (int i = 0; i < strlen(tmp); i++)
    if (tmp[i] >= 97 && tmp[i] <= 132)
      tmp[i] -= 32;
    strcat(buf, tmp);
}
fwrite(buf, size, 1, output);
fclose(input);
fclose(output);
