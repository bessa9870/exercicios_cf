#include <stdio.h>
#include <math.h>
//Honestamente eu ainda não entendi bem qual é o BO dessa main, mas tamo ae kskksssk
int main(){
//Declarando as variaveis.
int ni;
//Como o resultado da raiz de um numero inteiro pode ser decimal, vou usar o double.
float raiz, potencia, resultado;
//Aqui começa a brincadeira
printf("Digite o numero aqui: ");
scanf("%i", &ni);
//Processamento da raiz
resultado = sqrt(ni);
//Raiz
printf("A raiz quadrada seria: %f\n", resultado);
//Processamento da potenciação
resultado = pow(ni, 2);
//Saída potência
printf("Elevado ao quadrado: %f", resultado);
return 0;
}



