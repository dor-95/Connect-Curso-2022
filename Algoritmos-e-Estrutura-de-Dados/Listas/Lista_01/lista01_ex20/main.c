#include <stdio.h>
#include <stdlib.h>

    /* 20. Uma confecção produz X blusas de lã e para isto gasta uma certa quantidade de novelos. Faça um algoritmo
    para calcular quantos novelos de lã ela gasta por blusa. */

int main() {

    printf("|===================================|\n");
    printf("|            CONFECCAO LA           |\n");
    printf("|===================================|\n");

    float qtd_novelos, qtd_blusas, total_por_blusa;

    printf("\nInforme a quantidade de blusas confeccionadas: ");
    scanf("%f", &qtd_blusas);
    printf("Informe a quantidade de novelos de la utilizados: ");
    scanf("%f", &qtd_novelos);

    total_por_blusa = qtd_novelos / qtd_blusas;

    printf("E gastado por blusa %.2f novelos de la", total_por_blusa);
}
