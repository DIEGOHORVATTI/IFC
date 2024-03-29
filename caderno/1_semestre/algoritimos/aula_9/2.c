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

#define NOME 20
#define CHASSI 25
#define MAX_PLACA_LETRA 3 // 3 caracteres de letra da placa
#define ALFABETO 26  // maximo de caracteres no alfabeto brasileiro
#define MAX_NOME 100 // tamnaho máximo de caracteres para formar um nome
#define LOOP 20

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

// função que retorna o nome do proprietário rândomicamente
char* retornaNome(){
  char* string = (char*) malloc( ( sizeof(char)* sizeof( string ) ) );

  for (int i = 0; i < rand() % MAX_NOME; i++){
    string[i] = retornoPlaca_letra((rand() % ALFABETO));
  }

  return ( string );
}

// função que retorna o chassis do veiculo
char* retornaChassi(){
  char* string = (char*) malloc( ( sizeof(char)* sizeof( string ) ) );

  for (int i = 0; i < CHASSI; i++){
    string[i] = retornoPlaca_letra((rand() % ALFABETO));
  }

  return ( string );
}

// função que retorna as 3 primeiras letras da placa rândomicamente
char* retornaPlaca_3(){
  char* vet_placa = (char*) malloc( ( sizeof(char)* sizeof( vet_placa ) ) );
  
  for (int i = 0; i < ( MAX_PLACA_LETRA ); i++){
    vet_placa[i] = retornoPlaca_letra();
  }

  return ( vet_placa );
}

// atribuir valores
sVeiculo atribuirVeiculo(){
  sVeiculo veiculo;

  // nome aleatório
  char* nome = retornaNome();
  strcpy(veiculo.proprietario.nome, nome);

  veiculo.placa.numero = ( rand() % 9999 );  // retorna os 4 primeiros numeros da placa rândomicamente
  veiculo.combustivel  = ( rand() % 3 );     // retorna [0, 1, 2],['álcool', 'diesel', 'gasolina'] aleatóriamente
  veiculo.modelo       = ( rand() % 10 );    // retorna [0, 1, 2, 3, 4] aleatóriamente
  veiculo.cor          = ( rand() % 2 );     // retorna [0, 1],[branco, preto] aleatóriamente
  veiculo.ano          = ( rand() % 2023 );  // retorna um ano aleatóriamente

  // chassi aleatório
  char* chassi = retornaChassi();
  strcpy(veiculo.chassi, chassi);

  // letras de placa aleatórios
  char* placaLetra = retornaPlaca_3();
  strcpy(veiculo.placa.letra, placaLetra);

  return veiculo;
}

void imprimirVeiculos(sVeiculo veiculo){
  printf("\n\nProprietário: %s", veiculo.proprietario.nome);
  printf("\nModelo: %d", veiculo.modelo);
  printf("\nCor: %d", veiculo.cor);
  printf("\nAno: %d", veiculo.ano);
  printf("\nCombustivel: %d", veiculo.combustivel);
  printf("\nPlaca: %s-%d", veiculo.placa.letra, veiculo.placa.numero);
  printf("\nChassis: %s", veiculo.chassi);
}

/* ------------------------- */


// A)
void a(sVeiculo veiculo){

  imprimirVeiculos(veiculo);
}

// B
void b(sVeiculo veiculo){

  if( veiculo.ano >= 1980 && veiculo.combustivel == 1){
    printf("Nome: %s \n", veiculo.proprietario.nome);
  }
}

// C
void c(sVeiculo veiculo){

  if( veiculo.placa.letra[1] == 'A' && veiculo.placa.numero == 0 || veiculo.placa.numero == 2 || veiculo.placa.numero == 4 || veiculo.placa.numero == 7){
    printf("Nome: %s \n", veiculo.proprietario.nome);
  }

}

// D
void d(sVeiculo veiculo){

printf("ok");

/* 
  if( veiculo.placa.letra == 'A' && veiculo[4].placa.numero == 0 || veiculo.placa.numero[4] == 2 || veiculo.placa.numero[4] == 4 || veiculo.placa.numero[4] == 7){
    printf("\nPlaca: %s-%d", veiculo.placa.letra, veiculo.placa.numero);
  } 
*/

}

int main(){

  srand(time(NULL)); // semente aleatória mudada pela hora do sistema

  sVeiculo veiculo[ LOOP ];

  for (int i=0; i < LOOP; i++){ veiculo[i] = atribuirVeiculo(); }

  /* ----------------------------------- */
  
  //A
  //for (int i=0; i < LOOP; i++){ a(veiculo[i]); }
  
  //B
  //for (int i=0; i < LOOP; i++){ b(veiculo[i]); }
  
  //C
  for (int i=0; i < LOOP; i++){ c(veiculo[i]); }
  
  //D
  for (int i=0; i < LOOP; i++){ (veiculo[i]); }

	return 0;
}