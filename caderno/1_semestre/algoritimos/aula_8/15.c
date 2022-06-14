/*
  O tempo que um determinado avião gasta para percorrer o trecho entre 
  duas  localidades distintas está disponível através da seguinte tabela:

  0   2   11  6   15  11  1
  2   0   7   12  4   2   15
  11  7   0   11  8   3   13
  6   12  11  0   10  2   1
  15  4   8   10  0   5   13
  11  2   3   2   5   0   14
  1   15  13  1   13  14  0

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
    
  int cont=0, cidade_x, cidade_y, matrix[MAX_MATRIX][MAX_MATRIX], vetor_bd[MAX_MATRIX*MAX_MATRIX]={  0, 2, 11, 6, 15, 11, 1, 2, 0, 7, 12, 4, 2, 15, 11, 7, 0, 11, 8, 3, 13, 6,12, 11, 0, 10, 2, 1, 15, 4, 8, 10, 0, 5, 13, 11, 2, 3, 2, 5, 0, 14, 1,15, 13, 1, 13, 14, 0};

  //atribui valores do vetor a matriz
  for(int j=0; j < MAX_MATRIX; j++){
    for(int i=0; i < MAX_MATRIX; i++){
      matrix[i][j]=vetor_bd[cont];
      cont++;
    }
  }
  
  //formatar saida de printf
  for(int j=0; j < MAX_MATRIX; j++){
    for(int i=0; i < MAX_MATRIX; i++){
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }

  printf("\n---------------\n");

  //formatar saida de printf
  for(int j=0; j < MAX_MATRIX; j++){
    for(int i=0; i < MAX_MATRIX; i++){
      printf("%d\t", matrix[i+1][j+1]);
    }
    printf("\n");
  }
  
  int x, y;
  for(int j=0; j < MAX_MATRIX; j++){
    for(int i=0; i < MAX_MATRIX; i++){
      printf("%s", "Digite a cidade X: ");
      scanf("%s", &cidade_x);
      printf("%s", "Digite a cidade Y: ");
      scanf("%s", &cidade_y);

      switch(cidade_x){
        case 'a': case 'A': x=0; break;
        case 'b': case 'B': x=1; break;
        case 'c': case 'C': x=2; break;
        case 'd': case 'D': x=3; break;
        case 'e': case 'E': x=4; break;
        case 'f': case 'F': x=5; break;
        case 'g': case 'G': x=6; break;
        defall:
      }
      
      switch(cidade_y){
        case 'a': case 'A': y=0; break;
        case 'b': case 'B': y=1; break;
        case 'c': case 'C': y=2; break;
        case 'd': case 'D': y=3; break;
        case 'e': case 'E': y=4; break;
        case 'f': case 'F': y=5; break;
        case 'g': case 'G': x=6; break;
      }

      if(x == y){
        printf("\nFim programa!\n");
        return(0);
      }

      printf("\nTempo para percuso: %dh\n\n", matrix[x][y]);
    }
  }

  return(0);
}