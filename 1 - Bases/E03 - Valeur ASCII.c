/*
On vous fourni deux chars a et b.

Si a est après b dans le code ASCII, le programme affiche "WRONG INPUT" et quitte.

Sinon, il affiche tous les caractères entre a et b inclus, un par ligne, avec le format suivant :

'<char>'<space>:<space><ascii>

avec <char> correspondant au caractère courant, <space> à un espace, et <ascii> le code ascii correspondant.

Exemple, si a et b valent respectivement 'a' et 'c', le programme doit afficher :

'a' : 97
'b' : 98
'c' : 99
*/

if (a > b)
  printf("WRONG INPUT");
else
  while (a​‍‌‍﻿﻿﻿‌﻿ <= b) {
    printf("'%c' : %d\n", a, a);
    a++;
}
