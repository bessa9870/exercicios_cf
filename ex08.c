#include <stdio.h>

int main(){
//Declaração de variávies
float salario_func, salario_min, resultado;
//Entrada
printf("Digite o valor do salario: ");
scanf("%f", &salario_func);
salario_min = 1.518;
//Processamento
resultado = salario_func / salario_min;
//Saída
printf("Esse funcionario ganha: %f salario's' minimos's'", resultado);
return 0;
}

