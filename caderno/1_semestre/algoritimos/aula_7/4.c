/*
Ler do teclado 12 números inteiros e armazená-los em um vetor N. 
Em seguida, 
copiar os elementos 
* pares divisíveis por 3 para o vetor X e os 
* ímpares divisíveis por 5 para o vetor Y.
0 -> par
1 -> impar
*/

#include <stdio.h>

int main(void){

	int num, x, y, teclado, X[0], Y[0], N[0];
	x=y=0;

	teclado = 12; // numeros de matriz do piloto

	//adicionar numeros ao vetor N
	for (int i=1; i <= teclado; ++i){

		//printar e alocar valor digitado em num
		printf("%s[%d]: ", " Digite um numero", i); scanf("%d", &num);
		
		N[i] = num; //adicionar i como posição de vetor e num como vetor

		//  0 == par    |  0 == divisivel por 3
		if( N[i]%2 == 0 && N[i]%3 == 0){
			x++;
			X[x] = N[i]; 
		}
		
		//  !=0 impar   |  0 == divisivel por 5
		if( N[i]%2 != 0 && N[i]%5 == 0){
			y++;
			Y[y] = N[i];
		}

	}

	//printar lista X
	printf("\n");
	for (int i=1; i <= x; ++i){
		printf(" X[%d]: %d\n", i, X[i]);
	}

	//printar lista Y
	printf("\n");
	for (int i=1; i <= y; ++i){
		printf(" Y[%d]: %d\n", i, Y[i]);
	}

	return(0);
}