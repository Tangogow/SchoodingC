/*
On vous fournit un tableau d'entiers Tab de taille N

Traduire l'algorithme suivant :

Créer une variable M, initialisée à la valeur du premier élément de Tab
Pour chaque élément de Tab:
    Si l'élément est plus grand que M :
        Affecter la valeur de l'élément à M
Afficher M
*/

int M = Tab[0];
for (int i = 0; i < N; i++)
  if ​‍‌‍﻿﻿﻿‌﻿(Tab[i] > M)
    M = Tab[i];
printf("%d", M);
