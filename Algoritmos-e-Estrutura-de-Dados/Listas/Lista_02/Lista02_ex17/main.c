#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("|======================================|\n");
    printf("|        LISTA 02 - EXERCICIO 17       |\n");
    printf("|======================================|\n");
    printf("|         CARDAPIO - LANCHONETE        |\n");
    printf("|======================================|\n");
    printf("|  COD  |      PRODUTO      |   PRECO  |\n");
    printf("|======================================|\n");
    printf("|   1   |  Cachorro quente  | R$ 11.00 |\n");
    printf("|   2   |  Bauru            | R$  8.50 |\n");
    printf("|   3   |  Misto quente     | R$  8.00 |\n");
    printf("|   4   |  Hamburger        | R$  9.00 |\n");
    printf("|   5   |  Cheeseburger     | R$ 10.00 |\n");
    printf("|   6   |  Refrigerante     | R$  4.50 |\n");
    printf("|======================================|\n");

    int codigo, qtd_produto;
    float total;

    printf("Informe o codigo do produto desejado: ");
    scanf("%d", &codigo);
    printf("Informe a quantidade do produto desejado: ");
    scanf("%d", &qtd_produto);

    switch(codigo){
    case 1:
        total = qtd_produto * 11;
        printf("\nProduto selecionado: Cachorro-quente");
        break;
    case 2:
        total = qtd_produto * 8.5;
        printf("\nProduto selecionado: Bauru");
        break;
    case 3:
        total = qtd_produto * 8;
        printf("\nProduto selecionado: Misto quente");
        break;
    case 4:
        total = qtd_produto * 9;
        printf("\nProduto selecionado: Hamburger");
        break;
    case 5:
        total = qtd_produto * 10;
        printf("\nProduto selecionado: Cheeseburger");
        break;
    case 6:
        total = qtd_produto * 4.5;
        printf("\nProduto selecionado: Refrigerante");
        break;
    default:
        printf("Opcao Invalida. Tente Novamente!");
    }

    printf("\nQuantidade solicitada: %d unidade(s)", qtd_produto);
    printf("\nValor total a pagar: R$ %.2f\n", total);
}
