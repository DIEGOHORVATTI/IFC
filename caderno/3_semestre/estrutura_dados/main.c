#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define MAX_PIXEL 255
#define N 10
#define M 10
/*Matriz quadrada => A[n]x[m]
	n => n = linhas
	m => colunas
*/

int matriz[N][M];
	

int main(){
	srand(time(NULL));

	int matriz[N][M];


	//atribui valores do vetor a matriz
  for(int j=0; j < M; j++){
    for(int i=0; i < N; i++){
      matriz[i][j] = rand() % MAX_PIXEL;
    }
  }
  
  //formatar saida de printf
  for(int j=0; j < M; j++){
    for(int i=0; i < N; i++){
      printf("%d ", matriz[i][j]);
    }
		 printf("%d", "\n");
	}

	return(0);
}


