#!/usr/bin/env python3

"""
10) Faça um algoritmo para calcular e exibir do salário líquido de um 
professor, onde o número de horas, o valor da hora e o percentual 
do INSS devem ser fornecidos pelo usuário:
  a) salario_bruto = num_hora_aula * valor_hora_aula 
  b) salario_liquido = salario_bruto – (salario_bruto * percentual_INSS). 

"""

#Tabela do INSS
print("7,5% para quem ganha um salário mínimo (R$ 1.212)\n9% para quem ganha entre R$ 1.212,01 e R$ 2.427,35\n12% para quem ganha entre R$ 2.427,36 e R$ 3.641,03\n14% para quem ganha entre R$ 3.641,04 e R$ 7.087,22\n-----------------------------------------------------\n")

# a)
percentual_INSS = float(input("Informe o percentual do INSS: ", ))

num_hora_aula = int(input("Informe o numero de horas de aulas: ", ))
valor_hora_aula = int(input("Informe o valor da hora: ", ))

salario_bruto = num_hora_aula*valor_hora_aula
print("\nSalario Bruto:", salario_bruto,"R$")

print("Pencentual INSS:", percentual_INSS,"R$")

# b) 

salario_liquido = (salario_bruto-((salario_bruto/100)*percentual_INSS))
print("Salario Liquido:", salario_liquido,"R$")