#include <stdio.h>
#include <stdlib.h>

    /*12. Fa�a um algoritmo que leia 20 n�meros e, ao final, escreva quantos est�o entre 0 e
    a. 100, quantos est�o entre 101 e 200 e quantos s�o maiores de 200.*/

int main() {

    printf("|=======================|\n");
    printf("|   LISTA 03 - EXE 12   |\n");
    printf("|=======================|\n");

    int numero, total_1 = 0, total_2 = 0, total_3 = 0;

    //Le os valores digitados pelo usu�rio
    for(int i = 0; i < 20; i++){
        printf("Digite o %d%c numero: ", i+1, 248);
        scanf("%d", &numero);

        //Verifica o intervalo do valor informado
        if((numero >= 0) && (numero <= 100)){
            total_1++;
        } else if((numero >= 101) && (numero <= 200)){
            total_2++;
        } else if(numero > 200){
            total_3++;
        }
    }
    //Printa as vari�veis somatorias
    printf("\nEntre 0 a 100: %d\n", total_1);
    printf("Entre 101 e 200: %d\n", total_2);
    printf("Maior que 200: %d\n", total_3);
}
