/*
 * Faça um programa que, 
 * dados 2 vetores com 10 números inteiros cada, 
 * gere e imprima um vetor dos números não comuns aos vetores
*/

import java.util.Random;
import java.util.Date;

public class T2 {
  public static void main(String[] args) {
    Random seed = new Random(new Date().getTime());
    int TAM = 10;
    int vet1[] = new int[TAM];
    int vet2[] = new int[TAM];
    int vet3[] = new int[TAM];
    int vetCacheVet3[] = new int[TAM];

    // preencher matriz vet1
    for (int i = 0; i < TAM; i++) {
      vet2[i] = 1 + (seed.nextInt((TAM)));
    }

    // preencher matriz vet2
    for (int i = 0; i < TAM; i++) {
      vet1[i] = 1 + (seed.nextInt((TAM)));
    }

    // amarzenas numeros iqual entre vetores
    int y=0;
    for (int j = 0; j < TAM; j++) {
      for (int i = 0; i < TAM; i++) {
        if( vet1[j] == vet2[i]){
          vetCacheVet3[y] = vet1[j];
          y++;
        }
      }
    }

    //Remove elementos com valor duplicado 
    int k_remove, i_remove, j_remove;
    k_remove=i_remove=j_remove=0;
    /* Remove elementos com valor duplicado */
    for (i_remove = 0; i_remove < TAM; i_remove++) {
      for (j_remove = i_remove + 1; j_remove < TAM;) {
        if (vetCacheVet3[i_remove] == vetCacheVet3[i_remove]) {
          for (k_remove = j_remove; k_remove < TAM; k_remove++)
            vetCacheVet3[k_remove] = vetCacheVet3[k_remove + 1];

          TAM--;
        } else {
          j_remove++;
        }
      }
    }

    System.out.print("\n");
    for (int i = 0; i < vet1.length; i++) {
      System.out.print("\nvet1[" + (i + 1) + "]: " + vet1[i]);
    }
    System.out.print("\n");
    for (int i = 0; i < vet2.length; i++) {
      System.out.print("\nvet2[" + (i + 1) + "]: " + vet2[i]);
    }
    System.out.print("\n");
    for (int i = 0; i < vetCacheVet3.length; i++) {
      System.out.print("\nvet3[" + (i + 1) + "]: " + vetCacheVet3[i]);
    }

  }
}
