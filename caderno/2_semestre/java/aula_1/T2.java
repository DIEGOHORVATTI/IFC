/* 
 * Faça um programa que receba o salário base de um funcionário, 
 * calcule e mostre o salário a receber, 
 * sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e 
 * paga imposto de 7% sobre este salário.
 */

import java.util.Scanner;

public class T2 {
  public static void main(String[] args) {
    double baseSalary = getSalarioBase();

    double getSalary = new SalaryCalculator().calculateSalary(baseSalary);

    System.out.println("\nO seu salário é de: " + getSalary + "R$");
  }

  private static double getSalarioBase() {
    System.out.print("Digite seu salário base: ");
    try (Scanner salary = new Scanner(System.in)) {
      return salary.nextDouble();
    }
  }
}

class SalaryCalculator {
  public double calculateSalary(double salarioB) {
    double gratificacao = calculateGratification(salarioB);

    double taxes = calculateTaxes(salarioB);

    return salarioB + gratificacao - taxes;
  }

  private double calculateGratification(double salarioB) {
    return (salarioB * 5) / 100;
  }

  private double calculateTaxes(double salarioB) {
    return (salarioB * 7) / 100;
  }
}