#include <time.h> //clock(), CLOCKS_PER_SEC e clock_t

// Cabeçalho de teste de execução
int tempo(void){
  clock_t t;       //variável para armazenar tempo
  t = clock();     //armazena tempo
  t = clock() - t; //tempo final - tempo inicial
  printf("\n Tempo de execução: %.3lf", ( ((double)t)/((CLOCKS_PER_SEC/1000)))*1000 );
  return(0);
}