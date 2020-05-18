/*
On vous fournit un fichier notes.csv représentant les notes des élèves dans les 3 matières maths, physique et histoire.

Le format de chaque ligne est "nom;noteMaths;notePhysique;noteHistoire".

Après avoir chargé le fichier, affichez chaque élève (un par ligne) avec sa moyenne, au format "nom : moyenne". La moyenne sera arrondie a une décimale.

Exemple, si le fichier contient :

Ben;10;15;20
Sophie;12;4;18
John;3;2;8
L'affichage sera :

Ben : 15.0
Sophie : 11.3
John : 4.3
*/

int line = 50;
int size = 200;
int nb = 0;
float avg;
FILE *fp = fopen("notes.csv", "r");
char *tmp = malloc(sizeof(char) * line);
char **buf = malloc(sizeof(char) * line * size);

for (int i = 0; i < line; i++)
  buf[i] = malloc(sizeof(char) * size);

while (!feof(fp)) {
  fgets(tmp, line, fp);
  char *token = strtok(tmp, ";");
  int i = 0;
  while (token != NULL) {
    buf[i][0] = '\0';
    strcat(buf[i], token);
    token = strtok(NULL, ";");
    i++;
  }
  avg = (atof(buf[1]) + atof(buf[2]) + atof(buf[3])) / 3;
  printf("%s : %0.1f\n", buf[0], avg);
  nb++;
}
fclose(fp);
