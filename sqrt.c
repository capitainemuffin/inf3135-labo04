#include <stdlib.h>
#include <stdio.h>

long double racine_carre(unsigned long long int valeur, int precision);

double main (int argc, char *argv[]){

	unsigned long long int valeur = atoll(argv[1]);


	printf("%LF\n",racine_carre(valeur, 100));

}

long double racine_carre(unsigned long long int valeur, int precision){


	if (valeur == 0 || valeur == 1){
		
		return valeur;

	}

	long double hypothese = valeur/2;

	// methode de newton
	for(int i = 0 ; i < precision; i++){

		hypothese = (hypothese + valeur / hypothese) / 2;

	}

	return hypothese;

}
