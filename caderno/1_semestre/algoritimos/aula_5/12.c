/*
	Escrever em ordem decrescente os números múltiplos de 5 entre 100 e -100.
*/

#include <stdio.h>
#include "./make.c"

int main(){

	int calculo=1;

	for (int i = -100; i <= 100; i++){
		printf(" %d\n", i*5);
	}

	make();
	return(0);
}