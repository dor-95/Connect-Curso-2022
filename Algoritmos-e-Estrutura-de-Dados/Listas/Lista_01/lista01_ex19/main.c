#include <stdio.h>
#include <stdlib.h>

    /*  A granja Frangotech possui um controle automatizado de cada frango da sua produção. No pé direito do frango há um anel com um chip de identificação;
    no pé esquerdo são dois anéis para indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa
    R$3,50, faça um algoritmo para calcular o gasto total da granja para marcar todos os seus frangos. */

int main()
{
    printf("|===================================|\n");
    printf("|         GRANJA FRANGOTECH         |\n");
    printf("|===================================|\n");

    float preco_chip = 4, preco_anel = 3.50, gasto_total;
    int qtd_frangos;

    printf("\nInforme a quantidade atual de frangos: ");
    scanf("%d", &qtd_frangos);

    gasto_total = (qtd_frangos * preco_chip) + (qtd_frangos * (preco_anel * 2));

    printf("\nO gasto total da granja sera: R$ %.2f\n", gasto_total);
}
