/* 
 * Faça um programa que leia um conjunto não determinado de valores, 
 * um de cada vez, e escreva uma tabela com cabeçalho, 
 * que deve ser repetido a cada vinte linhas. 
 * 
 * A tabela deverá conter o valor lido, seu cubo e sua raiz quadrada. 
 * Finalize quando a entrada for um número negativo ou 0.
 */

import java.util.Scanner;
import java.lang.Math;

public class T12 {
  public static void main(String[] args) {
    int LINHAS = 20;
    int teclado, i, valores[] = new int[LINHAS];
    i=0;
    teclado=1;
    try (Scanner tecladoLeitura = new Scanner(System.in)) {
      while(true){

        System.out.print("["+ (i+1) +"]: >> ");
        teclado = tecladoLeitura.nextInt();
        if (teclado <= 0) { break; }
        valores[i] = teclado;

        i++;
        if(i == LINHAS){
          System.out.println();
          for (int j=0; j < LINHAS; j++) {
            System.out.println("["+(j+1)+"]: " + valores[j] + " -> ³(" + (Math.pow(valores[j], 3)) + ")  \t|\t ²(" + (Math.pow(valores[j], 2)) + ")");
          }
          i=0;
          System.out.println();
        }
      }
    }
  }
}
