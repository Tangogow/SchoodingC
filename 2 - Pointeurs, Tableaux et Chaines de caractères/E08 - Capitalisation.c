/*
Complétez la fonction pour qu'elle capitalise sur place la chaine passée en paramètre.

Capitaliser une chaîne de caractère consiste à mettreen minuscule chaque lettre qui est précédée d'une autre lettre, et inversement, de mettre en majuscule toute lettre étant le début d'un mot.

Par exemple :

"BONJOUR LE MONDE" devient "Bonjour Le Monde"

"Mr le president" devient "Mr Le President"

"la fin des haricots" devient "La Fin Des Haricots"

Un algorithme pour faire cela peut être :

si le premier char est une minuscule:
     le mettre en majuscule
pour tous les autres char :
    si c'est une majuscule, et que le char précédent est une lettre :
         le mettre en minuscule
    si c'est une minuscule, et que le char précédent n'est pas une lettre :
         le mettre
*/
void capitalize(char *str) {
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    if (str[i] <= 122 && str[i] >= 97 && (str[i - 1] == ' ' || i == 0))
    str[i] -= 32;
    else if (str[i] <= 90 && str[i] >= 65 && str[i - 1] != ' ' && i != 0)
      str[i] += 32;
    printf("%c", str[i]);
  }
  printf("\n");
}
