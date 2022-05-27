/*
  O tempo que um determinado avião gasta para percorrer o trecho entre 
  duas  localidades distintas está disponível através da seguinte tabela:

  https://i.imgur.com/B3sfhJ2.png

  Faça um algoritmo que leia a tabela acima 
  e informe ao usuário o tempo necessário para percorrer duas cidades por ele fornecidas, 
  até o momento que ele fornecer duas cidades iguais (origem e destino).

  Desafios:
  Faça um algoritmo que mostre a tabela sem repetições (apenas o triângulo superior ou o inferior).

  Faça um algoritmo que permita ao usuário informar várias cidades, 
  até inserir uma cidade X, 
  e que mostre o tempo total para cumprir todo o percurso especificado entre as cidades fornecidas.

*/

#include <stdio.h>
#define MAX_MATRIX 7

int matrix[MAX_MATRIX][MAX_MATRIX], vetor_[];