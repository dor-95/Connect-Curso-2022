#include <stdio.h>
#include <stdlib.h>

    /*6. Leia a idade de 20 pessoas e exiba a média das idades.*/

int main()
{
    printf("|=======================|\n");
    printf("|     EXERCICIO 06      |\n");
    printf("|=======================|\n");

    int idade, somaIdade = 0, maxRepeat = 20;
    float media = 0;

    for(int i = 0; i < maxRepeat; i++){

        printf("Digite a %d%c idade: ", i+1, 248);
        scanf("%d", &idade);
        somaIdade += idade;
    }
    media = somaIdade / maxRepeat;
    printf("\nMedia das idades: %.2f\n", media);
}
