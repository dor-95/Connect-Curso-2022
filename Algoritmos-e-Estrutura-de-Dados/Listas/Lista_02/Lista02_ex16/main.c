#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("|=================================|\n");
    printf("|      LISTA 02 - EXERCICIO 16    |\n");
    printf("|=================================|\n");
    printf("|         CREDITO ESPECIAL        |\n");
    printf("|=================================|\n");
    printf("|   SALDO MEDIO    |  PERCENTUAL  |\n");
    printf("|=================================|\n");
    printf("|    De 0 a 200    |      0%c      |\n",37);
    printf("|   De 201 a 400   |     20%c      |\n",37);
    printf("|   De 401 a 600   |     30%c      |\n",37);
    printf("|   Acima de 601   |     40%c      |\n",37);
    printf("|=================================|\n");

    float saldo, credito;

    printf("\nInforme o saldo medio do cliente: R$ ");
    scanf("%f", &saldo);

    if (saldo > 0 && saldo <= 200){
        printf("\nSaldo medio: R$ %.2f", saldo);
        printf("\nSem margem para concessao de credito especial.\n");
    } else if (saldo >= 201 && saldo <= 400){
        credito = saldo * 0.2;
        printf("\nSaldo medio: R$ %.2f", saldo);
        printf("\nCredito especial aprovado: R$ %.2f\n", credito);
    } else if (saldo >= 401 && saldo <= 600){
        credito = saldo * 0.3;
        printf("\nSaldo medio: R$ %.2f", saldo);
        printf("\nCredito especial aprovado: R$ %.2f\n", credito);
    } else if (saldo >= 601){
        credito = saldo * 0.4;
        printf("\nSaldo medio: R$ %.2f", saldo);
        printf("\nCredito especial aprovado: R$ %.2f\n", credito);
    } else {
        printf("\nOpcao invalida. Tente Novamente!\n");
    }

}
