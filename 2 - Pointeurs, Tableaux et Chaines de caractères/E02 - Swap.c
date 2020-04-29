/*
Ecrire une fonction swap qui prend en paramètres deux pointeurs sur des entiers, et échangent leur valeur.
*/
void swap(int *a, int *b) {
  int tmp;
  tmp  = *a;
  *a = *b;
  *b = tmp;
}
