#include <stdio.h>


int main()
{

    /* 7. Entrar com o dia e o m�s de uma data e informar
    quantos dias se passaram desde o in�cio do ano. Esque�a a
    quest�o dos anos bissextos e considere sempre que um m�s
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
