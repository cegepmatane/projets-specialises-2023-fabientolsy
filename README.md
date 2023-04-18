# MusiFlow - Fabien Tolsy

Le projet consiste a creer une application de lecture audio. Des musiques sont integrees dans l'application et l'utilisateur peuyt se balader dans cette bibliohreque de chansons et les lire, a la meme maniere que peut faire Spotify ou Deezer.

J'ai voulu y ajouter une option afin de ne pas faire un copier-coller de ces applications. Cette fonctionalite est d'afficher les paroles et de donner la possibilite de les traduire en francais ou en anglais. C'est a dire que si les paroles originales sont en anglais et que l'utilisateur souhaite les traduire, les paroles originales seront remplacees par celles en frnacais (et inbersement si les paroles originales sont en francais).

Durant le projet, j'ai rencontre deux problemes majeurs (dont l'un qui s'est avere finalement pas tant l'etre). 
Le premier a etait lorsque j'ai voulut deployer ma version de prototype de l'application. Le probleme etait qu'il manquait une librairie a l'executable afin de s'excecuter. Je ne comprenais pas puisque les librairies que j'utilisait etait celles de Qt, qui etaient deja presentes dans mon ordinateur. Apres deux semaines de recherches et d'essais erreurs, j'ai finalement compris que finalement, j'utilisait juste la mauvaise invite de commandes pour deployer l'application.

Le deuxieme probleme que j'ai rencontre concerne MySQL. En effet, a l'origine du projet, il etait definit qu'a la fin , l'utilisateur pourrait se creer un compte, s'y connecter et se creer des listes de lectures. Pour que cela fonctionne, il faut umne base de donnees. J'avais choisit MySQL. Cependant. mon projet n'arrivais aucunement a se connecter a ma base de donnees, car le fichier pilote (driver en anglais) etait present mais pas active. J'ai fouiller partout sur internet et aucune solution ne marchait. Ma piste sur la source du probleme est le fait que j'ai utilise uine version beta de Qt Creator (la version 6.6.0), ce qui fait que pas toutes les librairies y sont compatible. Par manque de temps, j'ai donc decide d'annuler cette fonctionnalite et de l'a travailler sur mon temps personnel. Par contre, je voulais quand meme aojuter une fonctionnalite de plus a ma version de prototype. J'ai donc fait en sorte que quand l'utilkisateur lance la lecture d'une musique, la pochette de l'album qui est assossie a cette chanson s'affiche a l'ecran.

Dans un cadre de projet personnel et non plus scloraire, j'aimerais prendre le temps de continuer a travailler dessus afin de rendre l'applicaiton plus jolie, avec plus de contenut, donner le choix a l'utilisateur de choisir la langue des paroles traduites et qu'il puisse se connecter / s'inscrire afin de se creer des listes de lecture.

Une demonstration de l'application 1.0 est disponible sur YouTube: https://youtu.be/QjNxL2SmHpE
