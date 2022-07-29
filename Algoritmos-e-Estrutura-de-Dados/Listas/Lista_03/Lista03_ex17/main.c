#include <stdio.h>
#include <stdlib.h>

#define PRECO_QUILO 23.59

    /*17. Em um restaurante Self-Service, o preço do quilo custa R$ 23,59. Crie um algoritmo
    a. que, para cada cliente, leia o peso do prato e valor gasto com bebida e calcule o valor total
    da conta que o cliente irá pagar [ valor da conta = bebida + (peso * 15) ]. Só encerre a
    execução quando o peso do prato digitado for igual a 0 e o valor da bebida for também igual
    a 0.*/

int main() {

    printf("|========================|\n");
    printf("|    LISTA 03 - EXE 17   |\n");
    printf("|========================|\n");
    printf("| VALOR QUILO | R$ %.2f |\n", PRECO_QUILO);
    printf("|========================|\n");

    float peso, valorBebidas, valorTotal;
    int condicao = 1;
    int i = 1;

    do{
        printf("\nCLIENTE #%d", i);
        printf("\nDigite o peso do prato: ");
        scanf("%f", &peso);
        printf("Digite o valor gasto com bebidas: R$ ");
        scanf("%f", &valorBebidas);

        if(peso != 0 && valorBebidas != 0){
            valorTotal = valorBebidas + (peso * PRECO_QUILO);
            printf("Valor total a pagar: R$ %.2f\n", valorTotal);
        } else {
            printf("\nPrograma Finalizado!\n");
            system("pause");
            condicao = 0;
        }
        i++;
    }while(condicao);



}
