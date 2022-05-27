/*
  Escreva um algoritmo que lê uma matriz M(5,5) e 
  calcula as somas:
  da linha 4 de M.
  da coluna 2 de M.
  da diagonal principal.
  da diagonal secundária.
  de todos os elementos da matriz.
  Escreva estas somas e a matriz.
*/
#include <stdio.h> 
#include <stdlib.h>

#define MAX_LEITURA 5

int main(void){

  /*Matriz quadrada => A[n]x[m]
     n => n = linhas
     m => colunas
  */
  
  //atrubuição de valores randomicos a valores da matriz
  int matriz[MAX_LEITURA][MAX_LEITURA];
  for ( int j=0; j < MAX_LEITURA; j++ ){
    for ( int i=0; i< MAX_LEITURA; i++ ){
      matriz[i][j] = rand() % 5;
    }
  }

  //soma linha 4
  int soma_linha_4=0;
  for (int i = 0; i < MAX_LEITURA; i++){
    soma_linha_4+=matriz[i][3];
    printf(" %d", matriz[i][3]);
  }    
  printf("\n soma linha 4: %d \n", soma_linha_4);
  printf("-------------------\n\n");

  //soma coluna 2
  int soma_coluna_2=0;
  for (int i = 0; i < MAX_LEITURA; i++){
    soma_coluna_2+=matriz[1][i];
    printf(" %d", matriz[1][i]);
  }    
  printf("\n soma coluna 2: %d \n", soma_coluna_2);
  printf("-------------------\n\n");

  //soma diagonal principal
  int soma_diagonal_principal=0;
  for (int i=0; i < MAX_LEITURA ; i++){
    soma_diagonal_principal+=matriz[i][i];
    printf(" %d", matriz[i][i]);
  }
  printf("\n soma diagonal: %d \n", soma_diagonal_principal); 
  printf("-------------------\n\n");

  //soma diagonal segundaria
  int soma_diagonal_segundaria=0;
  for (int i=MAX_LEITURA-1; i >= 0 ; i--){       
    soma_diagonal_segundaria+=matriz[i][i];
    printf(" %d", matriz[i][(MAX_LEITURA-1)-i]);
  }
  printf("\n soma diagonal segundaria: %d \n", soma_diagonal_segundaria); 
  printf("-------------------\n\n");

  int soma_matriz=0;
  for ( int j=0; j < MAX_LEITURA; j++ ){
    printf(" %d-> ", j);
    for ( int i=0; i<MAX_LEITURA; i++ ){
      printf(" %d", matriz[i][j]);
      soma_matriz+=matriz[i][j];
    }
    printf("\n");
  }
  printf(" soma matriz: %d \n", soma_matriz);

  return(0);
}