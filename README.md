# Buta!
Diagramme de Gantt:

[image](https://user-images.githubusercontent.com/95500795/144764068-5d436dc3-150c-4466-af66-c937385c4295.png)

Description du projet:

Buta est une tirelire intelligente et connectée. Elle trie les pièces dans différents compartiments puis on peut lui demander une certaine somme à récupérer et elle va, en fonction des pièces présentes à l'intérieur, rendre cette somme dans un compartiment. La demande de remise se passe sur son téléphone par Bluetooth ou directement sur la machine qui sera équipée d'un écran LCD et d'une poignée de boutons poussoirs pour choisir la somme voulue.


Détails :


Pour la partie triage, j'ai deux idées:

La première est beaucoup plus demandante en ressource et en temps, je la laisse de côté sauf si l'autre solution fonctionne.
On fait tomber les pièces une par une sur une balance qui les pèse et sait de quelle pièce il s’agit, ensuite un petit bras robotique qui peut tourner autour de la balance sur un axe vient pousser la pièce dans son compartiment dédié placé sur le bord de la balance. Cette méthode est difficile à réaliser car le bras doit être plutôt précis et le problème majeur est le temps que prends cette différentiation.

La seconde méthode est bien plus simple mais j'ai quelques doutes sur sa fiabilité.
On fait glisser les pièces sur une plateforme qui contient des trous de plus en plus gros. Chaque trou correspond au diamètre de chaque pièce qui tombe donc directement dans son compartiment dédié. Beaucoup plus rapide et simple à réaliser, cependant j'espère que les pièces de diamètre presque identiques (50c et 1e qui n'ont qu'1mm de différence) ne se bloqueront pas sur les autres trous. 

Pour la partie redistribution des pièces :

Chaque compartiment est en forme de cylindre, les pièces tombent donc à plat et s'empilent les unes sur les autres.
Le bas du cylindre est troué et permet à une pièce de passer si elle est poussée, c'est là que vient le bras en acier flexible qui aura une largeur équivalente à celle de la pièce pour n'en pousser qu'une. Chaque cylindre sera composé de son propre bras qui sera simple à réaliser car ils n’ont pour fonction que d'avancer et de reculer

Pour savoir quelles pièces sont tombées, je placerai à la sortie de chaque trou un détecteur de distance qui détectera dès qu'une pièce tombera.
Le reste des fonctionnalités seront codées sur la carte Arduino.
