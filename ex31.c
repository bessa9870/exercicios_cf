#include <stdio.h>

int main() {
//Declaração de variáveis
    float custo_fabrica, custo_com_impostos, custo_consumidor;
//Entrada
    printf("Digite o custo de fabrica do carro: R$ ");
    scanf("%f", &custo_fabrica);
//Processamento
    custo_com_impostos = custo_fabrica * 1.45f;
    custo_consumidor = custo_com_impostos * 1.28f;
//Saída
    printf("Considerando 45%% de impostos e 28%% do distribuidor,\n");
    printf("o custo final do carro ao consumidor e: R$ %.2f\n", custo_consumidor);

    return 0;
}
