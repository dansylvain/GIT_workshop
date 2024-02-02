# Projet Collaboratif avec Git
Bienvenue dans notre projet collaboratif ! Nous allons explorer les principes fondamentaux de la collaboration avec Git. Suivez ces étapes pour ajouter votre contribution.

## Étapes du Travail Collaboratif
* Fork du Projet
Cliquez sur le bouton "Fork" en haut à droite de la page pour créer une copie du projet dans votre compte.
Clonez votre fork sur votre machine locale avec la commande suivante :  
`git clone [lien de votre fork]`

* Choix d'une fonctionalité à ajouter
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

* Ajout d'une Fonctionnalité
Créez une nouvelle branche pour votre fonctionnalité :  

`git branch nouvelle-fonction`  
`git switch nouvelle-fonction`  
Implémentez votre fonctionnalité.  

Ajoutez et commitez les modifications :

`git add .`  
`git commit -m "Ajout de la nouvelle fonctionnalité"  `

* Push de la Branche
Poussez la branche sur votre fork :  

`git push origin nouvelle-fonction  `

* Création d'une Pull Request
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
