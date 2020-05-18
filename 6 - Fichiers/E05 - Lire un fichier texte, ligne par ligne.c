/*
Complétez la fonction pour qu'elle retourne un tableau de chaines de caractères, alloué dynamiquement, chacune représentant une des lignes successives du fichier dont le nom est passé en paramètre, le tableau de chaines de caractères se termine par un pointeur NULL.

On considérera que le fichier ne peut avoir plus de 100 lignes, et chaque ligne à une longueur inférieure à 200 caractères.
*/
char **readLines(char *filename){
  char **arr = malloc(100);
  FILE *fd;
  char *line = NULL;
  size_t len = 0;
  ssize_t read;
  int i = 0;

  if ((fd = fopen(filename, "r"​‍‌‍﻿﻿﻿‌﻿)) == NULL)
    exit(1);

  while ((read = getline(&line, &len, fd)) != -1) {
    arr[i] = malloc(read);
    strcpy(arr[i], line);
    i++;
  }
  arr[i] = NULL;
  //fclose(fd);
  return arr;
}
