//gcc ./1.c -o ./exe/1 && ./exe/1

#include <stdio.h>
#include "./make.c"
int main(){

	printf(" Digite 'q' para sair ");
	printf("\n 1) Fazer um programa que imprima os números múltiplos de 10 entre 0 e 1000.\n\n");
	
	//enquanto i for menor ou iqual a mil imprima↓
	for( int i=0; i <= 1000; i++ ){ printf(" %d\n", i*10); }; 

	make();
	return(0);

}