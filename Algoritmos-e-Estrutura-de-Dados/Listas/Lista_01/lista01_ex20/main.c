#include <stdio.h>
#include <stdlib.h>

    /* 20. Uma confec��o produz X blusas de l� e para isto gasta uma certa quantidade de novelos. Fa�a um algoritmo
    para calcular quantos novelos de l� ela gasta por blusa. */

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
