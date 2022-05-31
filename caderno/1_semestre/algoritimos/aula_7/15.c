/*
  O tempo que um determinado avião gasta para percorrer o trecho entre 
  duas  localidades distintas está disponível através da seguinte tabela:

  https://i.imgur.com/B3sfhJ2.png

  Faça um algoritmo que leia a tabela acima 
  e informe ao usuário o tempo necessário para percorrer duas cidades por ele fornecidas, 
  até o momento que ele fornecer duas cidades iguais (origem e destino).

  Desafios:
  Faça um algoritmo que mostre a tabela sem repetições (apenas o triângulo superior ou o inferior).

  Faça um algoritmo que permita ao usuário informar várias cidades, 
  até inserir uma cidade X, 
  e que mostre o tempo total para cumprir todo o percurso especificado entre as cidades fornecidas.

*/

#include <stdio.h>
#define MAX_MATRIX 7

int main(void){
    
  int cont=0, matrix[MAX_MATRIX][MAX_MATRIX], vetor_bd[MAX_MATRIX*MAX_MATRIX]={  0, 2, 11, 6, 15, 11, 1, 2, 0, 7, 12, 4, 2, 15, 11, 7, 0, 11, 8, 3, 13, 6,12, 11, 0, 10, 2, 1, 15, 4, 8, 10, 0, 5, 13, 11, 2, 3, 2, 5, 0, 14, 1,15, 13, 1, 13, 14, 0};
  char cidade_x, cidade_y;

  for(int j=0; j < MAX_MATRIX; j++){
    for(int i=0; i < MAX_MATRIX; i++){
      matrix[i][j]=vetor_bd[cont];
      cont++;
    }
  }

  for(int j=0; j < MAX_MATRIX; j++){
    for(int i=0; i < MAX_MATRIX; i++){
      if( matrix[i][j] >= 10 ){
        printf(" %d", matrix[i][j]);
      }else{
        printf("  %d", matrix[i][j]);
      }
    }
    printf("\n");
  }

  printf("\n---------------\n");
  
  int x, y;
  for(int j=0; j < MAX_MATRIX; j++){
    for(int i=0; i < MAX_MATRIX; i++){
      printf("\n %s", "Digite a cidade X: ");
      scanf("%s", &cidade_x);
      printf("\n %s", "Digite a cidade Y: ");
      scanf("%s", &cidade_y);
      
      if( cidade_x == 'a'){ x=0; }
      else if( cidade_x == 'b'){ x=1; }
      else if( cidade_x == 'c'){ x=2; }
      else if( cidade_x == 'd'){ x=3; }
      else if( cidade_x == 'e'){ x=4; }
      else if( cidade_x == 'f'){ x=5; }

      if( cidade_y == 'a'){ y=0; }
      else if( cidade_y == 'b'){ y=1; }
      else if( cidade_y == 'c'){ y=2; }
      else if( cidade_y == 'd'){ y=3; }
      else if( cidade_y == 'e'){ y=4; }
      else if( cidade_y == 'f'){ y=5; }

      printf(" %d", matrix[x][y]);
    }
  }

  /* for (int i=0; i < MAX_MATRIX ; i++){
    printf(" %d", matrix[i][i]);
    printf(" %d", matrix[i][i-1]);
    printf(" %d", matrix[i][i-2]);
    printf(" %d", matrix[i][i-3]);
    printf(" %d", matrix[i][i-4]);
    printf("\n");
  } */


  return(0);
}