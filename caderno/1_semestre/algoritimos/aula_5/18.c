//gcc ./18.c -o ./exe/18.exe && ./exe/18.exe
#include <stdio.h>
#include <math.h>
#include "./make.c"

/*
#################################################################################
# Uma empresa decidiu fazer um levantamento em relação aos candidatos           # 
# que se apresentarem para preenchimento de vagas no seu quadro de 	            #
# funcionários. Supondo que você seja o programador dessa empresa.		          #
#													       ********															          #
# faça um programa que leia para cada candidato a idade, 							          #
# o sexo (M=1 ou F=2) e a 																						          #
# experiência no serviço (S=1 ou N=2). 																          #
#																																			          #
# *Para encerrar a entrada de dados, digite zero para a idade. 				          #
# *Calcule e escreva: 																									        #
# *número de candidatos do sexo feminino; 															        #
# *número de candidatos do sexo masculino; 														          #
# *a idade média dos homens que já têm experiência no serviço;					        #
# *a porcentagem dos homens com mais de 45 anos entre o total dos homens; 		  #
# *número de mulheres com idade inferior a 35 anos e com experiência no serviço;#
# *a menor idade entre as mulheres que já têm experiência no serviço.						#
#################################################################################

#scanf("%i" ,&candidatos);
*/

int main(){

printf(" +----------------------------------------------------------------------------------------------+\n");
printf(" | Ola sr.Admin! Seja bem vindo ao dasboard de terminal! Digite os nomes dos candidados e dados |\n");
printf(" +----------------------------------------------------------------------------------------------+\n");

//atribuir valores inteiros
int masculino, ferminino, sim, nao, idade;
//zerar valores
masculino=ferminino=sim=nao=idade = 0;

  //caso candidatos for 0 mate programa

  for (int i = 0; i < 5; ++i)
  {

    printf("\n Digite a idade: ");
    scanf("%i", &idade); 
    printf("\n%i", idade, "\n");

  }

  /*switch(){
    
    case 1|2:
    //
    break;

    default:
     //
  }*/

  make();
  return(0);   
}