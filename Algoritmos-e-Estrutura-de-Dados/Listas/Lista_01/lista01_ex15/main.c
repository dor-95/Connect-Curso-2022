#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    /*Três amigos, Carlos, André e Felipe. decidiram rachar igualmente a conta de um bar. Faça um algoritmo para
    ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que Carlos e André não paguem centavos.
    Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para André e R$35,53 para Felipe. */

int main(){

    printf("|===================================|\n");
    printf("|           CONTA DO BAR            |\n");
    printf("|===================================|\n");

    float conta, numero_com_sobra, numero_inteiro;
    int n_pessoas = 3;

    printf("Informe o valor da conta: R$ ");
    scanf("%f", &conta);

    numero_inteiro = (int)(conta / n_pessoas);
    numero_com_sobra = numero_inteiro + fmod(conta,n_pessoas);

    printf("\nA conta sera dividida:\n");
    printf("\nCarlos: R$ %.2f", numero_inteiro);
    printf("\nAndre: R$ %.2f", numero_inteiro);
    printf("\nFelipe: R$ %.2f\n", numero_com_sobra);


}
