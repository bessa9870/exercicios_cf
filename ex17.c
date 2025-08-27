#include <stdio.h>

int main(){
    //Declarando variáveis
    char nome1[20], nome2[20], nome3[20];
    //Entrada
    printf("Digite o primeiro nome: ");
    scanf("%s", &nome1);
    printf("Digite o segundo nome: ");
    scanf("%s", &nome2);
    printf("Digite o terceiro nome: ");
    scanf("%s", &nome3);
    //Processamento/Saída
    printf("%s, %s\n",nome1, nome3);
    printf("%s", nome2);
    return 0;
}
