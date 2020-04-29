/*
Ecrire un programme qui lit deux chaines de caractères sur l'entrée standard, correspondant à un prénom et un nom.

Si le prénom n'est pas composé que de lettres, afficher "<firstname> is not a valid firstname" et quitter. <firstname> étant le prénom, entouré de " ".

Si le nom n'est pas composé que de lettres, afficher "<name> is not a valid lastname" et quitter. <name> étant le nom, entouré de " ".

Sinon, afficher le nom d'utilisateur correspondant, qui est composé des 7 premières lettres du nom, et de l'initiale du prénom, le tout en minuscules.

Exemples:

Jet Li -> lij

Jo Rasafindramanana -> rasafinj

H4cker L33T -> "H4cker" is not a valid firstname

Joey $tar -> "$tar" is not a valid lastname
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *lower(char *str) {
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    if (str[i] <= 90 && str[i] >= 65)
      str[i] += 32;
  }
  return str;
}

void check(char *name, char *type) {
  int len = strlen(name);
  for (int i = 0; i < len; i++) {
    if (!isalpha(name[i])) {
      printf("\"%s\" is not a valid %s\n", name, type);
      exit(0);
    }
  }
}

int main(int ac, char **av) {
  char first[100];
  char last[100];
  scanf("%s", first);
  scanf("%s", last);
  check(first, "firstname");
  check(last, "lastname");
  printf("%.7s%.1s\n", lower(last), lower(first));
  return 0;
}
