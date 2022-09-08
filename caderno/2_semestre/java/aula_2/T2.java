/*
 * Faça um programa que, 
 * dados 2 vetores com 10 números inteiros cada, 
 * gere e imprima um vetor dos números não comuns aos vetores
*/

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Random;
import java.util.Date;
import java.util.List;
import java.util.Set;

public class T2 {
  private static <T> Set<T> findDifference(List<T> vet1, List<T> vet2) {
    Set<T> diff = new HashSet<>(vet1);
    diff.removeAll(vet2);
    return diff;
  }

  public static void main(String[] args) {
    // semente aleatória pelos segundos xd
    Random seed = new Random(new Date().getTime());

    //tamanho piloto
    int TAM = 10;

    List<Integer> vet1 = new ArrayList<>();
    List<Integer> vet2 = new ArrayList<>();
    
    // preencher matriz vet1
    for (int i = 0; i < TAM; i++) {
      vet1.add(1 + (seed.nextInt((TAM))));
    }

    // preencher matriz vet2
    for (int i = 0; i < TAM; i++) {
      vet2.add(1 + (seed.nextInt((TAM))));
    }
    
    for (int i=0; i < vet1.size(); i++) {
      System.out.println("vet1[" + i + "]: " + vet1.get(i));
    }System.out.println();
    
    for (int i = 0; i < vet2.size(); i++) {
      System.out.println("vet2[" + i + "]: " + vet2.get(i));
    }System.out.println();
    
    Set<Integer> duplicates = findDifference(vet1, vet2);
    Set<Integer> vet3 = duplicates;
    
    int x=0;
    for (int integer : vet3) {
      System.out.println("vet3[" + x + "]: " + integer);
      x++;
    }
  }
}