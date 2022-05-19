/*
Faça um programa em C que leia a idade e a altura de 5 pessoas, 
armazene cada informação no seu respectivo vetor. 
Imprima a idade e a altura na ordem inversa a ordem lida.
*/


#include <stdio.h>

int cinco(void){

	int altura[0], idade[0], pessoas;

	pessoas = 5; // numeros de matriz do piloto

	//adicionar numeros ao vetor N
	for (int i=1; i <= pessoas; i++){
		printf("%s", "\n ------------------- \n");
		//printar e alocar valor altura
		printf(" Pessoa[%d], digite sua altura: ", i); 
		scanf("%d", &altura[i] );

		//printar e alocar valor idade
		printf(" Pessoa[%d], digite sua idade: ", i); 
		scanf("%d", &idade[i] );

		altura[i] = altura[i];
		idade[i] = idade[i]; 

	}


	for(int i = pessoas; i >= 1; i--){
		printf("%s", "\n |------------------------|\n");
		printf("    Pessoa[%d], idade: %d\n", i, idade[i]);
		printf("    Pessoa[%d], altura: %d", i, altura[i]);
	}

	return(0);
}

int main(void){ cinco(); return(0); }
