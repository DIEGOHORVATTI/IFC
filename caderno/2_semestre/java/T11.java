/*
 * Faça um programa que receba dez números inteiros e 
 * mostre a quantidade de números primos dentre os número que foram digitados.
*/

import java.util.Scanner;

// 2, 3, 5, 7, 11, 13, 17, 19,

public class T11 {

  private static boolean Primo(int numero) {
    for (int j = 2; j < numero; j++) {
      if (numero % j == 0)
        return false;
    }
    return true;
  }
  public static void main(String[] args) {
    try (Scanner tecladoBuffer = new Scanner(System.in)) {
      
      int count=0;
      for (int i=0; i < 10; i++) {
        System.out.print("Digite um numero["+ (i+1) +"]: ");
        int numero = tecladoBuffer.nextInt();
        
        if (Primo(numero) == true && numero >= 2 ) {
          count++;
        }
      }
      System.out.print("\nA ["+ count +"] numeros primos");
    }
  }
}
