/*
 Matriz quadrada => A[n]x[m]
 n => n = linhas
 m => colunas

	Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas:
	a) da linha 4 de M.
	b) da coluna 2 de M.
	c) da diagonal principal.
	d) da diagonal secundária.
	e) de todos os elementos da matriz.
	f) Escreva estas somas e a matriz.
*/

#include <stdio.h>

int main(void){

	int linhas = 5;
	int colunas = 5;
	int M[linhas][colunas], soma_a, soma_b, soma_c, soma_d, soma_e, soma_f;
	soma_a=soma_b=soma_c=soma_d=soma_e=soma_f=0;

	//atrubuição de matriz
	for( int j=1; j <= 5; j++ ){
		for( int i=1; i <= 5; i++ ){
			M[j][0] = j;
			M[j][i] = i;	
		}
	}

	//soma a
  for( int i=1; i <= linhas; i++ ){
    soma_a+=M[4][i];   
  }
  printf(" soma a: %d\n", soma_a );

  //soma b
  for( int i=1; i <= linhas; i++ ){
    soma_b+=M[i][2];   
  }
  printf(" soma b: %d\n", soma_b );

  //soma c
  for( int j=1; j <= linhas; j++ ){
    for( int i=1; i <= colunas; i++ ){
	    soma_b+=M[j][i];   
	    printf(" kapa: %d\n", M[j][i] );
	  }   
  }
  printf(" soma c: %d\n", soma_c );

	/*for( int j=1; j <= 5; j++ ){
		for( int i=1; i <= 5; i++ ){
			printf(" %d\n", M[][i] );
		}
	}*/

	return(0);
}
