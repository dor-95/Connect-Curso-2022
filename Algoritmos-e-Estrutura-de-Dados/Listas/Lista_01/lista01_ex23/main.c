#include <stdio.h>
#include <stdlib.h>

    /* 23. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa. Assumindo que seja possível medir sua sombra
    e a do prédio no chão, e que você lembre da sua altura, faça um algoritmo para ler os dados necessários e calcular a altura do prédio*/

int main() {

    printf("|===================================|\n");
    printf("|    EXERCICIO OPTICA GEOMETRICA    |\n");
    printf("|===================================|\n");

    float altura_predio, sombra_predio, sombra_individuo, altura_individuo;

    printf("\nInforme a medida da sombra do predio: ");
    scanf("%f", &sombra_predio);
    printf("Informe a medida da sombra do individuo: ");
    scanf("%f", &sombra_individuo);
    printf("Informe a altura do individuo: ");
    scanf("%f", &altura_individuo);

    altura_predio = (sombra_predio / sombra_individuo) * altura_individuo;

    printf("\nA altura do predio sera: %.2f\n", altura_predio);
}
