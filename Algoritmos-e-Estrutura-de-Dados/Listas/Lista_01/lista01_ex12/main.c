#include <stdio.h>
#include <stdlib.h>

/* . Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento, desconte 8%
de impostos. Imprima o salário inicial, o salário com o aumento e o salário final. */

int main()
{

    printf("|===================================|\n");
    printf("|        SALARIO DO SERVIDOR        |\n");
    printf("|===================================|\n");

    float salario_inicial, salario_aumento, salario_final, salario_imposto = 0.08;

    printf("\nInforme o salario: R$ ");
    scanf("%f", &salario_inicial);

    salario_aumento = salario_inicial + (salario_inicial * 0.15);
    salario_final = salario_aumento - (salario_aumento * salario_imposto);

    printf("\nSalario inicial: R$ %.2f", salario_inicial);
    printf("\nSalario com aumento: R$ %.2f", salario_aumento);
    printf("\nSalario final: R$ %.2f\n", salario_final);


}
