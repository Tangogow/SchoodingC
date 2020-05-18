/*
Vous avez à votre disposition la structure People, définie comme suivant :

typedef struct{
    char* firstname;
    char* lastname;
    int age;
}People;
Dans le cas ou une structure contient des pointeurs, il vaut souvent mieux ne pas tenter d'écrire directement la structure dans le fichier, mais plutôt les champs les uns après les autres.
Dans notre cas, on considérera qu'un People sera enregistré comme les valeurs de firstname, lastname, et age, successivement.
Une chaîne de caractère est enregistrée en écrivant tous ses caractères, '\0' final compris.

Complétez la fonction pour qu'elle alloue, lise et retourne le People stocké  dans le fichier binaire dont le nom est passé en paramètre.
*/

char *readString(FILE *f) {
  char buffer[1000];
  int index = 0;

  do
    fread(buffer+index, sizeof(char), 1, f);
  while(buffer[index++]);
  char *res = malloc(sizeof(char)*index);
  strcpy(res, buffer);
  return res;
}

People* readPeople(char* filename) {
  FILE* f;

  f = fopen(filename, "r");
  People* p = malloc(sizeof(People));
  p->firstname = readString(f);
  p->lastname = readString(f);
  fread(&(p->age), sizeof(int), 1, f);
  return p;
}
