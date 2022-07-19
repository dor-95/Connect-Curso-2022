#include <stdio.h>
#include <stdlib.h>

    /* Quando ac˜oes s˜ao vendidas ou compradas por meio de um corretor, a
    comiss˜ao do corretor e muitas vezes calculada usando uma escala que
    depende do valor das ac˜oes negociadas. Escreva um programa calcule o
    valor da comiss˜ao a partir do valor da transac˜ao informado pelo usuario,
    sabendo-se que o corretor cobra os valores indicados abaixo e que a
    comiss˜ao mınima e de R$ 39:
    At´e R$ 2.500,00, comiss˜ao de R$30+1,7%
    R$2.500,01 ate R$6.250,00, comiss˜ao de R$56 + 0,66%
    R$6.250,01 ate R$20.000,00, comiss˜ao de R$76 + 0,34%
    R$20.000,01 ate R$50.000,00, comiss˜ao de R$100 + 0,22%
    R$50.000,01 ate R$500.000,00, comiss˜ao de R$155 + 0,11%
    Mais que R$ 500.000,00, comiss˜ao de R$255 + 0,09% */

int main() {

    printf("|================|\n");
    printf("|    COMISSAO    |\n");
    printf("|================|\n");

    float transacao, comissao;
    printf("\nInforme o valor da transacao: ");
    scanf("%f", &transacao);

    if(transacao <= 2500.00){
        comissao = 30 + (0.017 * transacao);
        if (comissao < 39){
            comissao = 39;}
    } else if (transacao > 2500 && transacao <= 6250) {
        comissao = 56 + (0.0066 * transacao);
    } else if (transacao > 6250 && transacao <= 20000) {
        comissao = 76 + (0.0034 * transacao);
    } else if (transacao > 20000 && transacao <= 50000) {
        comissao = 100 + (0.0022 * transacao);
    } else if (transacao > 50000 && transacao <= 500000) {
        comissao = 155 + (0.0011 * transacao);
    } else if (transacao > 500000) {
        comissao = 255 + (0.0009 * transacao);
    }
    printf("O valor da comissao sera: R$ %.2f\n", comissao);
}
