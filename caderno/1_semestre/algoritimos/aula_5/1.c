//gcc ./1.c -o ./exe/1 && ./exe/1 | less

#include <stdio.h>

int main(){

	printf(" Digite 'q' para sair ");
	printf("\n 1) Fazer um programa que imprima os números múltiplos de 10 entre 0 e 1000.\n\n");
	
	//enqunto i for menor ou iqual a mil imprima↓
	for( int i=0; i <= 1000; i++ ){ printf(" %d\n", i*10); }; 

	return(0);

}