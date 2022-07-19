#include <stdio.h>
#include <stdlib.h>

    /* 23. Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o � suficientemente longa. Assumindo que seja poss�vel medir sua sombra
    e a do pr�dio no ch�o, e que voc� lembre da sua altura, fa�a um algoritmo para ler os dados necess�rios e calcular a altura do pr�dio*/

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
