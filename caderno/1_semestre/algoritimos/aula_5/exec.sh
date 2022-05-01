#!/usr/bin/env bash
######################################################################################
#                      automação de copilador em shellscript                         #
######################################################################################
 
read -p "Digite o numero do arquivo em .C: " numero_arquivo 

if [[ numero_arquivo -eq 1 ]]; then
	gcc ./$numero_arquivo.c -o ./exe/$numero_arquivo.exe && ./exe/$numero_arquivo.exe | less
else
  gcc ./$numero_arquivo.c -o ./exe/$numero_arquivo.exe && ./exe/$numero_arquivo.exe
fi