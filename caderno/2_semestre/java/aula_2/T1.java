/*
 * Faça um programa que, 
 * dados 2 vetores, 
 * gere um terceiro com todos os valores ordenados 
 * de maneira decrescente.
*/

import java.util.ArrayList;
import java.util.Collections;
import java.util.Random;
import java.util.Date;
import java.util.List;

public class T1 {
  public static void main(String[] args) {
    int TAM_DADOS = 3;
    Random seed = new Random(new Date().getTime());
    
    List<Integer> vet1 = new ArrayList<>();
    List<Integer> vet2 = new ArrayList<>();
    List<Integer> vet3 = new ArrayList<>();

    //preencher matriz vet1
    for(int i=0; i < TAM_DADOS; i++){
      vet1.add(1 + (seed.nextInt((TAM_DADOS * TAM_DADOS))));
    }
    
    //preencher matriz vet2
    for(int i=0; i < TAM_DADOS; i++){
      vet2.add(1 + (seed.nextInt((TAM_DADOS * TAM_DADOS))));
    }
    
    // preencher matriz vet3 com vet1+vet2
    vet3.addAll(vet1);
    vet3.addAll(vet2);

    // ordenar matriz seguindo o algoritimo de "InsertionSort" vet3
    Collections.sort(vet3);

    for(int i=0; i < TAM_DADOS; i++){
      System.out.print("\nvet1["+(i+1)+"]: " + vet1.get(i));
    }
    System.out.print("\n");
    for(int i=0; i < TAM_DADOS; i++){
      System.out.print("\nvet2["+(i+1)+"]: " + vet2.get(i));
    }

    System.out.print("\n");
    for(int i=0; i < (TAM_DADOS+TAM_DADOS); i++){
      System.out.print("\nvet3["+(i+1)+"]: " + vet3.get(i));
    }
  }
}