#include <stdio.h>
#include <stdlib.h>

    /*39. Jo�o recebeu seu sal�rio de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que
    est�o atrasadas. Como as contas est�o atrasadas, Jo�o ter� de pagar multa de 2% sobre cada conta. Fa�a
    um algoritmo que calcule e mostre quanto restar� do sal�rio do Jo�o*/

int main() {

    printf("|=============================|\n");
    printf("|     PAGAMENTO DE CONTAS     |\n");
    printf("|=============================|\n");

    float multa = 0.02, salario_final;
    int salario = 1200, conta_1 = 200, conta_2 = 120;

    salario_final = salario - (conta_1 + conta_2 +(conta_1 * multa) + (conta_2 * multa));

    printf("\nApos pagamento das contas com multa, restara R$ %.2f do salario do Joao\n", salario_final);


}
