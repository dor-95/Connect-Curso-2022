#include <stdio.h>
#include <stdlib.h>

#define _MAX 20
#define MAIOR 50
#define MENOR 7

    /*2. Crie um programa que leia um vetor de 20 posições e informe:
        a) Quantos números pares existem no vetor
        b) Quantos números ímpares existem no vetor
        c) Quantos números maiores do que 50
        d) Quantos números menores do que 7 */

int main() {

    printf("|======================|\n");
    printf("|  Lista 004 - Ex 002  |\n");
    printf("|======================|\n");
    printf("|       VETORES        |\n");
    printf("|======================|\n");
    printf("\n");

    //Declara e inicializa as variaveis (exceto o vetor)
    int vetor[_MAX];
    int par = 0, impar = 0;
    int maior = 0, menor = 0;

    //Recebe os valores no vetor digitado pelo usuário
    for(int i = 0; i < _MAX; i++) {
        printf("Digite o valor de vetor[%d]: ", i);
        scanf("%d", &vetor[i]);

        //Verifica se o numero e PAR ou IMPAR
        if(vetor[i] % 2 == 0){
            par += 1;
        } else {
            impar += 1;
        }

        //Verifica se o numero é > 50 ou < 7
        if(vetor [i] > MAIOR){
            maior += 1;
        } else if (vetor[i] < MENOR){
            menor += 1;
        }

    }

    //Printa na tela os valores solicitados no exercicio:
    printf("\nQuantidade de numeros pares: %d\n", par);
    printf("Quantidade de numeros impares: %d\n", impar);
    printf("Quantidade de numeros maiores que 50: %d\n", maior);
    printf("Quantidade de numeros menores que 7: %d\n", menor);
}
