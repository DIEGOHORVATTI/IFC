/*
#####################################################
#													                          #
#  Escrever um algoritmo que lê um valor N inteiro  #
#  e positivo e que calcula e escreve o valor de E: # 
#  O fatorialorial é cálculado da seguinte forma:   #
#  fatorialorial de 3: 3x2x1 = 6                    #
#                  ********                         #		
#													                          #					
# O contador i inicia com o número 1 e o loop será  #
# executado mediante seu valor ser menor igual ao   #
# valor da variável $num 							              #
#													                          #
#####################################################
##################### //FORMULA\\ ###################
##### E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N! #####
#####################################################

*/

#include <stdio.h>

int num_fatoriado(int x){
	for(int fatorial=1 ,i=1; i <= x ; i++){
	//Aqui é utilizada a variável fatorial que será multiplicado
	//pela variável N(contador) até o fim do loop

	  int fatorial=(fatorial*x);

		return(fatorial);
	}  
}

int main(){

int valor_n=0;
printf("\nDigite o valor de N!: ");
scanf("%i", &valor_n);

printf("\nE = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / %d!\n", valor_n);

int fat_1=num_fatoriado(1);
int fat_2=num_fatoriado(2);
int fat_3=num_fatoriado(3);
int fat_n=num_fatoriado(valor_n);

printf(fat_2);
/*
printf("E = $((1 + 1)) / $(($fat_1 + 1)) / $(($fat_2 + 1)) / $(($fat_3 + 1)) / $fat_n")
printf("E = $(( (1+1 / $fat_1+1 / $fat_2+1 / $fat_1+1 / $fat_n) ))")
*/
	return(0);
}