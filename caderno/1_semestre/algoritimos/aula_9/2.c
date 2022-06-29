/* 
Para o controle dos veículos que circulam em uma determinada cidade, 
a Secretaria dos Transportes criou o seguinte registro-padrão:

Proprietário: ___________________________________ Combustível: ______________
Modelo: _____________________________________ Cor: __________________________
No. chassi: _______________________ Ano: __________ Placa: __________________

Em que:
combustível pode ser álcool, diesel ou gasolina;
placa possui os três primeiros valores alfabéticos e os quatro restantes numéricos;

a) Sabendo que o número máximo de veículos da cidade é de 5.000 unidades 
e que os valores precisam ser lidos.

b) Construa um algoritmo que liste todos os proprietários 
cujos carros são do ano de 1980 ou posterior 
e que sejam movidos a diesel.

c) Escreva um algoritmo que liste todas as placas que comecem com a letra A 
e terminem com 0, 2, 4 ou 7 
e seus respectivos proprietários. 
(Sugestão: utilize a placa como um vetor de caracter)

d) Elabore um algoritmo que liste o modelo e a cor dos veículos 
cujas placas possuem como segunda letra uma vogal 
e cuja soma dos valores numéricos fornece um número par.

e) Construa um algoritmo que permita a troca de proprietário 
com o fornecimento do número do chassi 
apenas para carros com placas que 
não possuem nenhum dígito igual a zero.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define QNT 1
#define NOME 100
#define CHASSI 120
#define MAX_PLACA_LETRA 3 // 3 caracteres de letra da placa
#define ALFABETO 26  // maximo de caracteres no alfabeto brasileiro
#define MAX_NOME 100 // tamnaho máximo de caracteres para formar um nome

// Placa XXX-YYYY
// 3 -> letras
// 4 -> numeros

typedef struct{
  char nome[ NOME ];
}sProprietario;

typedef struct{
  char letra[ MAX_PLACA_LETRA ];
  int numero;
}sPlaca;

typedef struct{
  sProprietario proprietario;
  sPlaca placa;
  
  char chassi[ CHASSI ];
	int ano,
      cor,
      modelo,
      combustivel;
}sVeiculo;


// retorna um numero aleatório de 0 a 9
int retornoPlaca_numero(){ 
  return (rand() % 10 ); 
} 

// retorna uma letra aleatório de A a Z
int retornoPlaca_letra(){ 
  
  char vetLetras[26];
  int y=0;
  for( int i='A'; i != ('Z'+1); i++ ){
    vetLetras[y] = i;
    y++;
  }

  return( vetLetras[ retornoPlaca_numero() ] );
} 

// função que retorna o nome do proprietário randomicamente
char* retornaNome(){
  char* string = (char*) malloc( ( sizeof(char)* sizeof( string ) ) );

  for (int i = 0; i < rand() % MAX_NOME; i++){
    string[i] = retornoPlaca_letra((rand() % ALFABETO));
  }

  return ( string );
}

// função que retorna o nome do proprietário randomicamente
char* retornaChassi(){
  char* string = (char*) malloc( ( sizeof(char)* sizeof( string ) ) );

  for (int i = 0; i < CHASSI; i++){
    string[i] = retornoPlaca_letra((rand() % ALFABETO));
  }

  return ( string );
}

// retorna [0, 1, 2] aleatóriamente
int retornoCombustivel(){ 
  return (rand() % 3); 
} 

// retorna [0, 1] aleatóriamente
int retornaAno(){ 
  return (rand() % 2023); 
} 

// retorna [0, 1, 2, 3, 4] aleatóriamente
int retornoModelo(){ 
  return (rand() % 5); 
} 

// retorna [0, 1] aleatóriamente
int retornoCor(){ 
  return (rand() % 2); 
} 


// função que retorna as 3 primeiras letras da placa randomicamente
char* retornaPlaca_3(){
  char* vet_placa = (char*) malloc( ( sizeof(char)* sizeof( vet_placa ) ) );
  
  for (int i = 0; i < ( MAX_PLACA_LETRA ); i++){
    vet_placa[i] = retornoPlaca_letra();
  }

  return ( vet_placa );
}

// função que retorna os 4 primeiros numeros da placa randomicamente
int retornaPlaca_4(){
  return( rand() % 9999 );
}

sVeiculo atribuirVeiculo(){
  sVeiculo veiculo;
  
  printf("\n--- Cadastro de Proprietário ---\n\n");

  printf("\nNome proprietario: ");
  char* nome = retornaNome();
  strcpy(veiculo.proprietario.nome, nome);

  printf("\nLetra da placa: ");
  char* placaLetra = retornaPlaca_3();
  strcpy(veiculo.placa.letra, placaLetra);

  printf("\nNumero da placa: ");
  veiculo.placa.numero = retornaPlaca_4();

  printf("Digite o combustivel (Alcool, Diesel ou Gasolina)[0, 1, 2]: ");
  veiculo.combustivel = retornoCombustivel();

  printf("Digite o modelo do carro:");
  veiculo.modelo = retornoModelo();

  printf("Digite a cor do carro:");
  veiculo.cor = retornoCor();

  printf("Digite o numero do chassi:");
  char* chassi = retornaChassi();
  strcpy(veiculo.chassi, chassi);

  printf("Digite o ano do sVeiculo:");
  veiculo.ano = retornaAno();
  //getchar(); 
}

/* void imprimirUser(sFichaUser user){
  printf("\n\n --- Imprimindo os dados da struct ---\n\n");
  printf("Nome: %s", user.nome);
  printf("Apelido: %s", user.nick.apelido);
  printf("Sexo: %s", user.sexo);
  printf("Data de Nacimento: %d/%d/%d", user.nacimento.dia, user.nacimento.mes, user.nacimento.ano);
  printf("\ncpf: %d", user.cpf);
} */

/*
void proprietariosComsVeiculosDiselAno1980Mais(){

	// b) Construa um algoritmo que liste todos os proprietários cujos carros são do ano de
	// 1980 ou posterior e que sejam movidos a diesel.

	printf("\nProprietarios com sVeiculos a diesel do ano de 1980 ou posterior:\n");

	int i;

	for (i = 0; i < QNT; i++)
	{

		if (carros[i].ano >= 1980 && carros[i].combustivel == "Diesel")
		{
			printf("Nome: %s \n", carros[i].nome);
		}
	}
	printf("\n");
}

void placasLetraaNumero0247rProprietario(sVeiculo carros[]){

	printf("\nPlacas que comecam com A e terminam com 0, 2, 4 ou 7:");

	int i;

	for (i = 0; i < QNT; i++)
	{
		if (carros[i].placa[0] == 'A' && carros[i].placa[6] == '2')
		{
			printf("\nPlaca: %s ", carros[i].placa);
		}
	}
	printf("\n\n");
} 

*/

int main(){

  srand(time(NULL)); // semente aleatória mudada pela hora do sistema

  

	return 0;
}