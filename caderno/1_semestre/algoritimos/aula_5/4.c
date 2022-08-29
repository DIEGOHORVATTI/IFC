//compilador "gcc ./4.c -o ./exe/4.exe && ./exe/4.exe
/*
	Escrever um algoritmo que lê um valor N inteiro e positivo 
	e que calcula e escreve o valor de E:   
  E = 1 + 1 / 1 + 1 / 2 + … + 1 / N
*/
//gcc ./4.c -o ./exe/4 && ./exe/4

#include <stdio.h>

int main(){

	int N=0;
	printf(" Valor de N: ");
	scanf("%i", &N);

	if (N >= 0)
	{
		printf(" E = 1+1 / 1+1 / 2+1 / N\n");
		printf(" E = %d   / %d   / %d   / %d\n", 1+1, 1+1, 2+1, N );
		printf(" E = %d   / %d   / %d\n", 1+1, 1+1, ((2+1)/(N)) );
		printf(" E = %d   / %d\n", ((1+1)/(1+1)), ((2+1)/(N)) );
		printf(" E = %f\n", ((((1+1)/(1+1))/((2+1)/(N)))) );
	}else{
		printf(" Apenas números inteiros e positivos");
	}
	
	return(0);
}
