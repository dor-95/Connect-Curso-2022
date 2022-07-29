#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    /*8. Leia o nome e a idade de 10 pessoas e exiba o nome da pessoa mais nova.*/

int main()
{
    printf("|=======================|\n");
    printf("|     EXERCICIO 08      |\n");
    printf("|=======================|\n");

    int idade, menorIdade;
    char nome[50], pessoaNova[50];

    for(int i = 0; i < 10; i++){
        printf("Digite o %d%c nome: ", i+1, 248);
        scanf("%s", nome);
        printf("Digite a %d%c idade: ", i+1, 248);
        scanf("%d", &idade);

        if(i == 0){
            strcpy(pessoaNova, nome);
            menorIdade = idade;
        } else if (idade < menorIdade) {
            strcpy(pessoaNova, nome);
            menorIdade = idade;
        }
    }
    printf("\nPessoa mais nova: %s\n", pessoaNova);
}
