#include <stdio.h>

int main() {
// Declaração de variáveis
    float produto1, produto2, produto3, produto4, produto5;
    float total_compra;
    float valor_pago;
    float troco;
// Entrada
    printf("Digite o valor do produto 1: ");
    scanf("%f", &produto1);
    printf("Digite o valor do produto 2: ");
    scanf("%f", &produto2);
    printf("Digite o valor do produto 3: ");
    scanf("%f", &produto3);
    printf("Digite o valor do produto 4: ");
    scanf("%f", &produto4);
    printf("Digite o valor do produto 5: ");
    scanf("%f", &produto5);
//Processamento
    total_compra = produto1 + produto2 + produto3 + produto4 + produto5;
//Saída
    printf("\nO total da compra e: R$ %.2f\n", total_compra);
    printf("Digite o valor do pagamento: ");
    scanf("%f", &valor_pago);
//Processamento dnv
    troco = valor_pago - total_compra;
//Saída dnv
    printf("\nO troco a ser devolvido seria: R$ %.2f\n", troco);

    return 0;
}

