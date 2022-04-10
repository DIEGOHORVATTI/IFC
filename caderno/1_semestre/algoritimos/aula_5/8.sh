#!/usr/bin/env bash
######################################################################################
#																					 																					 #
# Em uma eleição presidencial existem quatro candidatos. 							 						   #
# Os votos são informados através de códigos.  																			 #
# Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:     #
# 1,2,3,4 = voto para os respectivos candidatos;								      							 #
# 5 = voto nulo; 																      															 #
# 6 = voto em branco;																  															 #
# 																					  																			 #
# Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva: #
# total de votos para cada candidato;												  											 #
# total de votos nulos;															  															 #
# total de votos em branco;														  														 #
# 																					  																			 #
# Como finalizador do conjunto de votos, tem-se o valor 0.							  					 #
#																					  																				 #
######################################################################################
 
#votos zerados
voto_1=0
voto_2=0
voto_3=0
voto_4=0
voto_5=0
voto_6=0

#loop de usuarios 
for ((i=1; i <= 4 ; i++))
	do
	echo -e "\n#########################################################\n"
	echo -e "\n Ola eleitor(a)! Seja bem vindo a urna de terminal!\n"
	read -p " Digite seu nome: " nome 

	# politicos / nulo / branco
	echo -e " $nome, digite um numero de 1 á 4 para eleger:\n" 
	echo " 1 => Sergio Moro(Podemos)"
	echo " 2 => Lula(PT)"
	echo " 3 => Ciro Gomes(PDT)"
	echo " 4 => Jair Bolsonaro (PL)"
	echo -e "\n ou digite de 5 á 6 para:\n"
	echo " 5 => voto nulo"
	echo -e " 6 => voto branco \n"
	 
	read -p " seu voto: " voto

	#adicionar +1 ao voto ou retornar erro tratado
	case $voto in
		1) ((voto_1++));;
		2) ((voto_2++));;
		3) ((voto_3++));;
		4) ((voto_4++));;
		5) ((voto_5++));;
		6) ((voto_6++));;
	*) echo " Ei $nome, está opção é invalida! tente numeros inteiros de 1 á 6 :)";;
	esac
done

#return dados
echo -e "\n=========================================\n"
echo "Sergio Moro(Podemos) teve $voto_1 votos"
echo "Lula(PT) teve $voto_2 votos"
echo "Ciro Gomes(PDT) teve $voto_3 votos"
echo "Jair Bolsonaro (PL) teve $voto_4 votos"
echo "teve $voto_5 votos nulos"
echo "teve $voto_6 votos brancos"