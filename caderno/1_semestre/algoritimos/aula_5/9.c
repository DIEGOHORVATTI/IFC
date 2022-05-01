#include <stdio.h>
#include <stdlib.h>

/*
	A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, 
	coletando dados sobre o número de filhos e salário. A prefeitura deseja saber: 
	a) média do salário da população; 
	b) média do número de filhos; 
	c) maior salário; 
	d) percentual de pessoas com salário até R$100,00. 


	O final da leitura de dados se dará com a entrada de um salário negativo.  
*/

int main(void){    

	int media_salario, media_num_filhos, maior_salario, num_habitantes, salario, filhos;
	printf("%s\n", "Prefeitura municipal videira-sc");

	printf("%s", "Numero de habitantes: "); scanf("%d", &num_habitantes);

	int lista_salario[num_habitantes];
	int lista_filhos[num_habitantes];

	for(int i=1; i <= num_habitantes ; i++){
		
		printf("\n%s\n", "####################################");
		printf("%s", "Digite seu salario: "); scanf("%d", &salario);
		printf("%s", "Digite a quantidade de filhos: "); scanf("%d", &filhos);

		if(salario != 0){

			lista_salario[i] = salario;
			lista_filhos[i]  = filhos;

			
		}else{exit(0);}

	}	

	printf("\n%s\n", "------------------------------------");
	
	//Media população
	int calculo = 0;
	for (int i = 1; i <= num_habitantes; ++i){
		calculo = calculo+=lista_salario[i];
	}

	printf("Média do salário da população: %d\n", (calculo/num_habitantes));

	return(0);  
} 