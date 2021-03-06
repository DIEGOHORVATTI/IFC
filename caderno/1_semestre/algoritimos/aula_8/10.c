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
#include <time.h>

#define MAX_LEITURA 5

  /*Matriz quadrada => A[n]x[m]
     n => n = linhas
     m => colunas
  */
  
  //atribuição de valores randômicos a valores da matriz
  int matriz[MAX_LEITURA][MAX_LEITURA];
  int atribuicao(int vetor_max){
    
    srand(time(NULL));

    for ( int j=0; j < MAX_LEITURA; j++ ){
      for ( int i=0; i< MAX_LEITURA; i++ ){
        matriz[i][j] = rand() % vetor_max;
      }
    }
  }

  /* ------------- */
  int soma_linha_4(){
    int soma=0;
    for (int i = 0; i < MAX_LEITURA; i++){
      soma+=matriz[i][3];
      printf(" %d", matriz[i][3]);
    }    
    
    return( soma );
  }


  int soma_coluna_2(){
    int soma=0;
    for (int i = 0; i < MAX_LEITURA; i++){
      soma+=matriz[1][i];
      printf(" %d", matriz[1][i]);
    }    
    
    return( soma );
  }
  
  int soma_diagonal_principal(){
    int soma=0;
    for (int i=0; i < MAX_LEITURA ; i++){
      soma+=matriz[i][i];
      printf(" %d", matriz[i][i]);
    }
     return( soma );
  }

  int soma_diagonal_segundaria(){
    int soma=0;
    for (int i=MAX_LEITURA-1; i >= 0 ; i--){       
      soma+=matriz[i][i];
      printf(" %d", matriz[i][(MAX_LEITURA-1)-i]);
    }

    return( soma );
  }

  int soma_matriz(){
    int soma=0;
    for ( int j=0; j < MAX_LEITURA; j++ ){
      for ( int i=0; i<MAX_LEITURA; i++ ){
        soma+=matriz[i][j];
      }
    }
    
    return( soma );
  } 

  int debug_matriz(){
    for ( int j=0; j < MAX_LEITURA; j++ ){
      printf(" %d-> ", j+1);
      for ( int i=0; i<MAX_LEITURA; i++ ){
        printf(" %d", matriz[i][j]);
      }
      printf("\n");
    }
  }  

  int debug_matriz_manualmente(){
    int i, j;
    printf("\nLinha: ");
    scanf("%i", &i);
    printf("Coluna: ");
    scanf("%i", &j);

    printf("\n%d-> %d\n", j, matriz[i-1][j-1]);
  }  

  int print(){
    printf("-------------------\n\n");
  }

int main(void){

  atribuicao( MAX_LEITURA );
  
  printf("\n soma linha 4: %d \n", soma_linha_4()); print();
  
  printf("\n soma coluna 2: %d \n", soma_coluna_2()); print();
  
  printf("\n soma diagonal: %d \n", soma_diagonal_principal());  print();
  
  printf("\n soma diagonal segundaria: %d \n", soma_diagonal_segundaria());  print();

  printf(" soma matriz: %d \n", soma_matriz()); print(); 

  debug_matriz(); print(); 
  
  debug_matriz_manualmente();

  return(0);
}