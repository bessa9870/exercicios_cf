#include <math.h> //Essa biblioteca aqui me permite usar a fun��o para potenciar os numeros
#include <stdio.h>

int main(){
float base, expoente, resultado; //Vou usar o tipo double pq quando eu pesquisei parece que a fun��o funciona melhor com esse tipo
//Declarando as vari�veis
printf("Digite a base aqui: ");
scanf("%f", &base);
printf("Digite o expoente aqui: ");
scanf("%f", &expoente);
//O processamento
resultado = pow(base, expoente);
//Sa�da
printf("O resultado seria: %f", resultado);

return 0;
}
