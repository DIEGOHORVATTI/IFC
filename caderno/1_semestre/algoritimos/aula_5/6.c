#include <stdio.h>

/*
  João tem 1,50 metro e cresce 2 centímetros por ano, 
  enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. 
  Construa um algoritmo que calcule e imprima quantos anos 
  serão necessários para que Zé seja maior que João.
*/

int main(){

  /* int joao = 150;
  int joao_cres = 2;

  int ze = 110;
  int ze_cre = 3;

  int resul_joao, resul_ze, anos;

  for(int i; resul_joao <= resul_ze; i++){

    int resul_joao = (joao+joao_cres);
    int resul_ze = (ze+ze_cre);

    int anos = i;
  }

  printf("%d\n", anos); */

  //matriz com 100 linhas e 50 colunas
  //double notas[100];

  //imprimir o elemento da linha 3 e coluna 10 da matriz notas
  //printf("%lf", notas[3]);

  /*
     +__1___2____3
    1|  1   11  111
    2|  2   22  222
    3|  3   33  333
  */
  int y,x;
  int my_array[3][3] ={1, 2, 3, 11, 22, 33, 111, 222, 333};
  for(y = 0; y < 3; y++){
    for(x = 0; x < 3; x++){
      printf("%d ", my_array[y][x]);
    }
    printf("\n");
  } 


return(0);

}