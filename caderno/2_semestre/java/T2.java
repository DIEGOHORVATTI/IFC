/* 
 * Faça um programa que receba o salário base de um funcionário, 
 * calcule e mostre o salário a receber, 
 * sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e 
 * paga imposto de 7% sobre este salário.
 */

  import java.util.Scanner;

public class T2 {
  public static void main(String[] args) {
    
    
    System.out.print("Digite seu salário base: ");
    try (Scanner salario = new Scanner(System.in)) {
      double salarioB = salario.nextInt();
      
      double salreceber,grat,imp;

      grat = (salarioB*5) / 100;
      imp  = (salarioB*7) / 100;
      salreceber=salarioB+grat-imp;
      System.out.println("\nO seu salário é de: " + salreceber + "R$");
    }

  }
}