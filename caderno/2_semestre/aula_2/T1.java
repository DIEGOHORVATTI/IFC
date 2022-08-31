/*
 * Faça um programa que, 
 * dados 2 vetores, 
 * gere um terceiro com todos os valores ordenados 
 * de maneira decrescente.
*/

import java.util.Date;
import java.util.Random;

public class T1 {
  public static void main(String[] args) {
    int TAM_DADOS = 3;
    Random seed = new Random(new Date().getTime());

    int vet1[] = new int[TAM_DADOS];
    int vet2[] = new int[TAM_DADOS];
    int vet3[] = new int[TAM_DADOS*2];

    //preencher matriz vet1
    for(int i=0; i < TAM_DADOS; i++){
      vet2[i] = 1+(seed.nextInt((TAM_DADOS*TAM_DADOS)));
    }
    
    //preencher matriz vet2
    for(int i=0; i < TAM_DADOS; i++){
      vet1[i] = 1+(seed.nextInt((TAM_DADOS*TAM_DADOS)));
    }
    
    // preencher matriz vet3 com vet1+vet2
    int count_1, count_2; count_1=count_2=0;
    for(int i=0; i < TAM_DADOS*2; i++){
      if(i % 2 == 0){
        vet3[i] = vet1[count_1];
        count_1++;
      }else{
        vet3[i] = vet2[count_2];
        count_2++;
      }
    }

    // ordenar matriz seguindo o algoritimo de "InsertionSort" vet3
    int key;
    int y;
    for (int j=1; j < vet3.length; j++) {
      key = vet3[j];
      for (y = j-1; (y >= 0) && (vet3[y] > key); y--) {
        vet3[y+1] = vet3[y];
      }
      vet3[y+1] = key;
    }

    for(int i=0; i < TAM_DADOS; i++){
      System.out.print("\nvet1["+(i+1)+"]: " + vet1[i]);
    }
    System.out.print("\n");
    for(int i=0; i < TAM_DADOS; i++){
      System.out.print("\nvet2["+(i+1)+"]: " + vet2[i]);
    }

    System.out.print("\n");
    for(int i=0; i < (TAM_DADOS+TAM_DADOS); i++){
      System.out.print("\nvet3["+(i+1)+"]: " + vet3[i]);
    }

  }
}