#include <stdio.h>


int main(void){

	printf(" %s", "Ler 3 valores e escrever a soma dos 2 maiores.\n\n");

	int piloto=3, valor, matriz[piloto], cache_medio, cache_maior;
	cache_medio=cache_maior=0; //Limpar lixo de memória


	for (int i = 0; i < piloto; ++i){ 
		printf(" Digite o valor[%d]: ", i+1);
		scanf("%d", &valor);
		matriz[i]= valor ;
	}

	int cache_menor=valor;
	for (int i = 0; i < piloto; ++i){
		// Valor maior
		if ( cache_maior < matriz[i] ){ 
			cache_maior = matriz[i];
		}
		// Valor menor
		if ( cache_menor > matriz[i] ){ 
			cache_menor = matriz[i];
		} 
	}

	// Valor médio
	for (int i = 0; i < piloto; ++i){
		if (matriz[i] < cache_maior && matriz[i] > cache_menor){
			cache_medio = matriz[i];
		}
	}
	
	
		/*
			printf("\n menor valor: %d", cache_menor );
			printf("\n maior valor: %d", cache_maior );
			printf("\n medio valor: %d\n", cache_medio );
		*/
	

	printf("\n A soma é: %d", cache_maior+cache_medio );
	
	return(0);
}