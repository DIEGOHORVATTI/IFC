#!/usr/bin/env python3

"""
9) Faça um algoritmo para calcular e exibir um salário reajustado 
em 23,75%. O salário atual deve ser fornecido pelo usuário.
"""

salario_inicial = int(input("Digite seu salário: ", ))

print("Salario inicial:", salario_inicial,"R$")

reajuste_salarial = float(23.75)
print("Valor de reajuste", reajuste_salarial,"%")

salario_corrigido = (salario_inicial / 100) * reajuste_salarial 

print("Salario reajustado:", salario_inicial + salario_corrigido,"R$")