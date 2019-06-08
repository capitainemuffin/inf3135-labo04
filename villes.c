#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
* Modifie le string selon la taille demandée. 
* Coupe le string si trop grand, rajoute des espaces si trop petit.
*
* @param char* : le string à formatter
* @param taille : la taille à respecter
* @param inverse : true -> ajoute les espaces/coupe à la fin du mot 
* false -> ajoute les espaces/coupe au début du mot
*/
char* formatterMotTailleFixe(char* pointeur, int taille, bool inverse){

	char* mot = malloc(taille * sizeof(char));
	*(mot + taille -1) = '\0';
	bool fin = false;

	if(!inverse){

		for(int i = 0 ; i < taille -1 ; i++){

			if(*(pointeur + i) == '\0'){

				fin = true;

			} 

			if(!fin){

				*(mot + i) = *(pointeur + i);

			} else {

				*(mot + i) = ' ';

			}

		}

	} else {

		int decalage = taille - strlen(pointeur);
		int j = 0;

		for(int i = 0 ; i < taille -1; i++){

			if(decalage != 0){

				*(mot + i) = ' ';
				decalage --;

			} else {

				*(mot + i) = *(pointeur + j);
				j++;

			}

		}

	}

	return mot;
}

int main(int argc, char ** argv){

	FILE* fichier = fopen(argv[1], "r");

	if(fichier){

		char* ligne = malloc(sizeof(char) * 100);
		const char* delimiteur = ",";
		int index = 1;
		printf("Rang  Nom           Pays  Population\n");
		printf("----  ---           ----  ----------\n");

		while(fgets(ligne, 100, fichier)){

			printf("%04d  ", index);

			//ville
			char* pointeur = strtok(ligne, delimiteur);
			char* ville = formatterMotTailleFixe(pointeur, 15, false);
			printf("%s", ville);
			free(ville);

			//pays
			pointeur = strtok(NULL, delimiteur);
			char* pays = formatterMotTailleFixe(pointeur,5, false);
			printf("%s   ",pays);
			free(pays);

			//population 
			pointeur = strtok(NULL, delimiteur);
			char* population = formatterMotTailleFixe(pointeur, 10, true);
			printf("%s\n", population);
			free(population);

			index ++;

		}

	} else {

		printf("Erreur à l'ouverture du fichier.\n");
	}
	return 0;
}
