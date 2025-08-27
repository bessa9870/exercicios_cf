#include <stdio.h>
#include <math.h> // Necessária para a função de arredondamento para cima (ceilf)

int main() {
    //Declaração de variáveis
    float custo_espetaculo, preco_convite, receita_lucro_23;
    int convites_custo, convites_lucro_23;
//Entrada
    printf("Digite o custo total do espetaculo: R$ ");
    scanf("%f", &custo_espetaculo);
    printf("Digite o preco de cada convite: R$ ");
    scanf("%f", &preco_convite);
//Processamento
    convites_custo = (int)ceilf(custo_espetaculo / preco_convite);
    receita_lucro_23 = custo_espetaculo * 1.23f;
    convites_lucro_23 = (int)ceilf(receita_lucro_23 / preco_convite);
//Saída
    printf("\n--- Analise de Venda de Convites ---\n");
    printf("Para cobrir o custo do espetaculo, devem ser vendidos: %d convites.\n", convites_custo);
    printf("Para obter um lucro de 23%%, devem ser vendidos: %d convites.\n", convites_lucro_23);

    return 0;
}
