#include <stdio.h>
#include <stdlib.h>

     /*Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar. Faça um algoritmo para ler a quantidade de cada tipo de
     moeda, e imprimir o valor total economizado, em reais. Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo
     moeda de um tipo, a quantidade respectiva é zero. */

int main()
{
    printf("|===================================|\n");
    printf("|         COFRE DO PEDRINHO         |\n");
    printf("|===================================|\n");

    float qtd_um_centavo, qtd_cinco_centavos, qtd_dez_centavos, qtd_vintecinco_centavos, qtd_cinquenta_centavos, qtd_um_real, total;

    printf("\nInforme a quantidade de moedas de: \n");

    printf("\nR$ 0,01 centavo: ");
    scanf("%f", &qtd_um_centavo);
    printf("\nR$ 0,05 centavos: ");
    scanf("%f", &qtd_cinco_centavos);
    printf("\nR$ 0,10 centavos: ");
    scanf("%f", &qtd_dez_centavos);
    printf("\nR$ 0,25 centavos: ");
    scanf("%f", &qtd_vintecinco_centavos);
    printf("\nR$ 0,50 centavos: ");
    scanf("%f", &qtd_cinquenta_centavos);
    printf("\nR$ 1,00 centavos: ");
    scanf("%f", &qtd_um_real);

    total = (qtd_um_centavo * 0.01) + (qtd_cinco_centavos * 0.05) + (qtd_dez_centavos * 0.10) + (qtd_vintecinco_centavos * 0.25) + (qtd_cinquenta_centavos * 0.50) + (qtd_um_real * 1);

    printf("\nValor total economizado: R$ %.2f\n", total);

}
