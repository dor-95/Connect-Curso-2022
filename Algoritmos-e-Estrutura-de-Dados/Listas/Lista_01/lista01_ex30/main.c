#include <stdio.h>
#include <stdlib.h>

    /*30. Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um algoritmo que receba
    o sal�rio fixo de um funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e o sal�rio final do
    funcion�rio.*/

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
