#include <stdio.h>
#include <stdlib.h>

    /*Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço normal de etiqueta e a escolha da condição de pagamento.
    Utilize os códigos da tabela a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.
    Código Condição de pagamento
    a) À vista em dinheiro ou cheque, recebe 10% de desconto
    b) À vista no cartão de crédito, recebe 15% de desconto
    c) Em duas vezes, preço normal de etiqueta sem juros
    d) Em duas vezes, preço normal de etiqueta mais juros de 10% */

int main()
{
    printf("|=================================|\n");
    printf("|      LISTA 02 - EXERCICIO 08    |\n");
    printf("|=================================|\n");

    float preco_produto, valor_final, parcelas;
    int condicao_pagamento, qtd_parcelas;

    printf("Informe o valor do produto: R$ ");
    scanf("%f", &preco_produto);

    printf("|=================================|\n");
    printf("|        FORMA DE PAGAMENTO       |\n");
    printf("|=================================|\n");
    printf("|1 - A vista em dinheiro ou cheque|\n");
    printf("|2 - A vista no cartao de credito |\n");
    printf("|3 - Parcelado                    |\n");
    printf("|=================================|\n");
    scanf("%d", &condicao_pagamento);

    if(condicao_pagamento == 1){
        valor_final = preco_produto - (preco_produto * 0.1);
        printf("\n10%c de desconto atribuido a compra.\n", 37);
        printf("Valor final: R$ %.2f\n", valor_final);
    } else if(condicao_pagamento == 2){
        valor_final = preco_produto - (preco_produto * 0.15);
        printf("\n15%c de desconto atribuido a compra.\n", 37);
        printf("Valor final: R$ %.2f\n", valor_final);
    } else if(condicao_pagamento == 3){
        printf("\nN%c Parcelas (MAX:12): ", 167);
        scanf("%d", &qtd_parcelas);
        if(qtd_parcelas == 2){
            printf("\n2x de %.2f", preco_produto/2);
            printf("\nValor final: R$ %.2f\n", preco_produto);
        } else if(qtd_parcelas < 13){
            valor_final = preco_produto + (preco_produto * 0.1);
            parcelas = valor_final/qtd_parcelas;
            printf("\n10%c de juros atribuido a compra.", 37);
            printf("\nValor parcelado: %dx de %.2f", qtd_parcelas, parcelas);
            printf("\nValor final: R$ %.2f\n", valor_final);
        } else{
            printf("\nOpcao invalida. Tente Novamente!\n");
        }

    } else {
        printf("\nOpcao invalida. Tente Novamente!\n");
    }
}
