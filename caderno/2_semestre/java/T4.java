/* 
 * Faça um programa que recebe 
 * o número de horas trabalhadas e 
 * o valor do salário mínimo, 
 * 
 * calcule e mostre o salário a receber seguindo estas regras:
 * 
 * a hora trabalhada vale a metade do salário mínimo;
 * o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
 * o imposto equivale a 3% do salário bruto;
 * o salário a receber equivale ao salário bruto menos o imposto
 */

import java.util.Scanner;

public class T4 {
  public static void main(String[] args) {
    System.out.print("Digite o número de h/trabalhadas: ");
    try (Scanner horaTrabalhada = new Scanner(System.in)) {
      double horaTrabalhadaB = horaTrabalhada.nextInt();

      System.out.print("Digite seu salário base: ");
      try (Scanner salario = new Scanner(System.in)) {
        double salarioB = salario.nextInt();

        double horaTrabalhadaValor = (salarioB / 2);
        double salarioBruto = horaTrabalhadaB * horaTrabalhadaValor;
        double imposto = ((salarioBruto*3)/100);
        double salarioReceba = salarioBruto-imposto;

        System.out.print("\nSalário a receber: " + salarioReceba + "R$");
      }
    }
  }
}