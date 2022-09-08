/*
 * Faça um programa que leia um número e calcule o fatorial desse número
*/

import java.util.Scanner;

public class T8 {

  public static int Fatorial(int fatoriando){
    if (fatoriando == 0) {
      return 1;
    }
    return fatoriando* Fatorial(fatoriando-1);
  }

  public static void main(String[] args) {
    
    System.out.print("Digite um numero fatoriando.: ");
    Scanner numeroTeclado = new Scanner(System.in);
    int fatoriando = numeroTeclado.nextInt();

    System.out.println("\n>> " + Fatorial(fatoriando));
    
    numeroTeclado.close();
  }
}
