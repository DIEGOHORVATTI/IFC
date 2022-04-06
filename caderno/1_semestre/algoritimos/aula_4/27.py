#!/usr/bin/env python3

"""
A empresa “MultiSoft” decidiu conceder um aumento de salário 
para os seus funcionários de acordo com a tabela abaixo:

Salário Atual R$    |  Índice de aumento
0 a 300,00          |  10%
300,01 a 600,00     |  11%
600,01 a 900,00     |  12%
900,01 a 1500,00    |  6%
1500,01 a 2000,00   |  3%
Acima de 2000       |  Sem aumento

Escrever um algoritmo que lê, 
para cada funcionário, 
o seu nome e 
o seu salário atual, 
escrevendo depois 
o nome do funcionário, 
seu salário atual, 
o percentual de seu aumento e 
o valor do salário corrigido.
"""

""" LER DADOS USER """
nome = str(input("Digite seu nome: ", ))
salario_atual = float(input("Digite seu salário atual: ", ))

""" BACK END DADOS """
if salario_atual > 0 and salario_atual <= 300.00:
  percentual_aumento = 10
elif salario_atual >= 300.01 and salario_atual <= 600.00:
  percentual_aumento = 11
elif salario_atual >= 600.01 and salario_atual <= 900.00:
  percentual_aumento = 12
elif salario_atual >= 900.01 and salario_atual <= 1500.00:
  percentual_aumento = 6
elif salario_atual >= 1500.01 and salario_atual <= 2000.00:
  percentual_aumento = 3
elif salario_atual > 2000.00:
  percentual_aumento = 0

salario_corrigido = (salario_atual+((salario_atual/100)*percentual_aumento))

""" IMPRIMIR DADOS USER """
print("---------------------------\n")

print("Nome:", nome)
print("Salario atual:", salario_atual, "R$")
print("Percentual de aumento:", percentual_aumento, "%")
print("Salario corrigido:", salario_corrigido, "R$")

print("\n---------------------------")