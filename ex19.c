#include <stdio.h>

int main(){
    //Declarando vari�veis
    float largura, comprimento, area;
    //Entrada
    printf("Digite a largura:");
    scanf("%f", &largura);
    printf("Digite o comprimento:");
    scanf("%f", &comprimento);
    //Processamento
    area= largura * comprimento;
    //Sa�da
    printf("A area do seu lote seria:%.1f metros quadrados", area);
    return 0;
}
