#include <stdio.h>
#include <stdlib.h>

    /* Um tonel de refresco � feito com 8 partes de �gua mineral e 2 partes de suco de maracuj�. Fa�a um algoritmo para calcular quantos litros de �gua e de
    suco s�o necess�rios para se fazer X litros de refresco (informados pelo usu�rio).*/

int main() {

    printf("|===================================|\n");
    printf("|              REFRESCO             |\n");
    printf("|===================================|\n");

    float litros, qtd_total, qtd_suco, qtd_agua;

    printf("\nInforme quantos litros(L) deseja: ");
    scanf("%f", &litros);

    qtd_total = litros / 10;
    qtd_suco = qtd_total * 2;
    qtd_agua = qtd_total * 8;

    printf("\nSerao necessarios em litros (L): ");
    printf("\nSuco: %.2f litros.", qtd_suco);
    printf("\nAgua Mineral: %.2f litros.\n", qtd_agua);

}
