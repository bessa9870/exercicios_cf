#include <stdio.h>

int main() {
//Declaração de variáveis
    float valor_compra, valor_prestaca
//Entrada
    printf("--- Loja Mamao com Acucar ---\n");
    printf("Digite o valor total da sua compra: R$ ");
    scanf("%f", &valor_compra);
//Processamento
    valor_prestacao = valor_compra / 5.0f;
//Saída
    printf("O valor de cada uma das 5 prestacoes sera de: R$ %.2f\n", valor_prestacao);

    return 0;
}

