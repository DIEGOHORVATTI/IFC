#!/usr/bin/env bash
#########################################################################
# Faça um programa que receba duas notas de 6 alunos calcule e imprima: #
# a média entre essas 2 notas de cada aluno;														#
# a mensagem de acordo com a tabela abaixo: 														#
#																																				#
# médias		      Mensagem 																							#
# De 0 a 5.0   |  reprovados																						#
# De 5.1 a 6.9 |  recuperação 																					#
# De 7.0 a 10  |  aprovados																							#
#																																				#
# total de alunos aprovados e o total de alunos reprovados; 						#
# a média geral do Programa, isto é, a média entre as médias dos alunos.#
#########################################################################

reprovados=0
recuperacao=0
aprovados=0

#loop de usuarios | para qunado der 6 alunos no loop↓
for ((i=1; i <= 6 ; i++))
	do
	echo -e "\n#########################################################\n"
	echo -e "\n Ola aluno(a)! Seja bem vindo ao boletin de terminal!\n"

	read -p " Digite seu nome: " nome 

	read -p "$nome, Digite sua 1º nota: " nota_1
	read -p "$nome, Digite sua 1º nota: " nota_2
	 
	nota_media = $(((nota_1+nota_2)/(2)))

	echo " print de nota média $nota_media"

	#tratativa de notas
	if [[ nota_media == 0 || <= 5 ]]; then
		#reprovados
		$((reprovados++))
	elif [[ nota_media > 5 || <= 7 ]]; then
		#reculperação
		$((recuperacao++))
	elif [[ nota_media > 7 || <= 10 ]]; then
		#aprovados
		$((aprovados++))
	fi echo " Ei $nome, você colocou algum némero errado! tente numeros inteiros de 0 á 10 :)";;
		#caso aja algum numero menor que 0 ou maior que 10 na nota média
done

#return dados
echo -e "\n=========================================\n"
echo " O numero de alunos aprovados foi de: $aprovados "
echo " O numero de alunos reprovados foi de: $reprovados "
echo " a média geral foi de: $nota_media "