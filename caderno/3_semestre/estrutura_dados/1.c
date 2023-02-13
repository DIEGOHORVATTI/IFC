#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define M 10

/*
 Matriz quadrada => A[n]x[m]
	n => n = linhas
	m => colunas
*/

/* 
  ! matriz dinamica com ponteiros
  *(mat + i) -> acesar todos os indices do vetor
  *(*(mat + i) + j) -> acesar todos os indices de todos os vetores sendo assim uma matriz
*/

/* 
  %2 resto 0 = par
	%2 resto 1 = impar 
*/

/*
  Dada uma matriz ma(N,M) de inteiros faça um programa em C que:
  Carregue e escreva a matriz considerando que N e M serão duas constantes de valores 10 e 10, 
  respectivamente;

  Crie 2 vetores, sl(N) e mc(M), que contenham, respectivamente, as somas dos valores ímpares 
  das linhas e a média dos valores pares das colunas da matriz ma(N,M). 
  Escreva os vetores de maneira que o usuário consiga interpretar seu conteúdo adequadamente;
  Calcule e escreva a diferença entre a diagonal principal e a diagonal secundária da matriz.

	Atenção, para esta questão considerar o uso dos conteúdos:
  manipulação de vetores e matrizes;
  modularização e passagem de parâmetros;
*/

int main(){
    
  srand(time(NULL));

  int **ma = malloc(M * sizeof(int*));
  int *sl = malloc(N * sizeof(int*));
  int *mc = malloc(M * sizeof(int*));

  for(int i = 0; i < M; i++){
   *(ma + i) = malloc(N * sizeof(int));
  }

  for (int j = 0; j < M; j++){
    for (int i = 0; i < N; i++){
      *(*(ma + i) + j) = rand() % 4;
      if( *(*(ma + i) + j) % 2 == 0 ) {
        *(sl + i) += *(*(ma + i) + j);
      }
      if( *(*(ma + i) + j) % 2 != 0 ) {
        *(mc + j) += *(*(ma + i) + j);
      }
    }
  }

  for (int j = 0; j < M; j++){
    for (int i = 0; i < N; i++){
      printf(" %d", *(*(ma+i) + j) );
    }
    printf("\n");
  }

  for (int i = 0; i < N; i++){
    printf("\nResultado soma: %d", *( sl + i ) );
  }

  printf("\n");
  for (int i = 0; i < N; i++){
    printf("\nResultado soma: %d", *( mc + i ) );
  }

  printf("\n");
  free(ma);
  free(sl);

  return(0);
}