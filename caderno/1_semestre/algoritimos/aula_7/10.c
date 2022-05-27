/*
  Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas:
  da linha 4 de M.
  da coluna 2 de M.
  da diagonal principal.
  da diagonal secundária.
  de todos os elementos da matriz.
  Escreva estas somas e a matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

#define M mat; 

int mat[5][5]={0}; 
int i=0, j=0;
int SL4=0, SC2=0;
int diap=0, dias=0;
int soma=0;

for (i=0; i<5; i++) {
for (j=0; j<5; j++) { 
printf(“Digite valora para M[%d][%d]: “, i, j); 
scanf(“%d”, &mat[i][j]); 
}
}
printf(“\n”);


for (i=0; i<5; i++) { 
SL4 = SL4 + mat[3][i]; 
}
printf(“Soma da linha 4: %d”, SL4);
printf(“\n”);


for (j=0; j<5; j++) { 
SC2 = SC2 + mat[j][1]; 
}
printf(“Soma da coluna 2: %d”, SC2); 
printf(“\n”);



for(i=0;i<5;i++) { 
for(j=0;j<5;j++) {
if (i==j) { 
diap=diap+mat[i][j];
}
}
}
printf(“\nA soma da diagonal principal eh: %d”, diap);
printf(“\n”);


for(i=0;i<5;i++) { 
for(j=0;j<5;j++) {
if ( j == ( 5 – 1 – i )) { 
dias=dias+mat[i][j];
}
}
}
printf(“\nA soma da diagonal secundaria eh: %d”, dias);
printf(“\n”);

for(i=0;i<5;i++) { 
for(j=0;j<5;j++) {
soma = soma + mat[i][j]; 
}
}
printf(“\nA soma da matriz eh: %d”, soma); 
printf(“\n”);

return 0;
}