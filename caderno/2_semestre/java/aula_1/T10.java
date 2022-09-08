/*
 *  Faça um programa que leia um número inteiro e diga se ele é primo
*/

import java.util.Scanner;

// 2, 3, 5, 7, 11, 13, 17, 19,

public class T10 {

  private static boolean Primo(int numero) {
    for (int j = 2; j < numero; j++) {
      if (numero % j == 0)
        return false;
    }
    return true;
  }
  public static void main(String[] args) {
    
    try (Scanner tecladoBuffer = new Scanner(System.in)) {
      System.out.print("Digite um numero: ");
      int numero = tecladoBuffer.nextInt();
      
      if (Primo(numero) == true && numero >= 2 ) {
        System.out.println("\n>> Numero primo");
      }
      else{
        System.out.println("\n>> Numero não primo");
      }
    
    }

  }
}
