#include <math.h>

int main(){
float salario, valor_acrescimo;
printf("Salario aqui: ");
scanf("%f", &salario);
valor_acrescimo = (salario * 0.25) + salario;
printf("Seu salario com acresscimo seria: %.2f", valor_acrescimo);
return 0;
}
