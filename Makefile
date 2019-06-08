options = -Wall -pedantic -std=c11

#Makefile pour le labo 4

default : sqrt villes

sqrt : sqrt.c
	gcc -o sqrt sqrt.c $(options)

villes : villes.c 
	gcc -o villes villes.c $(options)
	
clean :
	rm -f sqrt
	rm -f villes

.PHONY : clean