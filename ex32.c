#include <stdio.h>

int main() {
//Declaração de variáveis
    float salario_atual, novo_salario;
//Entrada
    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario_atual);
//Processamento
    novo_salario = salario_atual * 1.37f;
//Saída
    printf("O novo salario, com aumento de 37%%, e: R$ %.2f\n", novo_salario);

    return 0;
}
