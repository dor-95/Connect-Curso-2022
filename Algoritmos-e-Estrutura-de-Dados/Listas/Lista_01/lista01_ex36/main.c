#include <stdio.h>
#include <stdlib.h>

    /*36. Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule e
mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio. */

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
