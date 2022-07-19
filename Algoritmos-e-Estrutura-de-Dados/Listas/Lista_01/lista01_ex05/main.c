#include <stdio.h>

int main()
{
    /* 5. Um motorista deseja colocar no seu tanque X reais de
    gasolina. Escreva um algoritmo para ler o preço do litro
    da gasolina e o valor do pagamento, e exibir quantos litros
    ele conseguiu colocar no tanque. */

    printf("============================\n");
    printf("|        AUTO-POSTO        |\n");
    printf("============================\n");

    float price_fuel, payment;

    printf("\nInforme o preco do litro da gasolina: ");
    scanf("%f", &price_fuel);

    printf("Informe o valor do pagamento: ");
    scanf("%f", &payment);

    float liters = payment / price_fuel;
    printf("\n============================\n");
    printf("\nSera abastecido %.2f litro(s) de gasolina.\n", liters);
}
