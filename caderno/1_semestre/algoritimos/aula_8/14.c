/*
  Leia uma matriz 10 x 10 que se refere respostas de 10 questões de múltipla escolha, 
  referentes a 10 alunos. 
  Leia também um vetor de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d. 
  Seu programa deverá comparar as respostas de cada candidato com o gabarito e emitir um vetor Resultado, 
  contendo a pontuação correspondente.
*/

#include <stdio.h>
#define MAX_POSITION 10

int main(void){
  
  int matriz_rest_quests[MAX_POSITION][MAX_POSITION];
  char vetor_gabarito[MAX_POSITION]={ 'b', 'c', 'b', 'a', 'c', 'd', 'c', 'a', 'c', 'd'};


  for(int j=0; j < MAX_POSITION; j++){
    for(int i=0; i < MAX_POSITION; i++){
      printf(" Resposta[%d] de aluno[%d], (a,b,c,d)", i+1, j+1);
      scanf("%s", &matriz_rest_quests[i][j]);
    }
    printf("\n");
  }

  for(int j=0; j < MAX_POSITION; j++){
    for(int i=0; i < MAX_POSITION; i++){
      if(matriz_rest_quests[i][j] == vetor_gabarito[i]){
        printf("\n Resposta[%d] de aluno[%d], Correta: ", i+1, j+1);
      }else{
        printf("\n Resposta[%d] de aluno[%d], Errada: ", i+1, j+1);
      }
    }
    printf("\n");
  }

  return(0);
}