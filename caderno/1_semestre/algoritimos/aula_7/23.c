#include <stdio.h>

int main(void){

  int cache_maior_q_anterior, piloto=3, vetor[piloto];

  int car; 
  for (int i=0; i < piloto; ++i){           // incremento de contador
    printf(" Digite um valor[%d]: ", i);
    scanf("%d", &car);
    vetor[i]=car;
    printf("\n %d", vetor[0]); 


   /* for (int j=i + 1; j < piloto; ++j){     // incremento linha (para verificar o próximo valor do vetor) 
      if ( vetor[i] > vetor[j] ){           // Se o próximo valor de vetor for maior que o anterior
        cache_maior_q_anterior =  vetor[i]; // guardar valor atual de vetor_i
        printf("\n cache_maior_q_anterior: %d", vetor[i]);
        vetor[i] = vetor[j];                // vetori iqual a vetorj no caso vetor i agora vale i+1 incremento do próximo valor de vetor
        printf("\n vetor[i]: %d", vetor[j]);
        vetor[j] = cache_maior_q_anterior;  // guarda o valor do próximo valor de vetor em cache para sr retornado a vetor i
        printf("\n vetor[j]: %d", cache_maior_q_anterior); 
      }
      
      printf("\n");

      for (int i=0; i < piloto; ++i){
        printf("\n %d", vetor[j]);              // imprimir vetor em ordem
      }
    }*/
  }

  /*for (int i=0; i < piloto; ++i){
    printf("\n %d", vetor[i]);              // imprimir vetor em ordem
  }*/

  /*printf("\n");
  for (int i=0; i < piloto; ++i){
    printf("\n %d", vetor[i]);              // imprimir vetor em ordem
  }*/

  return(0);
}