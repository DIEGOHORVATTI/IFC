#!/usr/bin/env python3

"""
Faça um algoritmo que 
lê o nome de um vendedor, 
lê o salário fixo do vendedor,
lê o total (em reais) de vendas por ele efetuadas e 
lê o percentual que ganha sobre o total de vendas. 
O algoritmo deve calcular o salário total do vendedor e exibir, 
+ ao final, a seguinte frase:

O vendedor <nome do vendedor> recebeu <salario total> reais.
"""

name = str(input("Ola vendedor! digite seu nome: ", ))
salario_fixo = float(input("Digite seu salario fixo: ", ))
salario_vendas = float(input("Digite o valor do total de vendas: ", ))
salario_percentual = float(input("Digite o percentual de ganho das vendas: ", ))

salario_total = salario_fixo+salario_vendas+salario_percentual 

print("\nO vendedor", name, "recebeu", salario_total ,"reais.")