# Labo 4

- Nom : Sofiane Selaoui
- Code permanent : SELS28049204
- Cours : INF3135

## Exercice 2 

- Q.1 : `man printf | head -n20 > man-printf.txt`
- Q.3 : `git log | grep 'Author' | uniq`
- Q.4 : `git log | grep 'Author' | uniq | sed 's/Author: //g' | sed 's/<.*>//g'`

## Extra
J'ai appliqué [la méthode de Newton](https://en.wikipedia.org/wiki/Newton%27s_method) pour trouver la racine carré d'un nombre Naturel dans ma fonction `racine_carre`.  

La fonction prend aussi un argument `precision`, qui permet de définir le nombre d'occurence, pour se rapprocher le plus possible de la bonne réponse. 