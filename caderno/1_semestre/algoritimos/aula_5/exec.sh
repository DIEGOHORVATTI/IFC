#!/usr/bin/env bash
######################################################################################
#                      automação de copilador em shellscript                         #
######################################################################################
 
read -p "Digite o numero do arquivo em .C: " numero_arquivo 

gcc ./$numero_arquivo.c -o ./exe/$numero_arquivo.exe && ./exe/$numero_arquivo.exe