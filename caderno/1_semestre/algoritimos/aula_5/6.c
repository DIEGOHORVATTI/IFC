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
  int joao_cres = 2;

  int ze = 110;
  int ze_cre = 3;

  int resul_joao, resul_ze, anos;

  for(int i; resul_joao <= resul_ze; i++){

    int resul_joao = (joao+joao_cres);
    int resul_ze = (ze+ze_cre);

    int anos = i;
  }

  printf("%d\n", anos); 


return(0);

}


/*

  int joao[2][2] = { 150, 2 };

  int ze[2][2] = { 110, 3 };

  int resul_joao, resul_ze, anos;

  for(int i; resul_joao <= resul_ze; i++){

    int resul_joao = joao[0][0]+joao[0][1];
    int resul_ze = ze[0][0]+ze[0][1];

    int anos = i;
  }

  printf("%d\n", anos);

return(0);

}
*/