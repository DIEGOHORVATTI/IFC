/* 
 * Faça um programa que dados 2 vetores inteiros de tamanhos 10 e 5, respectivamente, 
 * calcule e mostre 2 vetores resultantes:
 * 
 * • No primeiro vetor resultante, cada elemento será composto 
 *   pela soma de cada número par do primeiro vetor 
 *   somado a todos os números do segundo vetor;
 * • O segundo vetor resultante será composto 
 *   pela quantidade de divisores que cada número ímpar do 
 *   primeiro vetor tem no segundo vetor
 */

import java.util.Random;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

public class T3 {
  public static void main(String[] args) {
    Random seed = new Random(new Date().getTime());
    int vet1[] = new int[10];
    int vet2[] = new int[5];
    int Seed = 10;
    
    // preencher matriz vet1
    for (int i = 0; i < vet1.length; i++) {
      vet1[i] = (1 + (seed.nextInt((Seed))));
    }
    // preencher matriz vet2
    for (int i = 0; i < vet2.length; i++) {
      vet2[i] = (1 + (seed.nextInt((Seed))));
    }
    
    // imprimir matriz 1
    for (int i = 0; i < vet1.length; i++) {
      System.out.println("vet1[" + i + "]: " + vet1[i]);
    }
    System.out.println();
    // imprimir matriz 2
    for (int i = 0; i < vet2.length; i++) {
      System.out.println("vet2[" + i + "]: " + vet2[i]);
    }
    System.out.println();

    // somar todos os vet2
    int somaParGeral2=0;
    for (int i = 0; i < vet2.length; i++) {
      somaParGeral2+=vet2[i];
    }
    // somar pares vet1
    List<Integer> somaPar = new ArrayList<>();
    for (int i = 0; i < vet1.length; i++) {
      if (vet1[i] % 2 == 0) {
        somaPar.add(somaParGeral2+vet1[i]);
      }
    }
    
  List<Integer> quantDivisores = new ArrayList<>();
    for (int j = 0; j < vet1.length; j++) {
      if (vet1[j] % 2 == 1) {
        for (int i = 0; i < vet2.length/2; i++) {
          if (vet1[j] % vet2[i] == 0) {
            quantDivisores.add(vet1[j+1]);
          }
        }
      }
    }

    for (int i=0; i < quantDivisores.size(); i++) {
      if (vet1[i] % 2 == 1) {
        System.out.println("Qunatidades dividores[" + i + "]: " + quantDivisores.size());
      }
    }

    System.out.println();
    for (int i=0; i < somaPar.size(); i++) {
      System.out.println("vet2 todo + vt1 um par[" + i + "]: " + somaPar.get(i));
    }
  }
}