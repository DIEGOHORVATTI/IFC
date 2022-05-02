#!/usr/bin/env bash
######################################################################################
#                      automação de copilador em shellscript                         #
######################################################################################

echo " ├──────────────"
exec colorls --group-directories-first --almost-all --files --tree=1 | grep .c
echo -e " ├──\033[33;1m   h\033[m  help"
echo -e " +──────────────\n"

read -p " Digite o numero/nome arquivo em .c: " numero_arquivo 

case $numero_arquivo in
	1) gcc ./$numero_arquivo.c -o ./exe/$numero_arquivo.exe && ./exe/$numero_arquivo.exe | less ;;
	"mt") gcc ./mt.c -o ./exe/mt.exe && ./exe/mt.exe ;;
	"h") exo-open --launch WebBrowser https://github.com/DIEGOHORVATTI/IFC/tree/main/caderno/1_semestre/algoritimos/aula_5/README.md;;
	*) gcc ./$numero_arquivo.c -o ./exe/$numero_arquivo.exe && ./exe/$numero_arquivo.exe ;;
esac