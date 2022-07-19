#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("|=================================|\n");
    printf("|      LISTA 02 - EXERCICIO 14    |\n");
    printf("|=================================|\n");
    printf("|    TRANSFERENCIA DE VEICULOS    |\n");
    printf("|=================================|\n");

    int ano;
    float valor, total;

    printf("\nDigite o valor de tabela do veiculo: R$ ");
    scanf("%f", &valor);
    printf("Digite o ano de fabricacao do veiculo (YYYY): ");
    scanf("%d", &ano);

    if (ano > 1886 && ano <= 1990){
        total = valor * 0.01;
        printf("\nImposto a ser pago R$ %.2f\n", total);
    } else if (ano > 1990 && ano < 2024) {
        total = valor * 0.015;
        printf("\nImposto a ser pago R$ %.2f\n", total);
    } else {
        printf("\nOpcao invalida. Tente Novamente!\n");
    }
}
