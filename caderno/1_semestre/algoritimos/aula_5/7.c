#include <stdio.h>
/*	
	Escreva um algoritmo que leia um número
	n (número de termos de uma progressão aritmética), 
	a1 (o primeiro termo da progressão) e 
	r (a razão da progressão) e 
	escreva os n termos dessa progressão, 
	bem como a soma dos elementos.

	n = 10 
	a1 = 26
	r = 31 - 26 = 5

	an = a1 + (n - 1) . r
	a10 = 26 + (10-1) . 5
	a10 = 26 + 9 .5
	a10 = 71

	n: posição do termo que queremos descobrir
	a1: primeiro termo da P.A.
	an: termo que queremos calcular
	r: razão

*/
int main(){

	int n, a1, an, r;

	printf("%s", " Digite o valor de n: "); scanf("%d", &n );
	printf("%s", " Digite o valor de a1: "); scanf("%d", &a1);
	printf("%s", " Digite o valor de r: "); scanf("%d", &r );

	printf("\n n=%d\n", n);
	printf(" a1=%d\n", a1);
	printf(" an=a%d\n", a1);
	printf(" r=%d\n", r); 

	printf("\n a%d = %d + (%d - %d) . %d\n", n, a1, n, 1, r);
	printf(" a%d = %d + (%d) . %d\n", n, a1, (n-1), r);
	printf(" a%d = %d + %d\n", n, a1, ((n-1)*r));
	printf(" a%d = %d\n", n, (a1+((n-1)*r)) );

	return(0);
}