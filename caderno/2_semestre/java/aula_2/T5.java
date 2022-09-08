/*
 * Faça um programa que preencha uma matriz 7x7 de números inteiros 
 * e crie dois vetores com sete posições cada um que contenham, 
 * respectivamente, o maior elemento de cada uma das linhas e 
 * o menor elemento de cada uma das colunas. 
 * Escreva a matriz e os dois vetores gerados.
*/

import java.util.Random;
import java.util.Date;

public class T5 {
  public static void main(String[] args) {
    Random seed = new Random(new Date().getTime());
    int TAM = 7;
    int vet1[][] = new int[7][7];

    // gerar matriz
    for (int j=0; j < TAM; j++) {
      for (int i=0; i < TAM; i++) {
        vet1[j][i] = 10+(seed.nextInt((80)) );
      }
    }

    // escrevr matriz
    for (int j = 0; j < TAM; j++) {
      for (int i = 0; i < TAM; i++) {
        System.out.print(vet1[j][i] + " ");
      }
      System.out.println();
    }

    // menor elemento de cada colunas
    for (int j = 0; j < TAM; j++) {
      for (int i = 0; i < TAM; i++) {
        vet1[j][i] = 10 + (seed.nextInt((80)));
      }
    }
    
    // maior elemento de cada uma das linhas 

  }
}
