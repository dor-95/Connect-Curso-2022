#include <stdio.h>
#include <stdlib.h>

    /*16. Escreva um algoritmo que simule o funcionamento de um caixa de supermercado. O
    seu algoritmo deve receber do a informação de quantos produtos o cliente comprou e, para
    cada produto, deverá ler o seu preço. Ao final, deverá informar quanto o cliente deve pagar
    pelas compras.*/

int main() {

    printf("|=======================|\n");
    printf("|   LISTA 03 - EXE 16   |\n");
    printf("|=======================|\n");

    int qtdProdutos, quantidade;
    float preco, totalItem, totalCompra;

    printf("\nInforme o total de ITENS comprados: ");
    scanf("%d", &qtdProdutos);

    for(int i = 0; i < qtdProdutos; i++){
        printf("\n");
        printf("ITEM %d\n", i+1);
        printf("Valor unitario: R$ ");
        scanf("%f", &preco);
        printf("Quantidade: ");
        scanf("%d", &quantidade);
        totalItem = preco * quantidade;
        printf("Valor total ITEM %d: R$ %.2f\n", i+1, totalItem);
        totalCompra += totalItem;
    }
    printf("\nValor total a pagar: R$ %.2f\n", totalCompra);



}
