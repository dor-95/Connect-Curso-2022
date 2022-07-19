#include <stdio.h>
#include <stdlib.h>

    /*16. A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de queijo, uma fatia de presunto e uma rodela de hambúrguer.
    Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 100 gramas, faça um algoritmo em que
    o dono forneça a quantidade de sanduíches a fazer, e a máquina informe as quantidades (em quilos) de queijo, presunto e carne necessários para compra. */
    //2 - queijo 50g cada
    //1 - presunto 50g cada
    //1 - hamburguer 100g cada

int main()
{
    printf("|===================================|\n");
    printf("|        LANCHONETE GOSTOSURA       |\n");
    printf("|===================================|\n");

    int qtd_sanduiches;
    float queijo_gramas = 0.1, presunto_gramas = 0.05, hamburguer_gramas = 0.1;
    float queijo_kg, presunto_kg, hamburguer_kg;

    printf("Informe a quantidade de sanduiches: ");
    scanf("%d", &qtd_sanduiches);

    queijo_kg = (qtd_sanduiches * queijo_gramas);
    presunto_kg = (qtd_sanduiches * presunto_gramas);
    hamburguer_kg = (qtd_sanduiches * hamburguer_gramas);

    printf("\nQuantidade de queijo: %.2f Kg", queijo_kg);
    printf("\nQuantidade de presunto: %.2f Kg", presunto_kg);
    printf("\nQuantidade de carne: %.2f Kg", hamburguer_kg);
}
