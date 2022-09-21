import java.util.Random;
import java.util.Date;

public class T6{
  Random seed = new Random(new Date().getTime());

  public class Data{
    private int dia, mes, ano;
  
    public Data(){
      this.dia = 15;
      this.mes = 11;
      this.ano = 2002;
    }

    public void alterarData(int dia, int mes, int ano){
      this.dia = dia;
      this.mes = mes;
      this.ano = ano;
      System.out.print("dia: " + this.dia + " / mês: " + this.mes + " / ano: " + this.ano );
    }
    
  }

  public static void main(String[] args) {
  }
}