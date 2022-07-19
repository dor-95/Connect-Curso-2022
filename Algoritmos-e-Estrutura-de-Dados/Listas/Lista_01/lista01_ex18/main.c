#include <stdio.h>
#include <stdlib.h>

    /*18. A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra. Faça um algoritmo para calcular e imprimir o salário bruto
    e o salário líquido de um determinado funcionário. Considere que o salário líquido é igual ao salário bruto descontando-se 10% de impostos. */

int main() {

    int hora_normal = 10, hora_extra = 15;
    float qtd_hora_normal, qtd_hora_extra, salario_bruto, salario_liquido, desconto;

    printf("|===================================|\n");
    printf("|            HIPOTHETICUS           |\n");
    printf("|===================================|\n");
    printf("|      HORA NORMAL ===>  %.2f      |\n", (float)hora_normal);
    printf("|      HORA EXTRA ====>  %.2f      |\n", (float)hora_extra);
    printf("|===================================|\n");

    printf("\nInforme a carga horaria mensal: ");
    scanf("%f", &qtd_hora_normal);
    printf("Informe a quantidade de horas extras: ");
    scanf("%f", &qtd_hora_extra);

    salario_bruto = (hora_normal * qtd_hora_normal) + (hora_extra * qtd_hora_extra);
    desconto = salario_bruto * 0.1;
    salario_liquido = salario_bruto - desconto;

    printf("\n|===================================|\n");
    printf("|        SALARIO DO SERVIDOR        |\n");
    printf("|===================================|\n");

    printf("\nSalario bruto: %.2f", salario_bruto);
    printf("\nDesconto: %.2f", desconto);
    printf("\nSalario liquido: %.2f\n", salario_liquido);

}
