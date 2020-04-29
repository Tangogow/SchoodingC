/*
On vous fournit un entier time, correspondant à un nombre de secondes.

Vous devez déclarer trois variables seconds, minutes, hours et leur assigner les valeurs correspondant  respectivement au nombre de secondes, minutes et heures représentés par time.

Par exemples:

si time vaut 3600, seconds, minutes et hours vaudront respectivement 0, 0, et 1.
si time vaut 612, seconds, minutes et hours vaudront respectivement 12, 10, et 0.
si time vaut 4205, seconds, minutes et hours vaudront respectivement 5, 10, et 1.
*/

int hours = 0;
int seconds = 0;
int minutes = 0;

while (time >= 3600) {
  hours++;
​‍‌‍﻿﻿﻿‌﻿  time -= 3600;
}

while (time >= 60) {
  minutes++;
  time -= 60;
}

seconds = time;
