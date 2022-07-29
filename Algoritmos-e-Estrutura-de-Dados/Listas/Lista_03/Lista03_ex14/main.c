#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    /*14. Faça um algoritmo escreva a diversas vezes a pergunta “Olá tudo bem?” e leia a
    resposta do usuário enquanto ele responde não. Só encerre a execução quando a resposta
    for igual a “Sim”*/

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
