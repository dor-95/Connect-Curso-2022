#include <stdio.h>
#include <stdlib.h>

    /*38. Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
    a. a idade dessa pessoa em anos;
    b. a idade dessa pessoa em meses;
    c. a idade dessa pessoa em dias
    d. a idade dessa pessoa em semanas*/

int main() {

    int ano_nascimento, ano_atual, idade_ano, idade_meses, idade_dias, idade_semanas;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    idade_ano = ano_atual - ano_nascimento;
    idade_meses = idade_ano * 12;
    idade_dias = idade_ano * 365;
    idade_semanas = idade_dias / 7;

    printf("\nIdade em anos: %d", idade_ano);
    printf("\nIdade em meses: %d", idade_meses);
    printf("\nIdade em semanas: %d", idade_semanas);
    printf("\nIdade em dias: %d\n", idade_dias);
}
