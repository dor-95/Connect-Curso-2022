#include <stdio.h>
#include <stdlib.h>

    /*30. Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um algoritmo que receba
    o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do
    funcionário.*/

int main() {

    printf("|=========================|\n");
    printf("|    VENDAS E COMISSAO    |\n");
    printf("|=========================|\n");

    float salario, salario_final, vendas, comissao;

    printf("\nInforme o salario fixo: R$ ");
    scanf("%f", &salario);
    printf("Informe o valor das vendas do funcionario: R$ ");
    scanf("%f", &vendas);

    comissao = vendas * 0.04;
    salario_final = salario + comissao;

    printf("\nComissao do funcionario: R$ %.2f", comissao);
    printf("\nSalario final do funcionario: R$ %.2f\n", salario_final);
}
