/*
 * Em um campeonato de futebol existem cinco times e 
 * cada um possui 11 jogadores.
 * 
 * Faça um programa que receba a idade, o peso e a altura de cada um dos jogadores,
 * calcule e mostre:
 * 
 * a quantidade de jogadores com idade inferior a 18 anos;
 * a média das idades dos jogadores de cada time;
 * a média das alturas de todos os jogadores do campeonato;
 * a porcentagem de jogadores com mais de 80kg entre todos os jogadores do campeonato.
*/

import java.util.Scanner;

public class T7 {
  public static void main(String[] args) { 

    int TIMES = 5;
    int JOGADORES = 11;

    System.out.print("Tabela I\nCódigo     Preço\n01 a 10 -> R$ 10,00\n11 a 20 -> R$ 15,00\n21 a 30 -> R$ 20,00\n31 a 40 -> R$ 40,00\n\nTabela II\nPreço Total da Nota         % de Desconto\nAté R$ 250,00               05%\nEntre R$250,00 e R$500,00   10%\nAcima de R$ 500,00          15%\n\n");
    
    int idade[][]    = new int[TIMES][JOGADORES];
    float peso[][]   = new float[TIMES][JOGADORES];
    float altura[][] = new float[TIMES][JOGADORES];
    
    try (Scanner scanner = new Scanner(System.in)) {
      for(int j=0; j < TIMES; j++){
        for(int i=0; i < JOGADORES; i++){
          System.out.print("Idade  -> time[" + j + "], jogador[" + i + "]...: ");
          idade[j][i] = scanner.nextInt();

          System.out.print("Peso   -> time[" + j + "], jogador[" + i + "]...: ");
          peso[j][i] = scanner.nextInt();

          System.out.print("Altura -> time[" + j + "], jogador[" + i + "]...: ");
          altura[j][i] = scanner.nextInt();
          System.out.print("------------------------------------\n");
        }
        System.out.print("\n");
      }
    }

    int contIdadeMaior, contPesoMaior, mediaIdade, idadesTimes[] = new int[TIMES];
    float mediaAltura;
    mediaAltura=contPesoMaior=contIdadeMaior=mediaIdade=0;
    for (int j = 0; j < TIMES; j++) {
      for (int i = 0; i < JOGADORES; i++) {
        if (idade[j][i] < 18) {
          contIdadeMaior++;
        }
        if (peso[j][i] >= 80) {
          contPesoMaior++;
        }
        mediaIdade += idade[j][i];
        mediaAltura += altura[j][i];
      }
      idadesTimes[j] = mediaIdade/JOGADORES;
    }

    mediaAltura /= (TIMES * JOGADORES);
    
    System.out.println("Media idade menor 18....: " + contIdadeMaior);
    System.out.println("Media altura seleção....: " + mediaAltura);
    System.out.println("Media peso maior 80.....: " + contPesoMaior);
    mediaIdade=0;
    for (int i = 0; i < TIMES; i++) {
      System.out.println("Media idade Time["+(i+1)+"].....: " + idadesTimes[i]);
    }
  }
}