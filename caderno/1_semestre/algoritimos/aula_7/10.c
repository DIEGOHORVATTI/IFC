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
#define MAX_LEITURA 5

int main(void){

  int matrix[MAX_LEITURA][MAX_LEITURA];
  for (int j = 0; j < MAX_LEITURA; ++j){
    for (int i = 0; i < MAX_LEITURA; ++i){
      matrix[j][i];
      printf(" %d", matrix[j][i]);
    }    
    printf("\n");
  }

  /* int mat_1[5][5] = { 3, 8, 1, 6, 2, 0, 8, 3, 9};
  for (int j = 0; j < 3; ++j){
    for (int i = 0; i < 3; ++i){
      printf(" %d", mat_1[j][i]);
    }    
    printf("\n");
  }

  //soma linha 2
  int soma_linha_2=0;
  for (int i = 0; i < 3; ++i){
    soma_linha_2+=mat_1[1][i];
  }    
  printf("\n soma linha 2: %d \n", soma_linha_2);

  //soma coluna 2
  int soma_coluna_2=0;
  for (int i = 0; i < 3; ++i){
    soma_coluna_2+=mat_1[i][1];
  }    
  printf("\n soma coluna 2: %d \n", soma_coluna_2);
  
  //soma diagonal
  int soma_diagonal=0;
  for (int i = 0; i < 3; ++i){
    soma_diagonal+=mat_1[i][i];
    printf(" %d", mat_1[i][i]);
  }
  printf("\n soma diagonal: %d \n\n", soma_diagonal); 

  //soma diagonal segundaria
  int soma_diagonal_inversa=0;
  for (int i = 2; i >= 0; --i){
    soma_diagonal_inversa+=mat_1[i][i];
    printf(" %d", mat_1[i][i]);
  }
  printf("\n soma diagonal inversa: %d \n\n", soma_diagonal_inversa); 

  //soma diagonal segundaria
  printf("\n soma zuada: %d %d %d \n\n", mat_1[0][2], mat_1[1][1], mat_1[2][0] );  */


  return(0);
}