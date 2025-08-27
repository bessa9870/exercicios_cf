#include <stdio.h>

int main() {
//Declaração de variáveis
    float preco_custo, percentual_acrescimo, valor_venda;
//Entrada
    printf("Digite o preco de custo do produto: R$ ");
    scanf("%f", &preco_custo);
    printf("Digite o percentual de acrescimo (ex: 40 para 40%%): ");
    scanf("%f", &percentual_acrescimo);
//Processamento
    valor_venda = preco_custo * (1 + (percentual_acrescimo / 100.0f));
//Saída
    printf("O valor de venda do produto e: R$ %.2f\n", valor_venda);

    return 0;
}
