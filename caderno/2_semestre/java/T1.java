/*  
 * Leia os 03 ângulos e os 03 lados de um triângulo, 
 * e classifique-o como: retângulo, obtusângulo ou acutângulo; e 
 * equilátero, escaleno ou isósceles.
*/

import java.util.Scanner;
import java.util.Arrays;

public class T1 {
  public static void main(String[] args){

    String triangulos[] ={ 
      "Triangulo Ocutãngo", 
      "Triangulo Retângulo", 
      "Triangulo Obtusângulo", 
      "Triangulo Escaleno",
      "Triangulo Isósceles",
      "Triangulo Equilátero" 
    };

    double lados[] = new double[3];
    try (Scanner ler = new Scanner(System.in)) {
      System.out.print("Digite os 3 lados do triangulo\n\n");
      System.out.print("A = b.h\n     2\n\nA: área\nb: base\nh: altura\n\n");

      for( int i = 0; i < lados.length; i++){ 
        System.out.print("Lado[" + i + "]: "); 
        lados[i] = ler.nextInt(); 
      }
    }
    
    Arrays.sort(lados);
    double c = lados[0];
    double b = lados[1];
    double a = lados[2];

    if (a >= (b + c)) {
      System.out.print("\nNAO FORMA TRIANGULO\n");
    } 
    else {
      // Triangulo Ocutãngo
      if ((a * a) < ((b * b) + (c * c))) {
        System.out.print("\n" + triangulos[0] + "\n");
      }
      
      // Triangulo Retângulo
      if ((a * a) == ((b * b) + (c * c))) {
        System.out.print("\n"+ triangulos[1] +"\n");
      }
      
      // Triangulo Obtusângulo
      if ((a * a) > ((b * b) + (c * c))) {
        System.out.print("\n"+ triangulos[2] +"\n");
      }
      
      // Triangulo Escaleno
      if (((a != b) && (b != c) && (c != a)) && ((a + b + c) == 180) ) {
        System.out.print("\n" + triangulos[3] + "\n");
      }
      
      // Triangulo Isósceles
      if (((a == b) && (b != c)) || ((a != b) && (b == c))) {
        System.out.print("\n" + triangulos[4] + "\n");
      }
      
      // Triangulo Equilátero
      if ((a == b) && (b == c)) {
        System.out.print("\n" + triangulos[5] + "\n");
      }
    }
  }
}
