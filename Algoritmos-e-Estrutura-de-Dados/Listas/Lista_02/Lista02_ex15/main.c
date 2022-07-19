#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("|=================================|\n");
    printf("|      LISTA 02 - EXERCICIO 15    |\n");
    printf("|=================================|\n");
    printf("|        AUMENTO DE SALARIO       |\n");
    printf("|=================================|\n");
    printf("|     CARGO      |   PERCENTUAL   |\n");
    printf("|=================================|\n");
    printf("|    Gerente     |      10%c       |\n", 37);
    printf("|   Engenheiro   |      20%c       |\n", 37);
    printf("|    Tenico      |      30%c       |\n", 37);
    printf("|    Outros      |      40%c       |\n", 37);
    printf("|=================================|\n");

    float salario, novo_salario, aumento;
    char cargo[50];

    printf("\nInforme o cargo do funcionario: ");
    scanf("%s", cargo);
    printf("Informe o salario atual do funcionario: R$ ");
    scanf("%f", &salario);

    if (strcmp(cargo, "Gerente") == 0 || strcmp(cargo, "gerente") ==0){
        novo_salario = salario + (salario * 0.1);
        aumento = novo_salario - salario;
    } else if (strcmp(cargo, "Engenheiro") == 0 || strcmp(cargo, "engenheiro") == 0) {
        novo_salario = salario + (salario * 0.2);
        aumento = novo_salario - salario;
    } else if (strcmp(cargo, "Tecnico") == 0 || strcmp(cargo, "tecnico") == 0){
        novo_salario = salario + (salario * 0.3);
        aumento = novo_salario - salario;
    } else {
        novo_salario = salario + (salario * 0.4);
        aumento = novo_salario - salario;
    }

    printf("\nSalario antigo: R$ %.2f", salario);
    printf("\nAumento consedido: R$ %.2f", aumento);
    printf("\nNovo salario: R$ %.2f\n", novo_salario);


}
