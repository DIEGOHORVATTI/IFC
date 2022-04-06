#!/usr/bin/env python3

"""  
  Faça um algoritmo para calcular o volume de uma esfera(4/3*pi*r^3)

  formula 
  4𝝿*r³
    3

  (pi) -> 𝝿 = 3,14

"""

print("4𝝿 * r³\n-------\n   3\n")
r = int(input("Valor de r: ", ))
print("\n4𝝿 *", r,"³\n-----------\n    3\n")
print("\n", 4, "𝝿 *", r**3 ,"\n--------------\n     3\n")
print((4)*(r**3), "𝝿", "\n--------\n   3\n")
print("≈",((4)*(r**3))/3,"𝝿 cm³")
