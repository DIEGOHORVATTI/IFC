/*
	Leia 5 valores para uma variável a . 
	A seguir mostre quantos valores digitados foram pares, 
	quantos valores digitados foram ímpares, 
	quantos foram positivos e 
	quantos foram negativos.
*/

#include <stdio.h>

int main(){

	int a, num_pares, num_impares, num_negativos, num_positivos;
	num_negativos=num_positivos=num_pares=num_impares=a=0;

	for(int i = 1; i <= 5; i++){
		printf("\n%s", " Digite um número: ");
		scanf("%d", &a);

		//pares | impares
		if( ((a%2)==0) ){
			num_pares++;
		}else{
			num_impares++;
		}

		//positivos | negativos
		if( a>=0 ){
			num_positivos++;
		}else{
			num_negativos++;
		}
	}

	printf(" Números pares: %d\n", num_pares);
	printf(" Números impares: %d\n", num_impares);
	printf(" Números positivos: %d\n", num_positivos);
	printf(" Números negativos: %d\n", num_negativos);

	return(0);
}