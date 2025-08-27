#include <stdio.h>

int main(){
    //Declarando Variáveis
    float comprimento, largura, profundidade, m3, m3_, m3_2;
    //Entrada
    printf("Digite o comprimento:\n");
    scanf("%f", &comprimento);
    printf("Digite a largura:\n");
    scanf("%f", &largura);
    printf("Digite a profundidade:\n");
    scanf("%f", &profundidade);
    //Processamento
    m3= comprimento * largura * profundidade;
    m3_ = 45;
    m3_2 = m3 * m3_;
    //Saída
    printf("Sao %.2f metros cubicos\n", m3);
    printf("O valor de um metro cubico seria:R$%.2f\n", m3_);
    printf("O valor total seria:R$%.2f", m3_2);
    return 0;
}
