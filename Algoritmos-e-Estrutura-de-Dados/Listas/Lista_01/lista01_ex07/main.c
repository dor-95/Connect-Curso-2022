#include <stdio.h>


int main()
{

    /* 7. Entrar com o dia e o mês de uma data e informar
    quantos dias se passaram desde o início do ano. Esqueça a
    questão dos anos bissextos e considere sempre que um mês
    possui 30 dias */

    printf("============================\n");
    printf("|        Ano  2022         |\n");
    printf("============================\n");

    int day, month, x;

    printf("Informe o dia: ");
    scanf("%d", &day);
    printf("Informe o mes: ");
    scanf("%d", &month);

    x = day +(30 * (month - 1));

    printf("\nAte o momento, passaram %d dias de 2022.\n", x);
}
