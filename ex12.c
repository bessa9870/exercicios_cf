#include <stdio.h>

int main(){
float salario, resultado;
printf("Digite o salaio do funcionario sem usar separador de milhar: ");
scanf("%f", &salario);
resultado = salario * 0.05;
printf("O total de imposto a ser pago ao IR seria: %.2f", resultado);
return 0;
}
