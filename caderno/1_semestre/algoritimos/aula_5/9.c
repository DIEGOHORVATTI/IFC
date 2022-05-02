#include <stdio.h>

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

	int media_salario, media_num_filhos, maior_salario, num_habitantes, salario, filhos, calculo_salario, calculo_filhos;
	calculo_salario=calculo_filhos=0;

	printf("%s\n", "\n Prefeitura municipal videira-sc");
	printf("%s", " Numero de habitantes: "); 
	scanf("%d", &num_habitantes);

	int lista_salario[num_habitantes];
	int lista_filhos[num_habitantes];

	for(int i=1; i <= num_habitantes ; i++){
		printf("\n%s\n", " ####################################");
		printf("%s", " Digite seu salario: "); 
		scanf("%d", &salario);

		//verificação de salario
		if(salario != 0){
			lista_salario[i] = salario;
		}else{
			printf("bay bay!");
			return(0);
		}

		printf("%s", " Digite a quantidade de filhos: "); 
		scanf("%d", &filhos);
		lista_filhos[i]  = filhos;	
	}	

	// 'calculo = calculo anterior + novo calculo' => calculo_X = calculo_X+linsta_X[X]
	for (int i = 1; i <= num_habitantes; ++i){
		calculo_salario = calculo_salario+=lista_salario[i]; // Media salario
		calculo_filhos = calculo_filhos+=lista_filhos[i];		 // Media filhos
	}

	printf("\n%s\n", " ------------------------------------");
	printf(" Média do salário da população: %d\n", (calculo_salario/num_habitantes));
	printf(" Média numero de filhos: %d\n", (calculo_filhos/num_habitantes));


	return(0);  
} 