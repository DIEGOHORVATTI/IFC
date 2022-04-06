#!/usr/bin/env python3

"""
Leia quantos gols o TIME A marcou em uma partida e 
leia quantos gols o TIME B marcou. 
Escrever o nome do vencedor. 
Caso não haja vencedor deverá ser impressa a palavra EMPATE.
"""

time_a = int(input("Quantos gols o time A marcou? ", ))
time_b = int(input("Quantos gols o time B marcou? ", ))

if time_a > time_b:
  print("Vencedor: Time A")
elif time_a < time_b:
  print("Vencedor: Time B")
elif time_a == time_b:
  print("EMPATE")
else:
  print("caracter incorreto")