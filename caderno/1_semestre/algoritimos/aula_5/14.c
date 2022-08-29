/*
	Faça um algoritmo que leia vários códigos do jogador (1 ou 2) 
	que ganhou o ponto em uma partida de pingue-pongue, e 
	responda quem ganha a partida. 

	A partida chega ao final se um dos jogadores chega a 21 pontos e 
	a diferença de pontos entre os jogadores é maior ou igual a dois. 
		Caso contrário, 
	ganha aquele que, com mais de 21 pontos, 
	consiga colocar uma vantagem de dois pontos sobre o adversário.  
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int jogador_1,jogador_2,vencedor, total_1, total_2;
	jogador_1=jogador_2=vencedor=total_1=total_2=0;

	int retorna_vencedor(void){
		//retorna vencedor
		if( total_2 > total_1 ){ vencedor=2; }
		else{ vencedor=1; } 
	}

	int verifica_vencedor(void){
		//verifica vencedor
		if( total_2 > total_1 ){ 
			printf("\n Vencedor jogador_%d [%d]\n", vencedor, total_2); 
		}
		if( total_2 < total_1 ){ 
			printf("\n Vencedor jogador_%d [%d]\n", vencedor, total_1); 
		}
		return(0);
	}

	while(2==2){
	  
	  //jogador 1
		printf("\n [%d]Valor jogador_1: ", total_1);
		scanf("%d", &jogador_1);
		total_1+=jogador_1;
		retorna_vencedor();
		// Verifica se limite de diferença escedeu 2   
		if( (total_2-total_1)>=2 || (total_1-total_2)>=2 ){
			verifica_vencedor();
			return(0);
		}
		if( total_1 >= 21 ){ 
			verifica_vencedor();
		}

		//jogador 2
		printf("\n [%d]Valor jogador_2: ", total_2);
		scanf("%d", &jogador_2);
		total_2+=jogador_2;
		retorna_vencedor();
		// Verifica se limite de diferença escedeu 2   
		if( (total_2-total_1)>=2 || (total_1-total_2)>=2 ){
			verifica_vencedor();
			return(0);
		}
		if( total_2 >= 21 ){ 
			verifica_vencedor();
			return(0);
		}

	}

	return(0);
}