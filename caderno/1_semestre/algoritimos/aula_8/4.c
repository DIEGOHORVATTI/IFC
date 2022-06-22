/*
Ler do teclado 12 números inteiros e armazená-los em um vetor N. 
Em seguida, copiar os elementos 
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

int N_retorno(){
	return( printf("%d\n", 4000) );
}

int N_(){
	
	int N[TECLADO];
	for(int i=0; i < TECLADO; i++ ){
		printf("Digite N[%d]: ", i+1);
		scanf("%d", &N[i]);
	}

}

/* int X_( int vetor){
	
	int X[x];
	for(int i=0; i < TECLADO; i++ ){
		if( ((N[i]%3)==0 )){   //Se for divisível por 3
		printf("\n N[%d] = %d -> É par e divisível por 3 ", i+1, N[i]);	
			if( (( N[i]%2)==0) ){     //Se for par
					X[x]=N[i];     //Valor de X é atualizado pelo N
					x+=1;          //cont_x + cont_x+1 | cont x é o incremento de todas as passagens pelo if de divisão por 3
			}
		}
	}

	return(X[vetor]);

}

int Y_( int vetor){

	int Y[y];
	for(int i=0; i < TECLADO; i++ ){
		if( ((N[i]%5)==0 )){   //Se for divisível por 5
			printf("\n N[%d] = %d -> É impar e divisível por 5 ", i+1, N[i]);	
				if( (( N[i]%2)==1) ){     //Se for impar
						Y[y]=N[i];     //Valor de Y é atualizado pelo N
						y+=1;          //cont_x + cont_x+1 | cont n é o incremento de todas as passagens pelo if de divisão por 3
				}
		}
	}

	return( Y[vetor]);

} */


int main(void){

	//N_(); //atualizar o vetor N
	
	N_retorno();

	/* printf("x: %d", x);
 	printf("\n\n");
	for(int i=0; i < x; i++){
		printf(" X[%d] -> %d\n", i+1, X_(i));
	} */

	/* printf("\n");
	for(int i=0; i < y; i++){
		printf(" Y[%d] -> %d\n", i+1, Y_(i));
	} */

	return(0);
}