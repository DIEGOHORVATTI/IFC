/*
 * Faça um programa que simule um controle bancário. 
 * 
 * Para tanto, devem ser lidos os códigos de dez contas e seus respectivos saldos. 
 * Os códigos devem ser armazenados em um vetor de números inteiros 
 * (não pode haver mais de uma conta com o mesmo código) 
 * e os saldos devem ser armazenados em um vetor de números reais. 
*/
/*
 * O saldo deverá ser cadastrado na mesma posição do código. Por exemplo, se a conta 504 foi
  armazenada na quinta posição do vetor de códigos, seu saldo deverá ficar na quinta
  posição do vetor de saldos. 
  
 * Depois de fazer a leitura dos valores, deverá aparecer o seguinte menu na tela:
  • Efetuar depósito
  • Efetuar saque
  • Consultar o ativo bancário (soma de todos os saldos)
  • Finalizar programa
 * Obs.1: ao depositar, deve-se solicitar o valor e o código da conta a receber o depósito.
 * Obs.2: para sacar, a mesma coisa. Também, deve-se verificar se tem saldo suficiente para o saque.
*/

import java.util.Date;
import java.util.Random;
import java.util.Scanner;

public class T4 {
  Random seed = new Random(new Date().getTime());
  public static void main(String[] args) {
    int TAM_CONTAS = 2;
    int codigo[] = new int[TAM_CONTAS];
    float saldo[] = new float[TAM_CONTAS];

    Scanner teclado = new Scanner(System.in);
    
    for (int i=0; i < TAM_CONTAS; i++) {
      codigo[i] = (i+1);
    }

  }
}