/*
Ler do teclado 12 números inteiros e armazená-los em um vetor N. 
Em seguida, 
copiar os elementos 
* pares divisíveis por 3 para o vetor X e os 
* ímpares divisíveis por 5 para o vetor Y.
0 => par
1 => impar
*/

/* 
	porque eu passei o vetor de X, Y como 0 e eles foram alocados dinamicamente? 
*/

#include <stdio.h>
#define TECLADO 4

int main(void){

	int N[TECLADO], X[0], Y[0],cont_x, cont_y, x, y;
	x=y=cont_x=cont_y=0;

	for(int i=0; i < TECLADO; i++){
		printf(" Digite um numero[%d]: ", i+1);
		scanf("%d", &N[i]); //atualizar os indices do vetor N
	}

	//atualizar X e Y
	for( int i=0; i < TECLADO; i++){
		if( ((N[i]%2)==0) ){     //Se for par
			if( ((N[i]%3)==0 )){   //Se for divisivel por 3
				printf("\n N[%d] = %d -> É par e divisivel por 3 ", i+1, N[i]);
				X[x]=N[i];     //Valor de X é atualizado pelo N
				x+=1;          //cont_x + cont_x+1 | cont x é o incremento de todas as passagens pelo if de divisão por 3
			}
		}
		else{                    //Se não for par
			if( ((N[i]%5)==0 )){   //Se for divisivel por 5
				printf("\n N[%d] = %d -> É divisivel por 5 ", i+1, N[i]);
				Y[y]=N[i];
				y+=1;
			}
		}
	}
	
	printf("\n\n");
	for(int i=0; i < x; i++){
		printf(" X[%d] -> %d\n", i+1, X[i]);
	}

	printf("\n");
	for(int i=0; i < y; i++){
		printf(" Y[%d] -> %d\n", i+1, Y[i]);
	}

	return(0);
}