/*
 * Faça um programa que leia dois números e 
 * apresente o fatorial de todos os números
 * que estejam dentro do intervalo definido pelos números que foram lidos
*/

import java.util.Scanner;

public class T9 {
  public static int Fatorial(int fatoriando) {
    if (fatoriando == 0) {
      return 1;
    }
    return fatoriando * Fatorial(fatoriando - 1);
  }
  public static void main(String[] args) {
    try (Scanner scanner = new Scanner(System.in)) {
      // teclado 1
      System.out.print("Digite numero fatoriando[1].: ");
      int fatorial1 = scanner.nextInt();
      
      // teclado 2
      System.out.print("Digite numero fatoriando[2].: ");
      int fatorial2 = scanner.nextInt();
      
      // sinal positivo
      int cont = (fatorial1 >= fatorial2) ? (fatorial1-fatorial2) : (fatorial2-fatorial1);

      System.out.println();
      if (fatorial1 <= fatorial2) {
        for (int i=0; i <= cont; i++) {
          System.out.println("[" + (fatorial1) + "] >> " + Fatorial(fatorial1++));
        }
      }else{
        for (int i=0; i <= cont; i++) {
          System.out.println("[" + (fatorial1) + "] >> " + Fatorial(fatorial1--));
        }
      }
    }
  }
}