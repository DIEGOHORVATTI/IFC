#include <stdlib.h>

int make(){
		
	int make=0;
	printf("\n ver lista novamente(y/n)?: ");
	scanf("%s", &make);

	//y = 121
	//Y = 89
	//n = 110
	//N = 79

	//printf("%d\n", make);

	if( make==121 || make==89 ){
		make = 1;
	}else{
		make = 0;
	}

	switch(make){
		case 1 ... 2: //exemplo de uso de ou
			system("bash ./make.sh"); break;
			return(0);
		case 0:
			printf("\n%s\n\n", " bay bay!");
			return(0); break;
		default: 
			return(0);
	}

	return(0);
}