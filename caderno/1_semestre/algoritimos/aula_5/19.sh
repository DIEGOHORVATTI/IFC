#!/usr/bin/env bash
#########################################################################
# Faça um programa que receba duas notas de 6 alunos calcule e imprima: #
# a média entre essas 2 notas de cada aluno;														#
# a mensagem de acordo com a tabela abaixo: 														#
#																																				#
# médias		   -  Mensagem 																							#
# De 0 a 5.0   |  reprovados																						#
# De 5.1 a 6.9 |  recuperação 																					#
# De 7.0 a 10  |  aprovados																							#
#																																				#
# total de alunos aprovados e o total de alunos reprovados; 						#
# a média geral do Programa, isto é, a média entre as médias dos alunos.#
#########################################################################

#definir quantidade de alunos
alunos=6

reprovados=0
recuperacao=0
aprovados=0

echo -e "\n\033[33;1m +--------------------------------------------------------------------------------------------------+\033[m"
echo -e "\033[33;1m | Ola professor(a)! Seja bem vindo ao boletin de terminal! Digite os nomes dos alunos e suas notas |\033[m"
echo -e "\033[33;1m +--------------------------------------------------------------------------------------------------+\033[m\n"

#loop de usuarios | para quando der 6 alunos no loop
for ((i=1; i <= $alunos ; i++))
	do

	echo -e "\n#########################################################\n"

	read -p " Digite o nome do aluno N$i: " nome 

	echo -e "\n"
	read -p " Digite a 1º nota de $nome: " nota_1
	read -p " Digite a 2º nota de $nome: " nota_2
	 
	#nota média por numero_1+numero 2 dividido por 2
	nota_media=$(( (nota_1+nota_2)/(2) ))

	#################################################
	# -eq      (equal),             igual.					#
	# -lt      (less than),         menor que.			#
	# -gt      (greather than),     maior que.			#
	# -le      (less or equal),     menor ou igual.	#
	# -ge      (greater or equal),  maior ou igual.	#
	# -ne      (not equal),         diferente				#
	#################################################

	#tratativa de notas
	if [[ $nota_media -ge 0 && $nota_media -le 5 ]]
	then
		#reprovados
		((reprovados++))
	elif [[ $nota_media -gt 7 && $nota_media -le 10 ]]
	then
		#aprovados
		((aprovados++))
	elif [[ $nota_media -gt 5 && $nota_media -le 7 ]]
	then
		#reculperação
		((recuperacao++))
	else
		echo " +--------------------------------------------------------------------------------------"  
	  echo " | Ei $nome, você colocou algum némero errado! tente numeros inteiros de 0 á 10 :)"
	  echo " +--------------------------------------------------------------------------------------" 
	  exit
		#caso aja algum numero menor que 0 ou maior que 10 na nota média ele sai do programa
	fi
		
	#array que guarda as notas médias em array incrementando a posição a cada loop
	array_media[$i]=$nota_media
	
	#somar todos os valores do array e dividir pelos alunos
	nota_total_media=$(( (soma+=${array_media[$i]})/($alunos) ))

done

#return dados
echo -e "\n=============================================\n"
echo " O numero de alunos 'aprovados' foi de: $aprovados"
echo " O numero de alunos 'reprovados' foi de: $reprovados"
echo " O numero de alunos de 'recuperacao' foi de: $recuperacao"
echo -e " A 'média' geral foi de: $nota_total_media\n"

exec bash ./make.sh