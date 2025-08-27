#include <stdio.h>

int main(){
int peso;
//Declarando variável
float pesog, resultado;
//Comandos de entrada
printf("Digite seu peso. Use apemas numeros inteiros: \n");
scanf("%i", &peso);
pesog = peso * 1000;
printf("Seu peso em gramas seria: %.2f\n", pesog);
resultado = pesog * 5/100 + pesog;
printf("Seu peso mais 5%%: %f", resultado);
return 0;
}


