#include <stdio.h>
#include <stdlib.h>

    /*3. Leia o nome do usuário e escreva o nome dele na tela 10 vezes.*/

int main() {

    printf("|=======================|\n");
    printf("|     EXERCICIO 03      |\n");
    printf("|=======================|\n");

    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    for(int i=0; i < 10; i++){
        printf("%d%c: ", i + 1, 248);
        printf("%s\n", nome);
    }
}
