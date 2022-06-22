/*
  Leia uma matriz 10 x 10 que se refere respostas de 10 questões de múltipla escolha, 
  referentes a 10 alunos. 
  Leia também um vetor de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d. 
  Seu programa deverá comparar as respostas de cada candidato com o gabarito e emitir um vetor Resultado, 
  contendo a pontuação correspondente.
*/

#include <stdio.h>
#define MAX_POSITION 10

int matriz_rest_quests[MAX_POSITION][MAX_POSITION], pontuacao[MAX_POSITION];
char vetor_gabarito[MAX_POSITION]={ 'b', 'c', 'b', 'c', 'b', 'a', 'c', 'd', 'c', 'a'};

int inserir_resposta(){
  for(int j=0; j < MAX_POSITION; j++){
    for(int i=0; i < MAX_POSITION; i++){
      printf("Aluno[%d], resposta[%d], (a,b,c,d): ", i+1, j+1);
      scanf("%s", &matriz_rest_quests[i][j]);
    }
    printf("\n");
  }
}


int verifica_resposta(int i, int j){
  if(matriz_rest_quests[i][j] == vetor_gabarito[i]){ return(1); }
  else{ return(0); }
}

int debug_quests(){
  for(int j=0; j < MAX_POSITION; j++){
    for(int i=0; i < MAX_POSITION; i++){
      if( verifica_resposta(i ,j) == 1 ){
        printf("\nAluno[%d], resposta[%d], [Correta]", i+1, j+1 );
      } else{
        printf("\nAluno[%d], resposta[%d], [Errada]", i+1, j+1 );
      }
    }
    printf("\n---------------------------------");
  }
}

int calcula_pontuacao(){
  for(int j=0; j < MAX_POSITION; j++){

    int soma=0;
    for(int i=0; i < MAX_POSITION; i++){
      if( verifica_resposta(i ,j) == 1 ){
        soma+=1;
      } else{
        soma+=0;
      }
    }
    pontuacao[j]=soma;
  }
}

int debug_pontuacao(){

  calcula_pontuacao();
  printf("\n");
  for(int i=0; i < MAX_POSITION; i++){
    printf("\nPontuação aluno[%d]: %d", i+1, pontuacao[i] );
  }
}

int main(void){

  inserir_resposta();

  debug_quests();

  debug_pontuacao();


  return(0);
}