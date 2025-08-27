#include <stdio.h>
#include <math.h>

int main() {
//Declaração de variáveis
    float p_aplicacao_mensal, i_taxa_percentual, i_taxa_decimal, valor_acumulado;
    int n_meses;
//Entrada
    printf("Digite o valor da aplicacao mensal (P): R$ ");
    scanf("%f", &p_aplicacao_mensal);
    printf("Digite a taxa de juros mensal (%%, ex: 0.5 para 0.5%%): ");
    scanf("%f", &i_taxa_percentual);
    printf("Digite o numero de meses para a aplicacao (n): ");
    scanf("%d", &n_meses);
//Processamento
    i_taxa_decimal = i_taxa_percentual / 100.0f;
    valor_acumulado = (p_aplicacao_mensal * (powf(1 + i_taxa_decimal, n_meses) - 1)) / i_taxa_decimal;
//Saída
    printf("O valor acumulado no final do periodo sera de: R$ %.2f\n", valor_acumulado);

    return 0;
}

