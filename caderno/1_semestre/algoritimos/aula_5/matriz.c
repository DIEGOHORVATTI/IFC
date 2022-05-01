#include <stdio.h>

/*
  exemplo pratico de matrizes em C
*/

int main(){

  int y,x, input;
  
  int list_array[3][3] = {1, 2, 3, 11, 22, 33, 111, 222, 333};

  printf("Digite 0 ou 1 para ver dois exemplos de uso de matrizes: ") ; scanf("%d", &input);

  switch(input){
    case 0:
    printf("\n +__1___2____3\n 1|  1   11  111\n 2|  2   22  222\n 3|  3   33  333\n\n");
      for(y = 0; y < 3; y++){
        for(x = 0; x < 3; x++){
          printf(" %d ", list_array[y][x]);
        }
        printf("\n");
      } 
      printf("\n");
      break;
    case 1:
      printf("\n printf('...', list_array[0][4]); => ");
      printf("%d\n\n", list_array[0][4]); 
      break;
    default:
      printf(" Digite um valor de 0 á 1\n");
  }

  return(0);

}