#include <stdio.h>
#include <stdlib.h>
#define _MAX 10

    /*6. Ler um vetor A com 10 elementos inteiros correspondentes as idades de um grupo de pessoas. Escreva um
    programa que determine e escreva a menor e a maior idades e suas respectivas posições.*/

int main()
{
    printf("|======================|\n");
    printf("|  Lista 004 - Ex 006  |\n");
    printf("|======================|\n");
    printf("|       VETORES        |\n");
    printf("|======================|\n");
    printf("\n");

    //Declara as variáveis e inicializa posicao de Menor e Maior
    int vetorA[_MAX];
    int menor, maior;
    int posicaoMenor = 0, posicaoMaior = 0;

    for(int i = 0; i < _MAX; i++){

        //Le as idades digitadas pelo usuário
        printf("Digite a idade da %d%c pessoa: ", i+1, 248);
        scanf("%d", &vetorA[i]);

        //Inicializa as variaveis com a primeira idade digitada, procura a menor idade e a maior idade
        if(i == 0){
            menor = vetorA[i];
            maior = vetorA[i];
        } else if(vetorA[i] < menor){
            menor = vetorA[i];
            posicaoMenor = i;
        } else if(vetorA[i] > maior){
            maior = vetorA[i];
            posicaoMaior = i;
        }
    }
    //Exibe os resultados obtidos
    printf("\nMenor idade: %d  |  Posicao: %d%c | Alocado no VetorA[%d]\n", menor, posicaoMenor+1, 248, posicaoMenor);
    printf("Maior idade: %d  |  Posicao: %d%c | Alocado no VetorA[%d]\n", maior, posicaoMaior+1, 248, posicaoMaior);
}
