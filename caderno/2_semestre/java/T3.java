/* 
 * Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. 
 * Faça um programa que recebe o valor do salário mínimo e 
 * a quantidade de quilowatts consumida por uma residência, calcule e mostre:
 * o valor de cada quilowatt;
 * o valor a ser pago por essa residência;
 * o valo a ser pago com 15% de desconto
 */

import java.util.Scanner;

public class T3 {
  public static void main(String[] args) {
  
    System.out.print("Digite seu salário base: ");
    try (Scanner salario = new Scanner(System.in)) {
      double salarioB = salario.nextInt();
      
      System.out.print("Digite a quantidade de quilowatts: ");
        try (Scanner quiloWatt = new Scanner(System.in)) {

          double quiloWattQuantidade = quiloWatt.nextInt();
          double quiloWattValor = (salarioB / 5);
          double quiloPago = quiloWattValor * quiloWattQuantidade;
          
          // sim nois do curso superiror temos problemas com matemática básica kkkkkkkkk
          // Ex.: 15% de 500 = ((500*15)/100) = 75
          System.out.print("\nValor decada 1watt: " + quiloWattValor + "R$");
          System.out.print("\nValor a ser pago watt: " + quiloPago + "R$");
          System.out.print("\nValor a ser pago watt 15% desconto: " + ((quiloPago*15)/100) + "R$");
        }
      }
  }
}
