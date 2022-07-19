#include <stdio.h>
#include <stdlib.h>

    /*38. Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
    a. a idade dessa pessoa em anos;
    b. a idade dessa pessoa em meses;
    c. a idade dessa pessoa em dias
    d. a idade dessa pessoa em semanas*/

int main() {

    printf("|============================|\n");
    printf("|     CONVERSOR DE IDADE     |\n");
    printf("|============================|\n");

    int dia_nasc, mes_nasc, ano_nasc;
    int dia_atual, mes_atual, ano_atual;
    int dif_dia, dif_mes, dif_ano;
    int idade_dia, idade_semana, idade_mes, idade_ano;


    printf("\nInforme o dia do nascimento (DD): ");
    scanf("%d", &dia_nasc);
    printf("Informe o mes do nascimento (MM): ");
    scanf("%d", &mes_nasc);
    printf("Informe o ano do nascimento (AAAA): ");
    scanf("%d", &ano_nasc);

    printf("\nInforme o dia do ano atual (DD): ");
    scanf("%d", &dia_atual);
    printf("Informe o mes do ano atual (MM): ");
    scanf("%d", &mes_atual);
    printf("Informe o ano do ano atual (AAAA): ");
    scanf("%d", &ano_atual);

    dif_dia = dia_atual - dia_nasc;
    dif_mes = mes_atual - mes_nasc;
    dif_ano = ano_atual - ano_nasc;

    idade_dia = dif_dia + (dif_mes * 30) + (dif_ano * 365);
    idade_semana = idade_dia / 7;
    idade_mes = idade_dia / 30;
    idade_ano = idade_dia / 365;

    printf("\nIdade em anos: %d", idade_ano);
    printf("\nIdade em meses: %d", idade_mes);
    printf("\nIdade em dias: %d", idade_dia);
    printf("\nIdade em semanas: %d\n", idade_semana);


}
