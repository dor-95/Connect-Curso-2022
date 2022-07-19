#include <stdio.h>
#include <stdlib.h>

    /* 29. Faça um algoritmo que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este
sofreu um desconto de 10%. */

int main() {

    printf("|=============================================|\n");
    printf("|    LIQUIDACAO - 10 POR CENTO DE DESCONTO    |\n");
    printf("|=============================================|\n");

    float produto, com_desconto;

    printf("\nInforme o preco do produto: R$ ");
    scanf("%f", &produto);

    com_desconto = produto - (produto * 0.1);

    printf("Valor do produto informado com desconto: R$ %.2f\n", com_desconto);
}
