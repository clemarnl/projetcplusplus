# Informations générales #
Ce projet est une serre gérée automatiquement par différents capteurs et actionneurs.
Il est composé de deux classes mères (Capteur et Actionneur) dont héritent les classes filles correspondant aux différents capteurs et actionneurs.

Lorsqu'on ajoute un élément au système, il faut le déclarer dans la classe "application_serre.h". Il faut ensuite définir la broche à laquelle il est branché dans la classe"application_serre.cpp".


# Actionneurs #
Les actionneurs simples peuvent être allumés ou éteints (c'est le cas des leds, etc).
Les autres ont des classes définies spécifiquement pour eux (par exemple le moteur dans notre système, qui ouvre ou ferme le toit de la serre).


# Capteurs #
Les capteurs sont classés en fonction du type de la donnée qu'ils renvoient. Par exemple, les capteurs digitaux vont renvoyer un int.
L'acquisition des données se fait grâce à la fonction acquisition().
