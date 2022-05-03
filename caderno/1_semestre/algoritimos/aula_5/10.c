/*
	Escreva um algoritmo que calcule a média dos números digitados pelo usuário, 
	se eles forem pares. 
	Termine a leitura se o usuário digitar zero (0).

	// resto 0 = par
	// resto 1 = impar 
*/

#include <stdio.h>
#include "./make.c"

int main(){

	int num = 0; 
	printf("%s", " Digite um numero: ");
	scanf("%d", &num);

	if ( ((num%2)==0) ){
		printf(" Numero par: %d\n", num);
	} else{
		printf(" Numero impar: %d\n", num);
	}

	make();
	return(0);
}