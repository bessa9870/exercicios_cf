#include <stdio.h>

int main() {
// Declara��o de vari�veis
    float valor_original, novo_valor;
// Entrada
    printf("Digite o valor original do produto: R$ ");
    scanf("%f", &valor_original);
//Processamento
    novo_valor = valor_original * 0.91;
//Sa�da
    printf("\nCom o desconto de 9%%, o novo valor e: R$ %.2f\n", novo_valor);

    return 0;
}
