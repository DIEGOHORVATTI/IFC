#!/usr/bin/env python3

""" Ler 3 valores e escrevê-los em ordem crescente. """

""" 
Eu não entendi muito bem oque o sr quis dizer com 
valores então eu fiz os dois tipos de ordem que aceitão 
string e numeros ordenados pelo id do array e por ordem alfanumérica
"""

a = input("A: ", )
b = input("B: ", )
c = input("C: ", )

lista = [a, b, c]

print("Lista crecente por id do array\n", lista)

print("Lista crecente por ordem alfanumérica\n",sorted(lista ,reverse=True))