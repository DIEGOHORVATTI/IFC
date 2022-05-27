/*
  Faça um programa em C que leia a idade e a altura de 5 pessoas, 
  armazene cada informação no seu respectivo vetor. 
  Imprima a idade e a altura na ordem inversa a ordem lida.
*/
#include <stdio.h>
#define MAX_PESSOAS 5

int main(void){

  int pessoas_idade[MAX_PESSOAS], pessoas_altura[MAX_PESSOAS];

  for(int i=0; i < MAX_PESSOAS; i++ ){
    printf("\n Idade pessoa[%d]: ", i);
    scanf("%d", &pessoas_idade[i]);

    printf(" Altura pessoa[%d]: ", i);
    scanf("%d", &pessoas_altura[i]);
  }

  for(int i=MAX_PESSOAS; i >= 0 ; i-- ){
    
    printf("\n Altura pessoa[%d]: %d", i, pessoas_altura[i]);
    printf(" Idade pessoa[%d]: %d", i, pessoas_idade[i]);

  }

  return(0);
}