# Projet Collaboratif avec Git
Bienvenue dans notre projet collaboratif ! Nous allons explorer les principes fondamentaux de la collaboration avec Git. Suivez ces étapes pour ajouter votre contribution.

## Travail Collaboratif : se mettre d'accord
Il est possible de configurer et d'utiliser Git de différentes façons, et c'est pourquoi il est capital de se mettre d'accord avec son équipe sur un protocole d'utilisation pour éviter les conflits. Une collaboration harmonieuse dans un projet Git repose sur des directives claires et partagées par toute l'équipe.  

Voici quelques points essentiels à considérer pour établir un protocole de travail collaboratif efficace :

1. Stratégie de Branching :  
Définissez une stratégie de branching qui correspond à la structure de votre projet. Par exemple, utilisez des branches spécifiques pour les fonctionnalités, les correctifs, et les versions stables.  

2. Conventions de Nommage :  
Établissez des conventions de nommage pour les branches, les commits, les tags, etc. Cela rendra votre historique Git plus lisible et compréhensible.

3. Politique de Commits :  
Définissez des règles pour les messages de commit. Utilisez un style clair et informatif, précisant la nature des modifications apportées.  

4. Cycle de Vie des Pull Requests :  
Précisez les étapes que doit suivre une pull request, depuis sa création jusqu'à sa fusion. Cela inclut la revue de code par les pairs, les tests automatisés, et l'approbation finale.  

5. Gestion des Conflits :  
Élaborez une procédure pour résoudre les conflits de fusion. Encouragez la communication entre les membres de l'équipe lorsqu'un conflit survient.  

6. Définition des Rôles :  
Assignez des rôles spécifiques au sein de l'équipe, tels que le propriétaire du dépôt, les contributeurs principaux, et les responsables des pull requests.  

7. Intégration Continue :  
Mettez en place des processus d'intégration continue pour garantir que les modifications sont régulièrement testées et fusionnées dans la branche principale.  

8. Documentation :  
Assurez-vous que tout le monde comprend les conventions et les processus établis en documentant clairement les lignes directrices de travail collaboratif.
En établissant ces bases, votre équipe pourra travailler de manière coordonnée, minimisant ainsi les erreurs et les retards. La clé est d'assurer une communication ouverte et de mettre à jour régulièrement les directives en fonction de l'évolution du projet.  

## Étapes du Travail Collaboratif : commandes GIT
1. Fork du Projet
Cliquez sur le bouton "Fork" en haut à droite de la page pour créer une copie du projet dans votre compte.
Clonez votre fork sur votre machine locale avec la commande suivante :  
`git clone [lien de votre fork]`

2. Choix d'une fonctionalité à ajouter
Choisissez une fonction à ajouter à l'application de départ.
exemples:
- ft_strlen
- ft_putchar
- ft_strcmp
- ft_strcat
- ft_strdup
- ft_split
- ft_strcpy
- ft_tolower
- ft_toupper
- ft_isalnum
- ft_isdigit
- ...

3. Ajout d'une Fonctionnalité
Créez une nouvelle branche pour votre fonctionnalité :  

`git branch nouvelle-fonction`  
`git switch nouvelle-fonction`  
Implémentez votre fonctionnalité.  

Ajoutez et commitez les modifications :

`git add .`  
`git commit -m "Ajout de la nouvelle fonctionnalité"  `

4. Push de la Branche
Poussez la branche sur votre fork :  

`git push origin nouvelle-fonction  `

5. Création d'une Pull Request
Rendez-vous sur la page de votre fork sur la plateforme web.  
Cliquez sur "New Pull Request" pour créer une pull request.  
Sélectionnez la branche principale du projet comme branche de base pour la pull request.  

* Révision et Fusion
Les collaborateurs peuvent commenter et réviser votre pull request.  
Une fois approuvée, le propriétaire du projet peut la fusionner.  

* Mise à Jour Locale
Revenez sur votre machine locale.  
Passez à la branche principale et mettez à jour votre copie locale :  

`git switch main  `  
`git pull origin main  `

## Autres considérations
#### fichier .gitignore  
Un fichier .gitignore liste les fichiers à ne pas inclure au moment de commit.  
exemple de contenu d'un fichier .gitignore:  

`*.o`  
`*.a`  
`minishell`  
#### Documentation du Code  
N'hésitez pas à vous mettre d'accord sur une façon de vous laisser des messages dans le code concernant des tâches à effectuer (TODO) et autres remarques.  
Commentez les changements effectués. Commentez les modifications effectuées / suggestions concernant le code d'un collaborateur, ...  

#### Bonnes Pratiques de Messages de Commit
- Concision et Clarté :  
Messages succincts, décrivant clairement l'objectif du commit en une phrase.

- Langage Impératif :  
Utilisation du langage impératif pour indiquer l'action effectuée par le commit.

- Limitation à une Idée :  
Chaque commit doit représenter une seule idée ou fonctionnalité pour des changements atomiques.
es numéros de tâches ou de tickets pour une traçabilité efficace.

- Révision Avant Validation :  
Relecture du message de commit avant validation pour assurer clarté et précision.

#### Résolution des Conflits :  
Les conflits peuvent être résols manuellement.  
Certaines règles peuvent aider à éviter les conflits:  
- ne jamais travailler en même temps sur le même fichier  
=> certains fichiers peuvent être dédoublés pour que chacun travaille avec sa version et qu'il n'y ait pas de conflit  
- enlever le header de 42 des fichiers tant que le fichier n'est pas terminé (une simple modification sauvegarde et change la date => conflit)  
- toujours se mettre à jour dès qu'un membre de l'équipe à merge un de ses fichiers pour que tous les collaborateurs aient le même code source  
