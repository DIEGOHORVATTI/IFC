/* Fazer um programa que retorne quantos valores digitados pelo usuário são negativos. 
O programa deverá parar a execução quando o usuário informar o número zero ou for informado 20 valores. 
*/
//gcc ./3.c -o ./exe/3 && ./exe/3
#include <stdio.h>
#include <stdlib.h>
int main(){


	int valor, valores_negativo, valores_positivo;
	valor=valores_negativo=valores_positivo=0;

	for(int i=1; i <= 3; i++){
		
		printf("\n\nDigite valor%d: ", i);
		scanf("%i", &valor);

		if (valor != 0){
			if(valor >= 1){ valores_positivo++; }
			else{ valores_negativo++; }
		}else{
			printf("Bay Bay!");
			exit(0);
		}

	}

	printf("\n\n=====================\n\n");
	printf("Valores positivos: %d\n", valores_positivo);
	printf("Valores negativos: %d\n", valores_negativo);

	return(0);
}