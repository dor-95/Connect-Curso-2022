#include <stdio.h>
#include <stdlib.h>

    /*Faca um programa que imprima um menu de 4 pratos na tela e uma
    quinta opc˜ao para sair do programa. O programa deve imprimir o
    prato solicitado. O programa deve terminar quando for escolhido a
    quinta opc˜ao.
    */

int main() {

    int n, q;

    do{
        system("cls");
        printf("|=========================|\n");
        printf("| BARRAQUINHA DO OWSVALDO |\n");
        printf("|=========================|\n");
        printf("|         CARDAPIO        |\n");
        printf("|=========================|\n");
        printf("1 - X-Salada\n");
        printf("2 - Cachorro-quente simples\n");
        printf("3 - Cachorro-quente deluxe\n");
        printf("4 - X-Tudo\n");
        printf("5 - Sair\n");
        printf("|=========================|\n");
        printf("\nDigite o numero correspondente a opcao desejada: ");
        scanf("%d", &n);

        if(n != 5){
            printf("Digite a quantidade desejada: ");
            scanf("%d", &q);
        }

        switch(n){
        case 1:
            printf("\nPreparando %d X-Salada(s). Aguarde!\n", q);
            break;
        case 2:
            printf("\nPreparando %d cachorro-quente simples(s). Aguarde!\n", q);
            break;
        case 3:
            printf("\nPreparando %d cachorro-quente deluxe(s). Aguarde!\n", q);
            break;
        case 4:
            printf("\nPreparando %d X-Tudo(s). Aguarde!\n", q);
            break;
        case 5:
            printf("\nSaindo...\n");
            break;
        default:
            printf("Opcao Invalida! Tente Novamente");
        }

        if (n != 5){
            for(int i=5; i >= 1; i--){
                sleep(1);
                printf("\nRetornando ao Menu em %d...\n", i);
            }
        }


    } while (n != 5);
}
