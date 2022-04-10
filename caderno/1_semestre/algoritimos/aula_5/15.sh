#!/usr/bin/env bash
##################################################################
# Faça um algoritmo que leia a altura de um grupo de 20 pessoas, #
# calcule e exiba: 																							 #
# A maior altura do grupo; 																			 #
# A altura média; 																							 #
# O número de pessoas com altura superior a 2 metros.						 #
##################################################################


#echo ${nomes[*]} 
#echo ${nomes[@]:2} 
#echo ${#nomes[*]} 

#for ((i=1; i <= 6 ; i++))
	#do

	#str[0]="Shell Script"


	# Imprimindo valor
	#echo ${str[0]}
	#Shell Script X 

#done

#numero alunos
alunos=3

#array nota média geral
nota_total_media[1]=2
nota_total_media[2]=5
nota_total_media[3]=10

soma=0

for ((i=1; i <= $alunos ; i++))
do
	somatoria=$(( soma+=${nota_total_media[$i]} ))
	#printf %s $(($soma / $alunos)) 

done

echo "$somatoria" 