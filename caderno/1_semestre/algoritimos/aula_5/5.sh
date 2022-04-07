#!/usr/bin/env bash
#
#####################################################
#  Escrever um algoritmo que lê um valor N inteiro  #
#  e positivo e que calcula e escreve o valor de E: # 
#  O fatorialorial é cálculado da seguinte forma:   #
#  fatorialorial de 3: 3x2x1 = 6                    #
#####################################################
#
# O contador i inicia com o número 1 e o loop será
# executado mediante seu valor ser menor igual ao 
# valor da variável $num
#
###########################################
################ //FORMULA\\ ##############
#E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!#
###########################################

num_fatoriado()
{

	for ((fatorial=1 ,i=1; i <= $1 ; i++))
	do
	#Aqui é utilizada a variável $fatorial que será multiplicado
	#pela variável $i(contador) até o fim do loop

	    fatorial=$(($fatorial*$i))

	done


	echo $fatorial

}

read -p "Digite o valor de N!: " valor_n

echo  "E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 /" $valor_n"!"

fat_1=$(num_fatoriado 1)
fat_2=$(num_fatoriado 2)
fat_3=$(num_fatoriado 3)
fat_n=$(num_fatoriado $valor_n)

echo  "E = $((1 + 1)) / $(($fat_1 + 1)) / $(($fat_2 + 1)) / $(($fat_3 + 1)) / $fat_n"
echo  "E = $(( (1+1 / $fat_1+1 / $fat_2+1 / $fat_1+1 / $fat_n) ))" 