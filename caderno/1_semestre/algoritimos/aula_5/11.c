/*
	Calcular a soma dos 100 primeiros nº naturais.
*/

#include <stdio.h>

int main(){

	int calculo=1;

	for (int i = 1; i <= 100; i++){
		calculo+=i;
	}

	printf(" A soma dos primeiros 100 numeros primos é: %d\n", calculo);

	return(0);
}