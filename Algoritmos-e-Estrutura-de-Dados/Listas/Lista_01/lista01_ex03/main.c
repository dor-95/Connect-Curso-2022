#include <stdio.h>
#include <stdlib.h>

int main()
{

/*Exercicio 03 - A padaria Hotp�o vende uma certa quantidade de p�es franceses
e uma quantidade de broas a cada dia. Cada p�ozinho custa
R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer
saber quanto arrecadou com a venda dos p�es e broas (juntos),
e quanto deve guardar numa conta de poupan�a (10% do total
arrecadado). Voc� foi contratado para fazer os c�lculos para o dono. Com base nestes fatos, fa�a um algoritmo
para ler as quantidades de p�es e de broas, e depois calcular
os dados solicitados
*/

    printf("============================\n");
    printf("|       PANIFICADORA       |\n");
    printf("============================\n");
    printf("|          HOT PAO         |\n");
    printf("============================\n\n");

    printf("============================\n");
    printf("|          PRODUTOS        |\n");
    printf("============================\n");
    printf("|      BROA - R$ 1.50      |\n");
    printf("|    PAOZINHO - R$ 0.12    |\n");
    printf("============================\n");

    /* Perguntas

    1 - Porque n�o executa a conta ao colocar unsigned short
    int ou short int no lugar da variavel int??

    2 - Posso realizar uma conta fora do printf??
    Ex: totalBroas = quantidadeBroas * valorBroas

    */


    int quantidadeBroas, quantidadePaozinho;
    float valorBroas = 1.50, valorPaozinho = 0.12, totalBroas, totalPaozinho, arrecadacaoTotal;

    printf("\nDigite a quantidade de broas vendidas: ");
    scanf("%ud", &quantidadeBroas);
    printf("Digite a quantidade de paozinhos vendidos: ");
    scanf("%ud", &quantidadePaozinho);

    totalBroas = quantidadeBroas * valorBroas;
    totalPaozinho = quantidadePaozinho * valorPaozinho;

    printf("============================\n");
    printf("Valor arrecadado com broas: R$ %.2f\n", totalBroas);
    printf("Valor arrecadado com paozinhos: R$ %.2f\n", totalPaozinho);
    printf("Arrecadacao total do dia: R$ %.2f\n", totalBroas + totalPaozinho);

    printf("Valor destinado a poupanca (10 por cento): R$ %.2f\n", 0.1*(totalBroas + totalPaozinho));
}
