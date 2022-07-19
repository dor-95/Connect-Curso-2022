#include <stdio.h>
#include <stdlib.h>

    /*36. Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e
mostre a quantidade de salários mínimos que ganha esse funcionário. */

int main() {

    printf("|=======================|\n");
    printf("|     SALARIO MINIMO    |\n");
    printf("|=======================|\n");

    float salario_minimo, salario_funcionario, qtd_salario_minimo;

    printf("\nDigite o valor do salario minimo: R$ ");
    scanf("%f", &salario_minimo);
    printf("\nDigite o valor do salario do funcionario: R$ ");
    scanf("%f", &salario_funcionario);


    qtd_salario_minimo = salario_funcionario / salario_minimo;

    printf("\nO funcionario ganha %.1f salario(s) minimo(s).\n", qtd_salario_minimo);
}
