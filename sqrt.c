#include <stdlib.h>
#include <stdio.h>

unsigned long long int racine_carre(unsigned long long int valeur, int precision);

double main (int argc, char *argv[]){

	char * pointeur_fin = argv[argc];

	unsigned long long int valeur = strtoull(argv[1], '\0', 10);


	printf("%llu\n",racine_carre(valeur, 100));

}

unsigned long long int racine_carre(unsigned long long int valeur, int precision){

		printf("%llu\n",valeur);


	if (valeur == 0 || valeur == 1){
		
		return valeur;

	}

	unsigned long long int hypothese = valeur/2;

	// methode de newton
	for(int i = 0 ; i < precision; i++){

		hypothese = (hypothese + valeur / hypothese) / 2;

	}

	return hypothese;

}
