# Ft_printf  - En cours d'actualisation
Recodez votre printf !

Usage identique à la fonction printf :

    • ft_printf("Mon texte a afficher %Mon_type Mon autre texte a afficher", argument de type Mon_type);

Principales Notions

    • Creation d'un parser irréprochable,
    • Initiation aux fonctions variadiques,
    • Apprehension de tous les typages possibles en C.

Résumé du sujet :

Quelque soit le langage de programmation considéré, la fonction printf (ou ses équivalents)
est toujours une fonction extrêment pratique. La raison principale est bien évidemment
le confort de formatage, et le support de types hétérogènes en nombre variable.
Certaines variantes proposent même de pouvoir écrire la chaine de caractères résultat sur
un file descriptor ou un stream particulier, ou bien même carrément de récuperer cette
chaine sans l’imprimer. Bref, c’est une fonction incontournable que nous vous proposons
de recoder aujourd’hui.


La versatilité de la fonction printf en C représente pour nous un excellent exercice
de programmation. D’une difficulté modérée, ce projet va vous permettre de découvrir
les fonctions variadiques en C dans un contexte particulièrement adapté, et de voir un
excellent exemple d’un “dispatcher” rudimentaire implémenté en C à l’aide d’un tableau
de pointeurs sur fonctions.


La clef d’un ft_printf réussi est un code bien structuré et facilement extensible, car
plus le temps passera, plus vous serez tentés de continuer à étendre votre ft_printf, vous
facilitant ainsi la vie sur les prochains projets. Prenez donc le temps de coder proprement
en gardant en tête que vous devrez relire votre code d’ici quelques semaines ou quelques
mois pour étendre ses fonctionnalités selon votre besoin. Ce serait dommage de ne pas le
faire parce que vous ne pouvez pas vous relire, non ?
