#include <stdio.h>
#include "./time_exec.c"

int main(void){

  /*printf(" %s", "Ler 3 valores e escrevê-los em ordem crescente.\n");

  int piloto=3, matriz[piloto], valor=0;

  for (int i = 1; i <= piloto; ++i){
    printf(" Digite o valor[%d]: ", i);
    scanf("%d", &valor);
    matriz[i] = valor;
  }

  int cache_valor=0;
  for(int i = 1; i <= piloto; ++i){
    if (matriz[i] > cache_valor) {
      cache_menor = matriz[i];
    }

    if(i == 1){
      printf(" Menor valor: %d", cache_menor);
    }
  }*/

  printf(" %s", "Ler 3 valores e escrevê-los em ordem crescente.\n\n");
  int maior, menor, piloto=3, notas[piloto], cache_maior=0;
  maior=menor=0;

  for (int i=1; i <= piloto; i++){
    printf(" Digite um valor[%d]: ", i);
    scanf("%d", &notas[i]);

    if(notas[i] > maior){
      maior=notas[i];
    }
    if(notas[i] < maior){
      menor=notas[i];
    }
    
    /*if (i == 3){
      printf("\n Maior valor é %d\n", maior);
      printf("\n Menor valor é %d\n", menor);
    }*/
  }

  printf("\n Maior valor é %d\n", maior);
  printf("\n Menor valor é %d\n", menor);
  
  tempo();
  return(0);
}