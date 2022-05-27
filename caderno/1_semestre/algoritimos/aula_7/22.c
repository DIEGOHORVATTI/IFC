#include <stdio.h>

int main(void){

  int cache_maior_q_anterior, piloto=3, vetor[piloto];

  for (int i = 0; i < piloto; ++i){         //  Atualizar valores da vetor com dados do usuário
    printf(" Digite um valor[%d]: ", i);
    scanf("%d", &vetor[i]);
  }

  for (int i=0; i < piloto; ++i){           // incremento linha
    for (int j=i + 1; j < piloto; ++j){     // incremento linha (para verificar o proximo valor do vetor) 
      if ( vetor[i] > vetor[j] ){           // Se o próximo valor de vetor for maior que o anterior
        cache_maior_q_anterior =  vetor[i]; // guardar valor atual de vetor_i
        vetor[i] = vetor[j];                // vetori iqual a vetorj no caso vetor i agora vale i+1 incremento do próximo valor de vetor
        vetor[j] = cache_maior_q_anterior;  // guarda o valor do próximo valor de vetor em cache para sr retornado a vetor i
      }
    }
  }

  printf("\n");
  for (int i=piloto; i <= 0; --i){
    printf("\n %d", vetor[i]);              // imprimir vetor crecente
  }

  return(0);
}