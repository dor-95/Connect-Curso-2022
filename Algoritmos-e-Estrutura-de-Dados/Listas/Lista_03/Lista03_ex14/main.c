#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    /*14. Fa�a um algoritmo escreva a diversas vezes a pergunta �Ol� tudo bem?� e leia a
    resposta do usu�rio enquanto ele responde n�o. S� encerre a execu��o quando a resposta
    for igual a �Sim�*/

int main()
{
    printf("|=======================|\n");
    printf("|   LISTA 03 - EXE 14   |\n");
    printf("|=======================|\n");

    char resposta[3];
    char condicao[] = {"Sim"};
    int resultado;

    do{
        printf("Ola, tudo bem?[Sim/Nao]");
        scanf("%s", resposta);

        //Compara duas string, retorna 0 se as duas forem iguais
        resultado = strcmp(condicao,resposta);


    }while(resultado != 0);


}
