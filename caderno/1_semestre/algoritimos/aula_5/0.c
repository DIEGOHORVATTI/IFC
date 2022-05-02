#include <stdio.h>

int main()
{
  int m[4][4],i,j,menor,maior,pma,pme;

  for(i=0; i<4; i++){
      for(j=0; j<4; j++){
         scanf("%d",&m[i][j]);
         if (i == 0 && j == 0){
           menor=m[0][0];
           maior=m[0][0];
         }
         if(m[i][j]<menor){
          menor=m[i][j];
         }
         if(m[i][j]>maior){
          maior=m[i][j];
         }
      }
  }
  printf("O menor numero e: [%d]\n",menor);
  printf("O maior numero e: [%d]\n",maior);
  return 0;
}