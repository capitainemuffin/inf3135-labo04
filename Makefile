#Makefile pour le labo 4

default : sqrt

sqrt : sqrt.c
	gcc -o sqrt sqrt.c

clean :
	rm -f sqrt

.PHONY : clean