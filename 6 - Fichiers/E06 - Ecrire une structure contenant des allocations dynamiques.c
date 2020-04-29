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

Complétez la fonction pour qu'elle écrive le People passé en paramètre, dans le fichier binaire dont le nom est passé en paramètre.
*/

void writePeople(char* filename, People* p){
  FILE* f;
  int l = 0;

  f = fopen(filename, "w");
  l = strlen(p->firstname);
  fwrite(p->firstname,​‍‌‍﻿﻿﻿‌﻿ sizeof(char), l+1, f);
  l = strlen(p->lastname);
  fwrite(p->lastname, sizeof(char), l+1, f);
  fwrite(&(p->age), sizeof(int), 1, f);
  fclose(f);
}
