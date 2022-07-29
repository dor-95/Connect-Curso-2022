#include <stdio.h>
#include <stdlib.h>

    /*7. Leia a idade de 20 pessoas e exiba quantas pessoas são maiores de idade*/

int main()
{
    printf("|=======================|\n");
    printf("|     EXERCICIO 07      |\n");
    printf("|=======================|\n");

    int idade, qtdMaiorIdade = 0, qtdRepeat = 20;

    for(int i = 0; i < qtdRepeat; i++){
        printf("Digite a %d%c idade: ", i+1, 248);
        scanf("%d", &idade);

        if(idade >= 18){
            qtdMaiorIdade += 1;
        }
    }
    printf("\n%d pessoas sao maiores de idade.\n", qtdMaiorIdade);
}
