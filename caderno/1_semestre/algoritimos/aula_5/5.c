//gcc ./5.c -o ./exe/5.exe && ./exe/5.exe"
//rever isso depois não me parece serto o resultado final
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
#include "./make.c"

//calcula fatorial por parametro
int num_fatoriado(int num_fat){

	//verificação positivo e interiro
	if(num_fat <= 1){ 
		return(1);
	}else{
		
		int fat=1; 
		for(int i=1; i <= num_fat; i++){ 
			fat *= i ; 
		}

		return (fat) ;
	}
}

int main(void){
	
	int valor_n; printf(" Digite o valor de N: "); scanf("%d", &valor_n);

	int fat_1 = num_fatoriado(1);
	int fat_2 = num_fatoriado(2);
	int fat_3 = num_fatoriado(3);
	int fat_n = num_fatoriado(valor_n);

	printf("\n E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / %d!\n", valor_n);
	printf(" E = %d / %d / %d / %d / %d\n", (1+1), (fat_1+1), (fat_2+1), (fat_3+1), fat_n );
	printf(" E = %d\n", ((1+1)/(fat_1+1)/(fat_2+1)/(fat_1+1)/(fat_n)) );
	
	make();
	return(0);
}