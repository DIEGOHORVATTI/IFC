//gcc ./2.c -o ./exe/2 && ./exe/2
#include <stdio.h>

int main(){

	printf("\n 2) Fazer um programa que calcule a tabuada de qualquer número, e o limite de cálculo deve ser definido pelo usuário.\n\n");

	int num, max_num;
	num=max_num=0;

	printf(" Imprimir tabuada de: ");
	scanf("%i", &num);

	printf(" Até: ");
	scanf("%i", &max_num);

	//enquanto i for menor ou iqual a ('numero máximo(max_num)' dividido por 'numero tabuada(num)'
	for(int i=0; i <= max_num; i++ ){
		//imprima (i vezes 'numero tabuada')
		printf(" %d\n", i*num);
	}

	return(0);
}