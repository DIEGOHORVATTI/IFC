//gcc ./6.c -o ./exe/6.exe && ./exe/6.exe
#include <stdio.h>

/*
  João tem 1,50 metro e cresce 2 centímetros por ano, 
  enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. 
  Construa um algoritmo que calcule e imprima quantos anos 
  serão necessários para que Zé seja maior que João.
*/

int main(){

  int joao = 150;
  int ze = 110;
  int anos;
  
  for( int i=1; ze<joao; i++){
    joao+=2;
    ze+=3;
    anos=i;
  }

  printf("%d\n", anos); 


return(0);

}