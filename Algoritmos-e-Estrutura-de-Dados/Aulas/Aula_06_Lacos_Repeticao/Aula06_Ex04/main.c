#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("|==========================|\n");
    printf("|    SOMATORIO DEFINIDO    |\n");
    printf("|==========================|\n");

    int termos, n_termos, p_inicial, p_final, resultado = 0;

    printf("\nInforme o numero de termos existentes: ");
    scanf("%d", &n_termos);
    printf("\nInforme a partir de qual posicao deseja comecar a somatoria: ");
    scanf("%d", &p_inicial);
    printf("\nInforme qual posicao deseja finalizar a somatoria: ");
    scanf("%d", &p_final);
    printf("\n");

    for(int i=1;i <= n_termos;i++){

        printf("Informe o %d%c termo: ", i, 167);
        scanf("%d", &termos);

        if(i >= p_inicial && i <= p_final){
            resultado = resultado + termos;
        }
    }
    printf("\nO resultado da somatoria informada e %d\n", resultado);
}
