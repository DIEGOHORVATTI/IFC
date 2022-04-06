#!/usr/bin/env python3

"""
Faça um algoritmo que leia um nº inteiro
e mostre uma mensagem indicando se este número é par ou ímpar. 
Ex: se (x%2=0) “x é par”, se (x%2=1) “x é ímpar”.
"""

num_1 = int(input("Digite o valor de x: ", ))

if num_1 % 2 == 0:
  print(num_1, "é par")
elif num_1 % 2 == 1:
  print(num_1, "é impar")
else:
  print("caracter incorreto")
