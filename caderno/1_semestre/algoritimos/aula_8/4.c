/*
Ler do teclado 12 números inteiros e armazená-los em um vetor N. 
Em seguida, copiar os elementos 
* pares divisíveis por 3 para o vetor X e os 
* ímpares divisíveis por 5 para o vetor Y.
0 => par
1 => impar
*/

#include <stdio.h>
#define TECLADO 4

int N[TECLADO], x=0, y=0;

int N_atribuicao(){
	for(int i=0; i < TECLADO; i++ ){
		printf("Digite N[%d]: ", i+1);
		scanf("%d", &N[i]);
	}
}

int x_Tamanho(){
	for(int i=0; i < TECLADO; i++ ){
		if( ((N[i]%3)==0 )){   //Se for divisível por 3
			if( (( N[i]%2)==0) ){     //Se for par
					x+=1;
			}
		}
	}
}


int y_Tamanho(){
	for(int i=0; i < TECLADO; i++ ){
		if( ((N[i]%5)==0 )){     //Se for divisível por 5
			if( (( N[i]%2)==1) ){  //Se for impar
				y+=1;
			}
		}
	}
}

int X_( int vetor){

	int X[x], x_contador=0;
	for(int i=0; i < TECLADO; i++ ){
		if( ((N[i]%3)==0 )){      //Se for divisível por 3
			if( (( N[i]%2)==0) ){   //Se for par
				X[x_contador]=N[i];            //Valor de X é atualizado pelo N
				x_contador+=1;
			}
		}
	}

	return(X[vetor]);
}

int Y_( int vetor){

	int Y[y], y_contador=0;
	for(int i=0; i < TECLADO; i++ ){
		if( ((N[i]%5)==0 )){     //Se for divisível por 5
			if( (( N[i]%2)==1) ){  //Se for impar
				Y[y_contador]=N[i];           //Valor de X é atualizado pelo N
				y_contador+=1;
			}
		}
	}

	return(Y[vetor]);
}

int main(void){

	N_atribuicao(); //atualizar o vetor N

	x_Tamanho();
	y_Tamanho();

	printf("\nx=%d, y=%d\n", x, y);

	printf("\n");
	for(int i=0; i < TECLADO; i++){
		printf("N= %d\n", N[i]);
	}
	
	printf("\n");
	for(int i=0; i < x; i++){
		printf("X= %d\n", X_(i));
	}

	printf("\n");
	for(int i=0; i < y; i++){
		printf("Y= %d\n", Y_(i));
	}
	
	return(0);
}