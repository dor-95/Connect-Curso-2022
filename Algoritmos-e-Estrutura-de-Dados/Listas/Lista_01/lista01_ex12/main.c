#include <stdio.h>
#include <stdlib.h>

/* . Fa�a um algoritmo para ler o sal�rio de um funcion�rio e aument�-Io em 15%. Ap�s o aumento, desconte 8%
de impostos. Imprima o sal�rio inicial, o sal�rio com o aumento e o sal�rio final. */

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
