#include <stdio.h>

int main()
{
    /* Escreva um algoritmo para ler o nome e a idade de uma
    pessoa, e exibir quantos dias de vida ela possui.Considere
    sempre anos completos, e que um ano possui 365 dias. Ex:
    uma pessoa com 19 anos possui 6935 dias de vida; veja um
    exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935 DIAS */

    printf("============================\n");
    printf("|         PREVISAO         |\n");
    printf("============================\n");

    char name[50];
    int age;

    printf("Digite seu 1 nome: ");
    scanf("%s", name);
    printf("Digite sua idade: ");
    scanf("%d", &age);

    int days = age * 365;
    printf("%s, voce ja viveu %d dias", name, days);
}
