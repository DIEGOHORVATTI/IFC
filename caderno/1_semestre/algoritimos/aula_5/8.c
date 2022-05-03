//gcc ./8.c -o ./exe/8.exe && ./exe/8.exe
/*
  Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. 
  Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
  1,2,3,4 = voto para os respectivos candidatos;
  5 = voto nulo;
  6 = voto em branco;

  Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:
  total de votos para cada candidato;
  total de votos nulos;
  total de votos em branco;

  Como finalizador do conjunto de votos, tem-se o valor 0.
*/

#include <stdio.h>
#include "./make.c"

int main()  
{

    //atribuir valores inteiros
    int cand1, cand2, cand3, cand4, branco, nulo, voto, i;
    
    //zerar valores
    cand1 = cand2 = cand3 = cand4 = branco = nulo = 0;

    //loop de usuários
    for (i = 1; i <= 4; i++)
    {
        printf("\n\n ######################################\n");
        printf(" Ola eleitor, Digite seu voto: "); 
        scanf("%i", &voto);

            switch(voto){
                case 0:
                    printf("\n ######################################\n");
                    printf(" #  Apenas valores numéricos de 1 á 6 #\n"); 
                    printf(" ######################################\n\n");
                    return(0); 
                    break;
                case 1:
                    cand1++; break;
                case 2:
                    cand2++; break;
                case 3:
                    cand3++; break;
                case 4:
                    cand4++; break;
                case 5:
                    nulo++; break;
                case 6:
                    branco++; break;
                default:
                    nulo++; break;
            }
        }

    //return dados
    printf("\n\n ######################################\n");
    printf(" O candidado 1 recebeu %d votos\n", cand1);
    printf(" O candidado 2 recebeu %d votos\n", cand2);
    printf(" O candidado 3 recebeu %d votos\n", cand3);
    printf(" O candidado 4 recebeu %d votos\n", cand4);
    printf(" O total de votos nulos foi %d votos\n", nulo);
    printf(" O total de votos brancos foi %d votos\n", branco);

    make();
    return (0);
}