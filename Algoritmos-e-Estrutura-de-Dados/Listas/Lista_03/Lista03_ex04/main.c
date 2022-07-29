#include <stdio.h>
#include <stdlib.h>

    /*4. Leia o nome de um usuário e um número N e escreva o nome dele na tela N vezes.*/

int main() {

    printf("|=======================|\n");
    printf("|     EXERCICIO 04      |\n");
    printf("|=======================|\n");

    char nome[50];
    int num = 0;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite seu numero: ");
    scanf("%d", &num);

    for(int i = 0;i < num; i++){
        printf("%d%c: %s\n", i+1, 248, nome);
    }
}
