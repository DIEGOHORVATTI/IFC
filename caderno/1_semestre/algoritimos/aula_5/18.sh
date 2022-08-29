#!/usr/bin/env bash
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
# Calcule e escreva: 																									          #
# *número de candidatos do sexo feminino; 															          #
# *número de candidatos do sexo masculino; 														          #
# *a idade média dos homens que já têm experiência no serviço;					          #
# *a porcentagem dos homens com mais de 45 anos entre o total dos homens; 				#
# número de mulheres com idade inferior a 35 anos e com experiência no serviço; #
# a menor idade entre as mulheres que já têm experiência no serviço.						#
#################################################################################


#definir quantidade de candidatoss
read -p " Quantos candidatos á no quadro de vagas?: " candidatos

M=0
F=0
S=0
N=0

echo -e "\n\033[33;1m +----------------------------------------------------------------------------------------------+\033[m"
echo -e "\033[33;1m | Ola sr.Admin! Seja bem vindo ao dasboard de terminal! Digite os nomes dos candidados e dados |\033[m"
echo -e "\033[33;1m +----------------------------------------------------------------------------------------------+\033[m\n"

#loop de usuarios | para quando der Xcandidatos candidatoss no loop
for ((i=1; i <= $candidatos ; i++))
	do

	echo -e "\n#########################################################\n"

	read -p " Digite o nome do candidatos N$i: " nome 
	read -p " Digite a idade de $nome: " idade

	#sair se idade for iqual a 0
	case $idade in 0) echo "Adeus! volte sempre"; exit;; esac

	read -p " Digite para [M]Masculino ou [F]Feminino: " sexo
	read -p " Digite para experiência de trabalho [S]Sim ou [N]Não: " experiencia

	#case de sexo com verificação por string [minuscula|maiuscula]
	case $sexo in
		m|M)
			((M++))
				#somar todos os valores de idades contidos no array e dividir pelos candidatos
				array_idade_masculina[$i]=$idade 
				#somar todos os valores de idades contidos no array e dividir pelos candidatos
				idade_media_masculina=$(( ((soma+=${array_idade_masculina[$i]})/($candidatos)) )) 
					#homen com experiencia↓
					case $experiencia in
						s|S)
							
							#homens com idade sulperior a 45 anos↓
							if [[ $idade -gt 45  ]]
							then
								#somar todos os valores de idades contidos no array e dividir pelos candidatos com idade maior que 45
								array_idade_masculina_45[$i]=$idade 
								#somar todos os valores de idades contidos no array e dividir pelos candidatos com idade maior que 45
								idade_media_masculina_45=$(( ((soma+=${array_idade_masculina_45[$i]})/($candidatos)) )) 
							fi

							#array que guarda as idades em array incrementando a posição a cada loop
							array_idade_masculina_experiencia[$i]=$idade 
							#somar todos os valores de idades contidos no array e dividir pelos candidatos
							idade_media_masculina_experiencia=$(( ((soma+=${array_idade_masculina_experiencia[$i]})/($candidatos)) )) 
							((S++))
						;;
						n|N)
							((N++))
						;;
					esac
		;;
		f|F)
			((F++))
			array_idade_ferminina[$i]=$idade #array que guarda as idades em array incrementando a posição a cada loop
			idade_media_ferminina=$(( ((soma+=${array_idade_ferminina[$i]})/($candidatos)) )) #somar todos os valores de idades contidos no array e dividir pelos candidatos
							
				#mulheres com idade inferior a 35↓
				if [[ $idade -le 45  ]]
				then
					#somar todos os valores de idades contidos no array e dividir pelos candidatos com idade maior que 45
					array_idade_masculina_45[$i]=$idade 
					#somar todos os valores de idades contidos no array e dividir pelos candidatos com idade maior que 45
					$idade_media_masculina_45=$(( ((soma+=${array_idade_masculina_45[$i]})/($candidatos)) )) 
				else
					$homen_45=0
				fi
		;;
		*) echo " Caracter invalido tente 'f''F' ou 'm''M' [minusculo/maiusculo] " ;;
	esac

done

#return dados
echo -e "\n=============================================\n"
echo "Numero de candidados Masculinos: $M"
echo "Numero de candidados Fermininos: $F"
echo "Média de homens com mais de 45 anos: $homen_45%"
echo "Média de candidadas masculinos com experiência: $idade_media_masculina_experiencia%"
echo "Porcentagem de mulheres com menos de 35anos: x"
