/* 
 * Faça uma calculadora de troco, baseado nas cédulas da nossa moeda.
*/

import java.util.Scanner;

public class T6 {
  public static void main(String[] args) {
    
    System.out.print("Valor Total Cobrado.: ");
    Scanner valorCobrado = new Scanner(System.in);
    int valorCobradoB = valorCobrado.nextInt();

    System.out.print("Valor Total recebido.: ");
    Scanner recebido = new Scanner(System.in);
    int recebidob = recebido.nextInt();
    
    int valorRestante = recebidob-valorCobradoB;

    if (valorRestante < 0) {
      System.out.print("\nValor Total Faltante.: " + valorRestante + "R$");
    }else{
      System.out.print("\nValor Total Gerado...: " + valorRestante + "R$");
    }
    
    
    recebido.close();
    valorCobrado.close();
  }
}
