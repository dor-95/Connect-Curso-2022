#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    /*20. Uma loja de animais vende gatos e cachorros. Escreva um algoritmo que leia a quantidade de
    animais da loja e, para cada animal, leia a informação da espécie do animal (se é gato ou
    cachorro). Ao final, exiba a quantidade de animais que são gatos e a quantidade de animais que
    são cachorros existentes na loja*/

int main()
{
    printf("|========================|\n");
    printf("|    LISTA 03 - EXE 20   |\n");
    printf("|========================|\n");

    int qtd_animais, qtd_gato = 0, qtd_cachorro = 0;
    char especie[9];
    char gato[] = "gato";
    char cachorro[] = "cachorro";

    printf("\nInforme a quantidade de animais na loja: ");
    scanf("%d", &qtd_animais);

    if (qtd_animais > 0){
        printf("\nEspecifique a especie dos animais (gato|cachorro): \n");
        printf("\n");
    } else if (qtd_animais != 0){
        printf("Entrada Invalida! Tente Novamente.\n");
    }


    for(int i = 0; i < qtd_animais; i++){

        printf("#%d%c animal: ", i+1, 248);
        fflush(stdout);
        scanf("%s", especie);

        if (strcmp(especie,gato) == 0){
            qtd_gato += 1;
        } else if (strcmp(especie,cachorro) == 0) {
            qtd_cachorro += 1;
        } else {
            printf("Entrada Invalida! Siga o padrao informado.\n");
            printf("\n");
            i--;
        }

    }
    if(qtd_animais >= 0){
        system("cls");
        printf("\nQuantidade de animais na loja: \n");
        printf("\nGato(s): %d\n", qtd_gato);
        printf("Cachorro(s): %d\n", qtd_cachorro);
    }


}
