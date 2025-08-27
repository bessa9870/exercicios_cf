#include <stdio.h>

int main(){
//Declarando variáveis
   float total, quantidade1, valor1, quantidade2, valor2, quantidade3, valor3;
   printf("Digite a quantidade do primeiro produto: ");
   scanf("%f", &quantidade1);
   printf("Digite o valor do primeiro produto: ");
   scanf("%f", &valor1);
   printf("Digite a quantidade do segundo produto: ");
   scanf("%f", &quantidade2);
   printf("Digite o valor do segundo produto: ");
   scanf("%f", &valor2);
   printf("Digite a quantidade do terceiro produto: ");
   scanf("%f", &quantidade3);
   printf("Digite o valor do terceiro produto: ");
   scanf("%f", &valor3);

//Processamento
   total = (quantidade1 * valor1) + (quantidade2 * valor2) + (quantidade3 * valor3);
//Saída
   printf("Os valores dos produtos seriam:%f", total);
    return 0;
}


