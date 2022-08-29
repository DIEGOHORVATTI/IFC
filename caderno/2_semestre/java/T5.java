/* 
 * Faça um programa que receba
 * O código do produto comprado;
 * A quantidade comprada do produto
 * 
 * Calcule e mostre:
 * 
 * O preço unitário do produto comprado, seguindo a Tabela I;
 * O preço total da nota;
 * O valor do desconto, seguindo a Tabela II e applicado sobre o preço total da nota;
 * O preço final da nota depois do desconto.
 */

import java.util.Scanner;

public class T5 {
  
  static int Tabela1(int codigo) {
    switch (codigo) {
      case 1: codigo = 10; break;
      case 2: codigo = 15; break;
      case 3: codigo = 20; break;
      case 4: codigo = 40; break;
    }
    System.out.println("\nValor unitário...: " + codigo);
    return codigo;
  }
  
  static int Tabela2(int desconto) {
    if      (desconto >= 0  && desconto <= 250){ desconto = 5;}
    else if (desconto > 250 && desconto <= 500){ desconto = 10;}
    else if (desconto > 500){ desconto = 15;}
    System.out.println("Valor desconto...: " + desconto + "%");
    return desconto;
  }

  static int PrecoTotal(int valor, int produtoQuantidadeB){ 
    int resposta = valor*produtoQuantidadeB;
    System.out.println("Preço total......: " + resposta + "R$");
    return(resposta);
  }

  static int PrecoFinal(int quantidadeTotal, int valorDesconto){ 
    int precoFinal = (quantidadeTotal - ((quantidadeTotal * valorDesconto) / 100));
    System.out.println("Preço final nota.: " + precoFinal + "R$");
    return(precoFinal);
  }

  static void calculoPrint(int valor, int produtoQuantidadeB){
    int quantidadeTotal = PrecoTotal(valor, produtoQuantidadeB);
    int valorDesconto = Tabela2(quantidadeTotal);
    PrecoFinal(quantidadeTotal, valorDesconto);
  }

  public static void main(String[] args) {
    int  produtoQuantidadeB, codigoB, valor;
    produtoQuantidadeB=codigoB=valor=0;

    System.out.print("Tabela I\nCódigo     Preço\n01 a 10 -> R$ 10,00\n11 a 20 -> R$ 15,00\n21 a 30 -> R$ 20,00\n31 a 40 -> R$ 40,00\n\nTabela II\nPreço Total da Nota         % de Desconto\nAté R$ 250,00               05%\nEntre R$250,00 e R$500,00   10%\nAcima de R$ 500,00          15%\n\n");

    System.out.print("Código do produto......: ");
    Scanner codigo = new Scanner(System.in);
    codigoB = codigo.nextInt();
    
    System.out.print("Quantidade de produtos.: ");
    Scanner produtoQuantidade = new Scanner(System.in);
    produtoQuantidadeB = produtoQuantidade.nextInt();
    
    if (codigoB >= 0 && codigoB <= 10) {
      valor = Tabela1(1);
      calculoPrint(valor, produtoQuantidadeB);

    } else if (codigoB >= 11 && codigoB <= 20) {
      valor = Tabela1(2);
      calculoPrint(valor, produtoQuantidadeB);

    } else if (codigoB >= 21 && codigoB <= 30) {
      valor = Tabela1(3);
      calculoPrint(valor, produtoQuantidadeB);
      
    } else if (codigoB >= 31 && codigoB <= 40) {
      valor = Tabela1(4);
      calculoPrint(valor, produtoQuantidadeB);
      
    }
    
    codigo.close();
    produtoQuantidade.close();
  }
}